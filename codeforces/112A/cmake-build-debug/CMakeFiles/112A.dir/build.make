# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /home/ahmed/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/ahmed/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/191.7141.37/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/112A.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/112A.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/112A.dir/flags.make

CMakeFiles/112A.dir/main.cpp.o: CMakeFiles/112A.dir/flags.make
CMakeFiles/112A.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/112A.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/112A.dir/main.cpp.o -c "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/main.cpp"

CMakeFiles/112A.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/112A.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/main.cpp" > CMakeFiles/112A.dir/main.cpp.i

CMakeFiles/112A.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/112A.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/main.cpp" -o CMakeFiles/112A.dir/main.cpp.s

# Object files for target 112A
112A_OBJECTS = \
"CMakeFiles/112A.dir/main.cpp.o"

# External object files for target 112A
112A_EXTERNAL_OBJECTS =

112A: CMakeFiles/112A.dir/main.cpp.o
112A: CMakeFiles/112A.dir/build.make
112A: CMakeFiles/112A.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 112A"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/112A.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/112A.dir/build: 112A

.PHONY : CMakeFiles/112A.dir/build

CMakeFiles/112A.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/112A.dir/cmake_clean.cmake
.PHONY : CMakeFiles/112A.dir/clean

CMakeFiles/112A.dir/depend:
	cd "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A" "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A" "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/cmake-build-debug" "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/cmake-build-debug" "/home/ahmed/Winstaff/D/competitive programming/codeforces/112A/cmake-build-debug/CMakeFiles/112A.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/112A.dir/depend

