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
CMAKE_SOURCE_DIR = "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/David_s_Petty_Tricks2.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/David_s_Petty_Tricks2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/David_s_Petty_Tricks2.dir/flags.make

CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.obj: CMakeFiles/David_s_Petty_Tricks2.dir/flags.make
CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\David_s_Petty_Tricks2.dir\main.cpp.obj -c "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\main.cpp"

CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\main.cpp" > CMakeFiles\David_s_Petty_Tricks2.dir\main.cpp.i

CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\main.cpp" -o CMakeFiles\David_s_Petty_Tricks2.dir\main.cpp.s

# Object files for target David_s_Petty_Tricks2
David_s_Petty_Tricks2_OBJECTS = \
"CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.obj"

# External object files for target David_s_Petty_Tricks2
David_s_Petty_Tricks2_EXTERNAL_OBJECTS =

David_s_Petty_Tricks2.exe: CMakeFiles/David_s_Petty_Tricks2.dir/main.cpp.obj
David_s_Petty_Tricks2.exe: CMakeFiles/David_s_Petty_Tricks2.dir/build.make
David_s_Petty_Tricks2.exe: CMakeFiles/David_s_Petty_Tricks2.dir/linklibs.rsp
David_s_Petty_Tricks2.exe: CMakeFiles/David_s_Petty_Tricks2.dir/objects1.rsp
David_s_Petty_Tricks2.exe: CMakeFiles/David_s_Petty_Tricks2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable David_s_Petty_Tricks2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\David_s_Petty_Tricks2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/David_s_Petty_Tricks2.dir/build: David_s_Petty_Tricks2.exe
.PHONY : CMakeFiles/David_s_Petty_Tricks2.dir/build

CMakeFiles/David_s_Petty_Tricks2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\David_s_Petty_Tricks2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/David_s_Petty_Tricks2.dir/clean

CMakeFiles/David_s_Petty_Tricks2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2" "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2" "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\cmake-build-debug" "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\cmake-build-debug" "C:\Users\user\Desktop\C_program_HW\David's Petty Tricks2\cmake-build-debug\CMakeFiles\David_s_Petty_Tricks2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/David_s_Petty_Tricks2.dir/depend
