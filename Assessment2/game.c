//
// Created by Cian on 16/04/2018.
// R00142270
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#include "game.h"


void play_game(char *firstName, char *secondName)
{
    printf("Xs and Os!\n"); //prints header
    GAME p_game_info = 0;
    p_game_info = (struct game*)malloc(sizeof(struct game));  //Allocates memory
    printf("Address to the Pointer: %p\n",p_game_info);  //Address of the pointer
    initialise_game(p_game_info, firstName, secondName);
    int moves = 0;
    while(p_game_info->finished==False)
    {
        draw_banner();
        display_board_positions();
        display_board(p_game_info->board);
        print_status(p_game_info);
        process_move(p_game_info, moves);
        ++moves; //Keeps track of number of moves
    }
    draw_banner();
    print_status(p_game_info);
    display_board(p_game_info->board);
    free (p_game_info);
}
/*
 * @param name1: Pointer to the name of the first player
 * @param name2: Pointer to the name of the second player
 */
void initialise_game(GAME p_game_info, char* name1, char* name2)
{
    int d;
    for (d = 0; d < MAX_ROW_SIZE; d++) //for loop for down
    {
        int a;
        for (a = 0; a < MAX_ROW_SIZE; a++) // for loop for across
            p_game_info->board[d][a] = SPACE;
    }
    p_game_info->finished = False;
    p_game_info->status == P1_TURN;

    strncpy(p_game_info->playerNames[0], name1, MAX_NAME_LEN);//copies name of first player to array playerNames
    strncpy(p_game_info->playerNames[1], name2, MAX_NAME_LEN);//copies name of second player to array playerNames

    srand(time(NULL)); //seeds the random number generator used by the function rand
    int player_Turn = rand()%2; //randomizes the turns between the 2 players
    if (player_Turn ==1)
        p_game_info-> status = P1_TURN;
    else
    {
        p_game_info->status = P2_TURN;
    }

}
/*
 * @param Draws banner for the game
 */
void draw_banner()
{
    int i;
    for (i = 0; i < 4; i++)
    {
        printf("\n");
    }
    printf("----------------");
    printf("\nGAME STATUS\n");
    printf("----------------");
    printf("\n");
}
/*
 * @param Displays the game board
 */
void display_board(char board[3][3])
{
    char border[] = "-------";
    char line = '|';
    int r;
    int c;
    for (r = 0; r < 3; r++)     //Switches Position of the rows
    {
        for (c = 0; c < 3; c++) //Switches position of the columns
        {
            if (c <= 1)
            {
                printf("%c %c", board[r][c],line);
            }
            else
            {
                printf("%c", board[r][c]);
            }

        }
            printf("\n");
            if(r!=2)
            printf("%s",border);
            printf("\n");
    }
}
/*
 * Prints the status of the game
 */
void print_status(GAME p_game_info)
{
    char* firstName = p_game_info->playerNames[0];    //Copying the address of the first player
    char* secondName = p_game_info->playerNames[1];  //Copying the address of the second player
    char Firstname[MAX_NAME_LEN];
    char Secondname[MAX_NAME_LEN];
    int i;
    for(i=0;i<MAX_NAME_LEN;i++)
        if(*(firstName+i)!="\0")
        {
            Firstname[i] = *(firstName + i);
        }
    for(int i=0;i<MAX_NAME_LEN;i++)
        if(*(secondName+i)!="\0")
        {
            Secondname[i] = *(secondName+i);
        }
    //possible statuses of game
    if (p_game_info->status == P1_TURN)
        printf("It's %s's Turn\n", Firstname); // prints first players turn if the status is the first players turn
    else if (p_game_info->status == P2_TURN)
        printf(" It's %s's Turn\n", Secondname); // prints second players turn if the status is the second players turn
    else if (p_game_info->status == P1_WON)
        printf("Great job %s, you have won the match\n", Firstname); // player 1 wins the match
    else if (p_game_info->status == P2_WON)
        printf("Great job %s, you have won the match\n", Secondname); // player 2 wins the match
    else if (p_game_info->status == DRAW)
        printf("Unlucky guys, the game ended a draw\n"); // the game ends a draw
}
/*
 * Displays the board with each slot position filled with their index
 */
void display_board_positions()
{
    char border[] = "---------";
    char line = '|';
    int r;
    int c;
    int count=0;

    for (r = 0; r < MAX_COL_SIZE; r++)  //Switches Rows
    {
        for (c = 0; c < MAX_ROW_SIZE; c++)  //Switches Cols
        {
            if (c <= 1)
            {
                printf("%d %c", count,line);

            }
            else
            {
                printf("%d", count);   //Prints the index of the position of the slot
            }
            count++;
        }
            printf("\n");
            if(r!=2)
            printf("%s",border); //prints border
            printf("\n");
    }
}

void get_row_col(int i, int* row, int* col)
{
    *row = i / 3;
    *col = i % 3;
}
/*
 * @param p_game_info: Pointer to an instance of the Game structure
 * @param moves: Holds the count of the number of moves in the game
 */
void process_move(GAME p_game_info, int moves)
{
    int userInput = -1;
    int row = -1;
    int col = -1;

    while(userInput<0||userInput>8)  //while loop continues asking user for input until valid input is entered which is a value from 0 - 8
    {
        printf("Enter a number between 0-8: \n");
        scanf("%d", &userInput); //users input
        if(userInput<0||userInput>8) // if user does not enter valid input it is asked to to re-enter input
            printf("Invalid Input. The number you choose should be between  0 - 8!\n");
        else
        {
            get_row_col(userInput,&row, &col );
            if(p_game_info->board[row][col]==X_SYMBOL || p_game_info->board[row][col]==O_SYMBOL)    //Checks if the slot the user choose is empty
            {
                printf("Slot is already used. Enter another slot number\n");
                userInput = -1;
            }
        }
    }
    if(p_game_info->status==P2_TURN)  //If its player 2's turn
        {
        p_game_info->board[row][col] = X_SYMBOL; //the slot is filled with 'X'
        checkWinner(p_game_info,X_SYMBOL,row,col,moves); //Checks to see if the player with x's is a winner after previous move
        }
    else
        {
        p_game_info->board[row][col] = O_SYMBOL;  //the slot is filled with 'O'
        checkWinner(p_game_info,O_SYMBOL,row,col,moves); //Checks to see if the player with o's is a winner after previous move
        }
}
/*
 * @param p_game_info: Pointer to an instance of the Game structure
 * @param symbol: Holds the value of the symbol filled in that slot
 * @param row: Holds row value
 * @param column: Holds column value
 * @param moves: Holds the value of the number of moves made in the game as of that moment
 */
void checkWinner(GAME p_game_info, char symbol, int row, int col,int moves)
{
    boolean checkWinner = False;

    //Check column for 3 x's or o's to get a winner
    for(int i=0;i<MAX_COL_SIZE;i++)
    {
        if(p_game_info->board[row][i]!=symbol)
            break;
        if(i==MAX_COL_SIZE-1)
            checkWinner = True;
    }

    //Check row for 3 x's or o's to get a winner
    for(int i=0;i<MAX_ROW_SIZE;i++)
    {
        if(p_game_info->board[i][col]!=symbol)
            break;
        if(i==MAX_ROW_SIZE-1)
            checkWinner = True;
    }

    //Check Diagonal for 3 x's or o's to get a winner
    if(row==col)
    {
        for(int i=0;i<MAX_ROW_SIZE;i++)
        {
            if(p_game_info->board[i][i]!=symbol)
                break;
            if(i==MAX_ROW_SIZE-1)
                checkWinner = True;
        }
    }

    //Check other diagonal for 3 x's or o's to get a winner
    if(row+col==MAX_COL_SIZE-1)
    {
        for(int i=0;i<MAX_ROW_SIZE;i++)
        {
            if(p_game_info->board[i][(MAX_ROW_SIZE-1)-i]!=symbol)
                break;
            if(i==MAX_ROW_SIZE-1)
                checkWinner = True;
        }
    }

    //If there has been 9 moves and the board is full and none of above conditions are true then game is a draw
    if(moves==9)
    {
        p_game_info->status = DRAW;
        p_game_info->finished = True;
    }


    if(checkWinner==True) // if there are 3x's or o's next to eachother
    {
        if (p_game_info->status = P1_TURN) // if its player 1's turn then they win
            p_game_info->status = P1_WON;
        else
            p_game_info->status = P2_WON; // if its player 2's turn then they win
        p_game_info->finished=True; // the game finishes because there is a winner
    }
    else if(moves!=9) // if all the moves have not been used up and there is no winner yet
        {
        if(p_game_info->status==P2_TURN)
            p_game_info->status = P1_TURN;
        else
            p_game_info->status = P2_TURN;
    }

}
