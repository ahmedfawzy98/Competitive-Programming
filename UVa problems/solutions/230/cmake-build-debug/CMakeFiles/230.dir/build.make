# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\UVa problems\solutions\230"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\UVa problems\solutions\230\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/230.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/230.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/230.dir/flags.make

CMakeFiles/230.dir/main.cpp.obj: CMakeFiles/230.dir/flags.make
CMakeFiles/230.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\UVa problems\solutions\230\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/230.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\230.dir\main.cpp.obj -c "D:\UVa problems\solutions\230\main.cpp"

CMakeFiles/230.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/230.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\UVa problems\solutions\230\main.cpp" > CMakeFiles\230.dir\main.cpp.i

CMakeFiles/230.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/230.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-7~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\UVa problems\solutions\230\main.cpp" -o CMakeFiles\230.dir\main.cpp.s

# Object files for target 230
230_OBJECTS = \
"CMakeFiles/230.dir/main.cpp.obj"

# External object files for target 230
230_EXTERNAL_OBJECTS =

230.exe: CMakeFiles/230.dir/main.cpp.obj
230.exe: CMakeFiles/230.dir/build.make
230.exe: CMakeFiles/230.dir/linklibs.rsp
230.exe: CMakeFiles/230.dir/objects1.rsp
230.exe: CMakeFiles/230.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\UVa problems\solutions\230\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 230.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\230.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/230.dir/build: 230.exe

.PHONY : CMakeFiles/230.dir/build

CMakeFiles/230.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\230.dir\cmake_clean.cmake
.PHONY : CMakeFiles/230.dir/clean

CMakeFiles/230.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\UVa problems\solutions\230" "D:\UVa problems\solutions\230" "D:\UVa problems\solutions\230\cmake-build-debug" "D:\UVa problems\solutions\230\cmake-build-debug" "D:\UVa problems\solutions\230\cmake-build-debug\CMakeFiles\230.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/230.dir/depend

