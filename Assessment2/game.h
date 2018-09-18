//
// Created by Cian on 16/04/2018.
// R00142270
//

#ifndef PROJECT_2_GAME_H
#define PROJECT_2_GAME_H
#define MAX_NAME_LEN 50
#define MAX_ROW_SIZE 3
#define MAX_COL_SIZE 3
enum Bool { False, True };
enum status { P1_TURN, P2_TURN, P1_WON, P2_WON, DRAW }; //Different possible scenarios in game
typedef enum Bool boolean;
static const char SPACE= '-';
static const char X_SYMBOL = 'X';
static const char O_SYMBOL = 'O';

struct game {
    char board[3][3];
    char playerNames[2][MAX_NAME_LEN];
    int status;
    boolean finished;
};
typedef struct game Game;
typedef Game* GAME;

void play_game(char *fname, char *sname); //gets the names of the players and the game starts

void initialise_game(GAME p_game_info, char* name1, char* name2); //Initialises the attributes of the structure game

void draw_banner(); //Displays the banner

void display_board(char board[3][3]); //Displays the game board and the current status of the game

void print_status(GAME p_game_info); //Displays the status of the game

void display_board_positions(); //Displays the board with index numbers

void get_row_col(int i, int* row, int* col); //Gets the row and column numbers

void process_move(GAME p_game_info, int moves); //Processes the players move

void checkWinner(GAME p_game_info, char symbol, int row, int col, int moves); //Every time a player makes a move it checks to see if their is a winner


#endif //PROJECT_2_GAME_H
