# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Kyle\CLionProjects\CS261_Assignment4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles\CS261_Assignment4.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\CS261_Assignment4.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\CS261_Assignment4.dir\flags.make

CMakeFiles\CS261_Assignment4.dir\bst.c.obj: CMakeFiles\CS261_Assignment4.dir\flags.make
CMakeFiles\CS261_Assignment4.dir\bst.c.obj: ..\bst.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/CS261_Assignment4.dir/bst.c.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\CS261_Assignment4.dir\bst.c.obj /FdCMakeFiles\CS261_Assignment4.dir\ /FS -c C:\Users\Kyle\CLionProjects\CS261_Assignment4\bst.c
<<

CMakeFiles\CS261_Assignment4.dir\bst.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CS261_Assignment4.dir/bst.c.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\CS261_Assignment4.dir\bst.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Kyle\CLionProjects\CS261_Assignment4\bst.c
<<

CMakeFiles\CS261_Assignment4.dir\bst.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CS261_Assignment4.dir/bst.c.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\CS261_Assignment4.dir\bst.c.s /c C:\Users\Kyle\CLionProjects\CS261_Assignment4\bst.c
<<

CMakeFiles\CS261_Assignment4.dir\compare.c.obj: CMakeFiles\CS261_Assignment4.dir\flags.make
CMakeFiles\CS261_Assignment4.dir\compare.c.obj: ..\compare.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/CS261_Assignment4.dir/compare.c.obj"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\CS261_Assignment4.dir\compare.c.obj /FdCMakeFiles\CS261_Assignment4.dir\ /FS -c C:\Users\Kyle\CLionProjects\CS261_Assignment4\compare.c
<<

CMakeFiles\CS261_Assignment4.dir\compare.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/CS261_Assignment4.dir/compare.c.i"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe > CMakeFiles\CS261_Assignment4.dir\compare.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Kyle\CLionProjects\CS261_Assignment4\compare.c
<<

CMakeFiles\CS261_Assignment4.dir\compare.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/CS261_Assignment4.dir/compare.c.s"
	C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\CS261_Assignment4.dir\compare.c.s /c C:\Users\Kyle\CLionProjects\CS261_Assignment4\compare.c
<<

# Object files for target CS261_Assignment4
CS261_Assignment4_OBJECTS = \
"CMakeFiles\CS261_Assignment4.dir\bst.c.obj" \
"CMakeFiles\CS261_Assignment4.dir\compare.c.obj"

# External object files for target CS261_Assignment4
CS261_Assignment4_EXTERNAL_OBJECTS =

CS261_Assignment4.exe: CMakeFiles\CS261_Assignment4.dir\bst.c.obj
CS261_Assignment4.exe: CMakeFiles\CS261_Assignment4.dir\compare.c.obj
CS261_Assignment4.exe: CMakeFiles\CS261_Assignment4.dir\build.make
CS261_Assignment4.exe: CMakeFiles\CS261_Assignment4.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable CS261_Assignment4.exe"
	"C:\Program Files\JetBrains\CLion 2018.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\CS261_Assignment4.dir --manifests  -- C:\PROGRA~2\MICROS~2\2017\COMMUN~1\VC\Tools\MSVC\1414~1.264\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\CS261_Assignment4.dir\objects1.rsp @<<
 /out:CS261_Assignment4.exe /implib:CS261_Assignment4.lib /pdb:C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug\CS261_Assignment4.pdb /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\CS261_Assignment4.dir\build: CS261_Assignment4.exe

.PHONY : CMakeFiles\CS261_Assignment4.dir\build

CMakeFiles\CS261_Assignment4.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\CS261_Assignment4.dir\cmake_clean.cmake
.PHONY : CMakeFiles\CS261_Assignment4.dir\clean

CMakeFiles\CS261_Assignment4.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" C:\Users\Kyle\CLionProjects\CS261_Assignment4 C:\Users\Kyle\CLionProjects\CS261_Assignment4 C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug C:\Users\Kyle\CLionProjects\CS261_Assignment4\cmake-build-debug\CMakeFiles\CS261_Assignment4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles\CS261_Assignment4.dir\depend
