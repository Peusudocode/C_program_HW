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
CMAKE_SOURCE_DIR = C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Pokmon_Go_II.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Pokmon_Go_II.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Pokmon_Go_II.dir/flags.make

CMakeFiles/Pokmon_Go_II.dir/main.c.obj: CMakeFiles/Pokmon_Go_II.dir/flags.make
CMakeFiles/Pokmon_Go_II.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Pokmon_Go_II.dir/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\Pokmon_Go_II.dir\main.c.obj -c C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\main.c

CMakeFiles/Pokmon_Go_II.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Pokmon_Go_II.dir/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\main.c > CMakeFiles\Pokmon_Go_II.dir\main.c.i

CMakeFiles/Pokmon_Go_II.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Pokmon_Go_II.dir/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\main.c -o CMakeFiles\Pokmon_Go_II.dir\main.c.s

# Object files for target Pokmon_Go_II
Pokmon_Go_II_OBJECTS = \
"CMakeFiles/Pokmon_Go_II.dir/main.c.obj"

# External object files for target Pokmon_Go_II
Pokmon_Go_II_EXTERNAL_OBJECTS =

Pokmon_Go_II.exe: CMakeFiles/Pokmon_Go_II.dir/main.c.obj
Pokmon_Go_II.exe: CMakeFiles/Pokmon_Go_II.dir/build.make
Pokmon_Go_II.exe: CMakeFiles/Pokmon_Go_II.dir/linklibs.rsp
Pokmon_Go_II.exe: CMakeFiles/Pokmon_Go_II.dir/objects1.rsp
Pokmon_Go_II.exe: CMakeFiles/Pokmon_Go_II.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable Pokmon_Go_II.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Pokmon_Go_II.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Pokmon_Go_II.dir/build: Pokmon_Go_II.exe
.PHONY : CMakeFiles/Pokmon_Go_II.dir/build

CMakeFiles/Pokmon_Go_II.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Pokmon_Go_II.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Pokmon_Go_II.dir/clean

CMakeFiles/Pokmon_Go_II.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\cmake-build-debug C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\cmake-build-debug C:\Users\user\Desktop\C_program_HW\Pokmon_Go_II\cmake-build-debug\CMakeFiles\Pokmon_Go_II.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Pokmon_Go_II.dir/depend

