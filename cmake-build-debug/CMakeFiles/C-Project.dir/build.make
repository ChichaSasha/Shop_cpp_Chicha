# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/98/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/98/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sashachicha/C-Project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sashachicha/C-Project/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/C-Project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/C-Project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/C-Project.dir/flags.make

CMakeFiles/C-Project.dir/main_repo/types/main.cpp.o: CMakeFiles/C-Project.dir/flags.make
CMakeFiles/C-Project.dir/main_repo/types/main.cpp.o: ../main_repo/types/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sashachicha/C-Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/C-Project.dir/main_repo/types/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/C-Project.dir/main_repo/types/main.cpp.o -c /home/sashachicha/C-Project/main_repo/types/main.cpp

CMakeFiles/C-Project.dir/main_repo/types/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/C-Project.dir/main_repo/types/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sashachicha/C-Project/main_repo/types/main.cpp > CMakeFiles/C-Project.dir/main_repo/types/main.cpp.i

CMakeFiles/C-Project.dir/main_repo/types/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/C-Project.dir/main_repo/types/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sashachicha/C-Project/main_repo/types/main.cpp -o CMakeFiles/C-Project.dir/main_repo/types/main.cpp.s

# Object files for target C-Project
C__Project_OBJECTS = \
"CMakeFiles/C-Project.dir/main_repo/types/main.cpp.o"

# External object files for target C-Project
C__Project_EXTERNAL_OBJECTS =

C-Project: CMakeFiles/C-Project.dir/main_repo/types/main.cpp.o
C-Project: CMakeFiles/C-Project.dir/build.make
C-Project: CMakeFiles/C-Project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sashachicha/C-Project/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable C-Project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/C-Project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/C-Project.dir/build: C-Project

.PHONY : CMakeFiles/C-Project.dir/build

CMakeFiles/C-Project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/C-Project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/C-Project.dir/clean

CMakeFiles/C-Project.dir/depend:
	cd /home/sashachicha/C-Project/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sashachicha/C-Project /home/sashachicha/C-Project /home/sashachicha/C-Project/cmake-build-debug /home/sashachicha/C-Project/cmake-build-debug /home/sashachicha/C-Project/cmake-build-debug/CMakeFiles/C-Project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/C-Project.dir/depend

