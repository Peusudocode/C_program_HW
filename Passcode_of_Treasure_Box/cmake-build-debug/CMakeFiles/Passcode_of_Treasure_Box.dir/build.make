# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Passcode_of_Treasure_Box.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Passcode_of_Treasure_Box.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Passcode_of_Treasure_Box.dir/flags.make

CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.obj: CMakeFiles/Passcode_of_Treasure_Box.dir/flags.make
CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Passcode_of_Treasure_Box.dir\main.c.obj -c C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\main.c

CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\main.c > CMakeFiles\Passcode_of_Treasure_Box.dir\main.c.i

CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\main.c -o CMakeFiles\Passcode_of_Treasure_Box.dir\main.c.s

# Object files for target Passcode_of_Treasure_Box
Passcode_of_Treasure_Box_OBJECTS = \
"CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.obj"

# External object files for target Passcode_of_Treasure_Box
Passcode_of_Treasure_Box_EXTERNAL_OBJECTS =

Passcode_of_Treasure_Box.exe: CMakeFiles/Passcode_of_Treasure_Box.dir/main.c.obj
Passcode_of_Treasure_Box.exe: CMakeFiles/Passcode_of_Treasure_Box.dir/build.make
Passcode_of_Treasure_Box.exe: CMakeFiles/Passcode_of_Treasure_Box.dir/linklibs.rsp
Passcode_of_Treasure_Box.exe: CMakeFiles/Passcode_of_Treasure_Box.dir/objects1.rsp
Passcode_of_Treasure_Box.exe: CMakeFiles/Passcode_of_Treasure_Box.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Passcode_of_Treasure_Box.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Passcode_of_Treasure_Box.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Passcode_of_Treasure_Box.dir/build: Passcode_of_Treasure_Box.exe
.PHONY : CMakeFiles/Passcode_of_Treasure_Box.dir/build

CMakeFiles/Passcode_of_Treasure_Box.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Passcode_of_Treasure_Box.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Passcode_of_Treasure_Box.dir/clean

CMakeFiles/Passcode_of_Treasure_Box.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\cmake-build-debug C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\cmake-build-debug C:\Users\user\Desktop\C_program_HW\Passcode_of_Treasure_Box\cmake-build-debug\CMakeFiles\Passcode_of_Treasure_Box.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Passcode_of_Treasure_Box.dir/depend
