# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = "D:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\Disciplinas\POO\TP2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\Disciplinas\POO\TP2\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/TP2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/TP2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TP2.dir/flags.make

CMakeFiles/TP2.dir/main.cpp.obj: CMakeFiles/TP2.dir/flags.make
CMakeFiles/TP2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Disciplinas\POO\TP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/TP2.dir/main.cpp.obj"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TP2.dir\main.cpp.obj -c F:\Disciplinas\POO\TP2\main.cpp

CMakeFiles/TP2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP2.dir/main.cpp.i"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Disciplinas\POO\TP2\main.cpp > CMakeFiles\TP2.dir\main.cpp.i

CMakeFiles/TP2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP2.dir/main.cpp.s"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Disciplinas\POO\TP2\main.cpp -o CMakeFiles\TP2.dir\main.cpp.s

CMakeFiles/TP2.dir/Matrix.cpp.obj: CMakeFiles/TP2.dir/flags.make
CMakeFiles/TP2.dir/Matrix.cpp.obj: ../Matrix.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\Disciplinas\POO\TP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/TP2.dir/Matrix.cpp.obj"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\TP2.dir\Matrix.cpp.obj -c F:\Disciplinas\POO\TP2\Matrix.cpp

CMakeFiles/TP2.dir/Matrix.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/TP2.dir/Matrix.cpp.i"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\Disciplinas\POO\TP2\Matrix.cpp > CMakeFiles\TP2.dir\Matrix.cpp.i

CMakeFiles/TP2.dir/Matrix.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/TP2.dir/Matrix.cpp.s"
	D:\PROGRA~2\CODEBL~1\MinGW\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\Disciplinas\POO\TP2\Matrix.cpp -o CMakeFiles\TP2.dir\Matrix.cpp.s

# Object files for target TP2
TP2_OBJECTS = \
"CMakeFiles/TP2.dir/main.cpp.obj" \
"CMakeFiles/TP2.dir/Matrix.cpp.obj"

# External object files for target TP2
TP2_EXTERNAL_OBJECTS =

TP2.exe: CMakeFiles/TP2.dir/main.cpp.obj
TP2.exe: CMakeFiles/TP2.dir/Matrix.cpp.obj
TP2.exe: CMakeFiles/TP2.dir/build.make
TP2.exe: CMakeFiles/TP2.dir/linklibs.rsp
TP2.exe: CMakeFiles/TP2.dir/objects1.rsp
TP2.exe: CMakeFiles/TP2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\Disciplinas\POO\TP2\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable TP2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\TP2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TP2.dir/build: TP2.exe

.PHONY : CMakeFiles/TP2.dir/build

CMakeFiles/TP2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\TP2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/TP2.dir/clean

CMakeFiles/TP2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\Disciplinas\POO\TP2 F:\Disciplinas\POO\TP2 F:\Disciplinas\POO\TP2\cmake-build-debug F:\Disciplinas\POO\TP2\cmake-build-debug F:\Disciplinas\POO\TP2\cmake-build-debug\CMakeFiles\TP2.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TP2.dir/depend

