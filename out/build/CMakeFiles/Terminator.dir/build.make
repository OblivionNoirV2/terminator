# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/1366/bin/cmake

# The command to remove a file.
RM = /snap/cmake/1366/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/rosly/Documents/vscode/terminator

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/rosly/Documents/vscode/terminator/out/build

# Include any dependencies generated for this target.
include CMakeFiles/Terminator.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Terminator.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Terminator.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Terminator.dir/flags.make

CMakeFiles/Terminator.dir/terminator.cpp.o: CMakeFiles/Terminator.dir/flags.make
CMakeFiles/Terminator.dir/terminator.cpp.o: /mnt/c/Users/rosly/Documents/vscode/terminator/terminator.cpp
CMakeFiles/Terminator.dir/terminator.cpp.o: CMakeFiles/Terminator.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/mnt/c/Users/rosly/Documents/vscode/terminator/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Terminator.dir/terminator.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Terminator.dir/terminator.cpp.o -MF CMakeFiles/Terminator.dir/terminator.cpp.o.d -o CMakeFiles/Terminator.dir/terminator.cpp.o -c /mnt/c/Users/rosly/Documents/vscode/terminator/terminator.cpp

CMakeFiles/Terminator.dir/terminator.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Terminator.dir/terminator.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/rosly/Documents/vscode/terminator/terminator.cpp > CMakeFiles/Terminator.dir/terminator.cpp.i

CMakeFiles/Terminator.dir/terminator.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Terminator.dir/terminator.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/rosly/Documents/vscode/terminator/terminator.cpp -o CMakeFiles/Terminator.dir/terminator.cpp.s

# Object files for target Terminator
Terminator_OBJECTS = \
"CMakeFiles/Terminator.dir/terminator.cpp.o"

# External object files for target Terminator
Terminator_EXTERNAL_OBJECTS =

Terminator: CMakeFiles/Terminator.dir/terminator.cpp.o
Terminator: CMakeFiles/Terminator.dir/build.make
Terminator: CMakeFiles/Terminator.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/mnt/c/Users/rosly/Documents/vscode/terminator/out/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Terminator"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Terminator.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Terminator.dir/build: Terminator
.PHONY : CMakeFiles/Terminator.dir/build

CMakeFiles/Terminator.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Terminator.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Terminator.dir/clean

CMakeFiles/Terminator.dir/depend:
	cd /mnt/c/Users/rosly/Documents/vscode/terminator/out/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/rosly/Documents/vscode/terminator /mnt/c/Users/rosly/Documents/vscode/terminator /mnt/c/Users/rosly/Documents/vscode/terminator/out/build /mnt/c/Users/rosly/Documents/vscode/terminator/out/build /mnt/c/Users/rosly/Documents/vscode/terminator/out/build/CMakeFiles/Terminator.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Terminator.dir/depend

