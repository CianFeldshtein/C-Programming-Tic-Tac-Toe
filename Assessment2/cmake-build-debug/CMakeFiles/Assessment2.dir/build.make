# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2017.3.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Assessment2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Assessment2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Assessment2.dir/flags.make

CMakeFiles/Assessment2.dir/main.c.obj: CMakeFiles/Assessment2.dir/flags.make
CMakeFiles/Assessment2.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Assessment2.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Assessment2.dir\main.c.obj   -c "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\main.c"

CMakeFiles/Assessment2.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assessment2.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\main.c" > CMakeFiles\Assessment2.dir\main.c.i

CMakeFiles/Assessment2.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assessment2.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\main.c" -o CMakeFiles\Assessment2.dir\main.c.s

CMakeFiles/Assessment2.dir/main.c.obj.requires:

.PHONY : CMakeFiles/Assessment2.dir/main.c.obj.requires

CMakeFiles/Assessment2.dir/main.c.obj.provides: CMakeFiles/Assessment2.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\Assessment2.dir\build.make CMakeFiles/Assessment2.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/Assessment2.dir/main.c.obj.provides

CMakeFiles/Assessment2.dir/main.c.obj.provides.build: CMakeFiles/Assessment2.dir/main.c.obj


CMakeFiles/Assessment2.dir/game.c.obj: CMakeFiles/Assessment2.dir/flags.make
CMakeFiles/Assessment2.dir/game.c.obj: ../game.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Assessment2.dir/game.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Assessment2.dir\game.c.obj   -c "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\game.c"

CMakeFiles/Assessment2.dir/game.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Assessment2.dir/game.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\game.c" > CMakeFiles\Assessment2.dir\game.c.i

CMakeFiles/Assessment2.dir/game.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Assessment2.dir/game.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\game.c" -o CMakeFiles\Assessment2.dir\game.c.s

CMakeFiles/Assessment2.dir/game.c.obj.requires:

.PHONY : CMakeFiles/Assessment2.dir/game.c.obj.requires

CMakeFiles/Assessment2.dir/game.c.obj.provides: CMakeFiles/Assessment2.dir/game.c.obj.requires
	$(MAKE) -f CMakeFiles\Assessment2.dir\build.make CMakeFiles/Assessment2.dir/game.c.obj.provides.build
.PHONY : CMakeFiles/Assessment2.dir/game.c.obj.provides

CMakeFiles/Assessment2.dir/game.c.obj.provides.build: CMakeFiles/Assessment2.dir/game.c.obj


# Object files for target Assessment2
Assessment2_OBJECTS = \
"CMakeFiles/Assessment2.dir/main.c.obj" \
"CMakeFiles/Assessment2.dir/game.c.obj"

# External object files for target Assessment2
Assessment2_EXTERNAL_OBJECTS =

Assessment2.exe: CMakeFiles/Assessment2.dir/main.c.obj
Assessment2.exe: CMakeFiles/Assessment2.dir/game.c.obj
Assessment2.exe: CMakeFiles/Assessment2.dir/build.make
Assessment2.exe: CMakeFiles/Assessment2.dir/linklibs.rsp
Assessment2.exe: CMakeFiles/Assessment2.dir/objects1.rsp
Assessment2.exe: CMakeFiles/Assessment2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable Assessment2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Assessment2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Assessment2.dir/build: Assessment2.exe

.PHONY : CMakeFiles/Assessment2.dir/build

CMakeFiles/Assessment2.dir/requires: CMakeFiles/Assessment2.dir/main.c.obj.requires
CMakeFiles/Assessment2.dir/requires: CMakeFiles/Assessment2.dir/game.c.obj.requires

.PHONY : CMakeFiles/Assessment2.dir/requires

CMakeFiles/Assessment2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Assessment2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Assessment2.dir/clean

CMakeFiles/Assessment2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2" "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2" "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\cmake-build-debug" "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\cmake-build-debug" "C:\Users\Cian\Dropbox\CIT YR2 SEM2\C Programming\Assessment2\cmake-build-debug\CMakeFiles\Assessment2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Assessment2.dir/depend

