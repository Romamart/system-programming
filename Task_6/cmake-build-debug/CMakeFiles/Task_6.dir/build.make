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
CMAKE_COMMAND = /home/romamart/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5662.56/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/romamart/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/193.5662.56/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/romamart/system-programming/Task_6

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/romamart/system-programming/Task_6/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Task_6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Task_6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task_6.dir/flags.make

CMakeFiles/Task_6.dir/src/main/main.cpp.o: CMakeFiles/Task_6.dir/flags.make
CMakeFiles/Task_6.dir/src/main/main.cpp.o: ../src/main/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romamart/system-programming/Task_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task_6.dir/src/main/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task_6.dir/src/main/main.cpp.o -c /home/romamart/system-programming/Task_6/src/main/main.cpp

CMakeFiles/Task_6.dir/src/main/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task_6.dir/src/main/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romamart/system-programming/Task_6/src/main/main.cpp > CMakeFiles/Task_6.dir/src/main/main.cpp.i

CMakeFiles/Task_6.dir/src/main/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task_6.dir/src/main/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romamart/system-programming/Task_6/src/main/main.cpp -o CMakeFiles/Task_6.dir/src/main/main.cpp.s

CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.o: CMakeFiles/Task_6.dir/flags.make
CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.o: ../src/test/FigurTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romamart/system-programming/Task_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.o -c /home/romamart/system-programming/Task_6/src/test/FigurTest.cpp

CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romamart/system-programming/Task_6/src/test/FigurTest.cpp > CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.i

CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romamart/system-programming/Task_6/src/test/FigurTest.cpp -o CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.s

CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.o: CMakeFiles/Task_6.dir/flags.make
CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.o: ../src/test/PolynomialTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/romamart/system-programming/Task_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.o -c /home/romamart/system-programming/Task_6/src/test/PolynomialTest.cpp

CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/romamart/system-programming/Task_6/src/test/PolynomialTest.cpp > CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.i

CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/romamart/system-programming/Task_6/src/test/PolynomialTest.cpp -o CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.s

# Object files for target Task_6
Task_6_OBJECTS = \
"CMakeFiles/Task_6.dir/src/main/main.cpp.o" \
"CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.o" \
"CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.o"

# External object files for target Task_6
Task_6_EXTERNAL_OBJECTS =

Task_6: CMakeFiles/Task_6.dir/src/main/main.cpp.o
Task_6: CMakeFiles/Task_6.dir/src/test/FigurTest.cpp.o
Task_6: CMakeFiles/Task_6.dir/src/test/PolynomialTest.cpp.o
Task_6: CMakeFiles/Task_6.dir/build.make
Task_6: /usr/lib/libgtest.a
Task_6: CMakeFiles/Task_6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/romamart/system-programming/Task_6/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Task_6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task_6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task_6.dir/build: Task_6

.PHONY : CMakeFiles/Task_6.dir/build

CMakeFiles/Task_6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task_6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task_6.dir/clean

CMakeFiles/Task_6.dir/depend:
	cd /home/romamart/system-programming/Task_6/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/romamart/system-programming/Task_6 /home/romamart/system-programming/Task_6 /home/romamart/system-programming/Task_6/cmake-build-debug /home/romamart/system-programming/Task_6/cmake-build-debug /home/romamart/system-programming/Task_6/cmake-build-debug/CMakeFiles/Task_6.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Task_6.dir/depend

