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
CMAKE_SOURCE_DIR = "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/p3.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/p3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/p3.dir/flags.make

CMakeFiles/p3.dir/main.cpp.o: CMakeFiles/p3.dir/flags.make
CMakeFiles/p3.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/p3.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/p3.dir/main.cpp.o -c "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/main.cpp"

CMakeFiles/p3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/p3.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/main.cpp" > CMakeFiles/p3.dir/main.cpp.i

CMakeFiles/p3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/p3.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/main.cpp" -o CMakeFiles/p3.dir/main.cpp.s

# Object files for target p3
p3_OBJECTS = \
"CMakeFiles/p3.dir/main.cpp.o"

# External object files for target p3
p3_EXTERNAL_OBJECTS =

p3: CMakeFiles/p3.dir/main.cpp.o
p3: CMakeFiles/p3.dir/build.make
p3: CMakeFiles/p3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable p3"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/p3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/p3.dir/build: p3

.PHONY : CMakeFiles/p3.dir/build

CMakeFiles/p3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/p3.dir/cmake_clean.cmake
.PHONY : CMakeFiles/p3.dir/clean

CMakeFiles/p3.dir/depend:
	cd "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3" "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3" "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/cmake-build-debug" "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/cmake-build-debug" "/home/ahmed/Winstaff/D/competitive programming/kick start/2019/Round C/p3/cmake-build-debug/CMakeFiles/p3.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/p3.dir/depend
