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
CMAKE_SOURCE_DIR = C:\Users\user\Desktop\C_program_HW\Quicksort

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\Desktop\C_program_HW\Quicksort\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Quicksort.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Quicksort.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Quicksort.dir/flags.make

CMakeFiles/Quicksort.dir/main.c.obj: CMakeFiles/Quicksort.dir/flags.make
CMakeFiles/Quicksort.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\Desktop\C_program_HW\Quicksort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Quicksort.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Quicksort.dir\main.c.obj -c C:\Users\user\Desktop\C_program_HW\Quicksort\main.c

CMakeFiles/Quicksort.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Quicksort.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\C_program_HW\Quicksort\main.c > CMakeFiles\Quicksort.dir\main.c.i

CMakeFiles/Quicksort.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Quicksort.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\C_program_HW\Quicksort\main.c -o CMakeFiles\Quicksort.dir\main.c.s

# Object files for target Quicksort
Quicksort_OBJECTS = \
"CMakeFiles/Quicksort.dir/main.c.obj"

# External object files for target Quicksort
Quicksort_EXTERNAL_OBJECTS =

Quicksort.exe: CMakeFiles/Quicksort.dir/main.c.obj
Quicksort.exe: CMakeFiles/Quicksort.dir/build.make
Quicksort.exe: CMakeFiles/Quicksort.dir/linklibs.rsp
Quicksort.exe: CMakeFiles/Quicksort.dir/objects1.rsp
Quicksort.exe: CMakeFiles/Quicksort.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\Desktop\C_program_HW\Quicksort\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Quicksort.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Quicksort.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Quicksort.dir/build: Quicksort.exe
.PHONY : CMakeFiles/Quicksort.dir/build

CMakeFiles/Quicksort.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Quicksort.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Quicksort.dir/clean

CMakeFiles/Quicksort.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\C_program_HW\Quicksort C:\Users\user\Desktop\C_program_HW\Quicksort C:\Users\user\Desktop\C_program_HW\Quicksort\cmake-build-debug C:\Users\user\Desktop\C_program_HW\Quicksort\cmake-build-debug C:\Users\user\Desktop\C_program_HW\Quicksort\cmake-build-debug\CMakeFiles\Quicksort.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Quicksort.dir/depend

