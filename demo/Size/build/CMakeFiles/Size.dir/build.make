# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/mynt/git-test/cpp_tutorials/class-demo/Size

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/mynt/git-test/cpp_tutorials/class-demo/Size/build

# Include any dependencies generated for this target.
include CMakeFiles/Size.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Size.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Size.dir/flags.make

CMakeFiles/Size.dir/Size.cpp.o: CMakeFiles/Size.dir/flags.make
CMakeFiles/Size.dir/Size.cpp.o: ../Size.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/mynt/git-test/cpp_tutorials/class-demo/Size/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Size.dir/Size.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Size.dir/Size.cpp.o -c /home/mynt/git-test/cpp_tutorials/class-demo/Size/Size.cpp

CMakeFiles/Size.dir/Size.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Size.dir/Size.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/mynt/git-test/cpp_tutorials/class-demo/Size/Size.cpp > CMakeFiles/Size.dir/Size.cpp.i

CMakeFiles/Size.dir/Size.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Size.dir/Size.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/mynt/git-test/cpp_tutorials/class-demo/Size/Size.cpp -o CMakeFiles/Size.dir/Size.cpp.s

CMakeFiles/Size.dir/Size.cpp.o.requires:

.PHONY : CMakeFiles/Size.dir/Size.cpp.o.requires

CMakeFiles/Size.dir/Size.cpp.o.provides: CMakeFiles/Size.dir/Size.cpp.o.requires
	$(MAKE) -f CMakeFiles/Size.dir/build.make CMakeFiles/Size.dir/Size.cpp.o.provides.build
.PHONY : CMakeFiles/Size.dir/Size.cpp.o.provides

CMakeFiles/Size.dir/Size.cpp.o.provides.build: CMakeFiles/Size.dir/Size.cpp.o


# Object files for target Size
Size_OBJECTS = \
"CMakeFiles/Size.dir/Size.cpp.o"

# External object files for target Size
Size_EXTERNAL_OBJECTS =

Size: CMakeFiles/Size.dir/Size.cpp.o
Size: CMakeFiles/Size.dir/build.make
Size: CMakeFiles/Size.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/mynt/git-test/cpp_tutorials/class-demo/Size/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Size"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Size.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Size.dir/build: Size

.PHONY : CMakeFiles/Size.dir/build

CMakeFiles/Size.dir/requires: CMakeFiles/Size.dir/Size.cpp.o.requires

.PHONY : CMakeFiles/Size.dir/requires

CMakeFiles/Size.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Size.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Size.dir/clean

CMakeFiles/Size.dir/depend:
	cd /home/mynt/git-test/cpp_tutorials/class-demo/Size/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/mynt/git-test/cpp_tutorials/class-demo/Size /home/mynt/git-test/cpp_tutorials/class-demo/Size /home/mynt/git-test/cpp_tutorials/class-demo/Size/build /home/mynt/git-test/cpp_tutorials/class-demo/Size/build /home/mynt/git-test/cpp_tutorials/class-demo/Size/build/CMakeFiles/Size.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Size.dir/depend

