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
CMAKE_SOURCE_DIR = "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/A__Common_Anagrams.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/A__Common_Anagrams.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/A__Common_Anagrams.dir/flags.make

CMakeFiles/A__Common_Anagrams.dir/main.cpp.o: CMakeFiles/A__Common_Anagrams.dir/flags.make
CMakeFiles/A__Common_Anagrams.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/A__Common_Anagrams.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/A__Common_Anagrams.dir/main.cpp.o -c "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/main.cpp"

CMakeFiles/A__Common_Anagrams.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/A__Common_Anagrams.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/main.cpp" > CMakeFiles/A__Common_Anagrams.dir/main.cpp.i

CMakeFiles/A__Common_Anagrams.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/A__Common_Anagrams.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/main.cpp" -o CMakeFiles/A__Common_Anagrams.dir/main.cpp.s

# Object files for target A__Common_Anagrams
A__Common_Anagrams_OBJECTS = \
"CMakeFiles/A__Common_Anagrams.dir/main.cpp.o"

# External object files for target A__Common_Anagrams
A__Common_Anagrams_EXTERNAL_OBJECTS =

A__Common_Anagrams: CMakeFiles/A__Common_Anagrams.dir/main.cpp.o
A__Common_Anagrams: CMakeFiles/A__Common_Anagrams.dir/build.make
A__Common_Anagrams: CMakeFiles/A__Common_Anagrams.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable A__Common_Anagrams"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/A__Common_Anagrams.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/A__Common_Anagrams.dir/build: A__Common_Anagrams

.PHONY : CMakeFiles/A__Common_Anagrams.dir/build

CMakeFiles/A__Common_Anagrams.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/A__Common_Anagrams.dir/cmake_clean.cmake
.PHONY : CMakeFiles/A__Common_Anagrams.dir/clean

CMakeFiles/A__Common_Anagrams.dir/depend:
	cd "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams" "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams" "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/cmake-build-debug" "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/cmake-build-debug" "/home/ahmed/Winstaff/D/UVa problems/Kickstart ( Round F )/Common Anagrams/cmake-build-debug/CMakeFiles/A__Common_Anagrams.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/A__Common_Anagrams.dir/depend

