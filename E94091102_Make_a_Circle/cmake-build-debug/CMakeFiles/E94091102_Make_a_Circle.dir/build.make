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
CMAKE_SOURCE_DIR = C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/E94091102_Make_a_Circle.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/E94091102_Make_a_Circle.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/E94091102_Make_a_Circle.dir/flags.make

CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.obj: CMakeFiles/E94091102_Make_a_Circle.dir/flags.make
CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.obj: ../E94091102_Make_a_Circle.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\E94091102_Make_a_Circle.dir\E94091102_Make_a_Circle.c.obj -c C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\E94091102_Make_a_Circle.c

CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\E94091102_Make_a_Circle.c > CMakeFiles\E94091102_Make_a_Circle.dir\E94091102_Make_a_Circle.c.i

CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\E94091102_Make_a_Circle.c -o CMakeFiles\E94091102_Make_a_Circle.dir\E94091102_Make_a_Circle.c.s

# Object files for target E94091102_Make_a_Circle
E94091102_Make_a_Circle_OBJECTS = \
"CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.obj"

# External object files for target E94091102_Make_a_Circle
E94091102_Make_a_Circle_EXTERNAL_OBJECTS =

E94091102_Make_a_Circle.exe: CMakeFiles/E94091102_Make_a_Circle.dir/E94091102_Make_a_Circle.c.obj
E94091102_Make_a_Circle.exe: CMakeFiles/E94091102_Make_a_Circle.dir/build.make
E94091102_Make_a_Circle.exe: CMakeFiles/E94091102_Make_a_Circle.dir/linklibs.rsp
E94091102_Make_a_Circle.exe: CMakeFiles/E94091102_Make_a_Circle.dir/objects1.rsp
E94091102_Make_a_Circle.exe: CMakeFiles/E94091102_Make_a_Circle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable E94091102_Make_a_Circle.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\E94091102_Make_a_Circle.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/E94091102_Make_a_Circle.dir/build: E94091102_Make_a_Circle.exe
.PHONY : CMakeFiles/E94091102_Make_a_Circle.dir/build

CMakeFiles/E94091102_Make_a_Circle.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\E94091102_Make_a_Circle.dir\cmake_clean.cmake
.PHONY : CMakeFiles/E94091102_Make_a_Circle.dir/clean

CMakeFiles/E94091102_Make_a_Circle.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\cmake-build-debug C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\cmake-build-debug C:\Users\user\Desktop\C_program_HW\E94091102_Make_a_Circle\cmake-build-debug\CMakeFiles\E94091102_Make_a_Circle.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/E94091102_Make_a_Circle.dir/depend

