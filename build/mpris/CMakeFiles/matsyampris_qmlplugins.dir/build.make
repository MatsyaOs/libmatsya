# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/tokyo/Documents/GitHub/libmatsya

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/tokyo/Documents/GitHub/libmatsya/build

# Include any dependencies generated for this target.
include mpris/CMakeFiles/matsyampris_qmlplugins.dir/depend.make

# Include the progress variables for this target.
include mpris/CMakeFiles/matsyampris_qmlplugins.dir/progress.make

# Include the compile flags for this target's objects.
include mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make

mpris/CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.o: mpris/matsyampris_qmlplugins_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/build/mpris/matsyampris_qmlplugins_autogen/mocs_compilation.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/build/mpris/matsyampris_qmlplugins_autogen/mocs_compilation.cpp > CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/build/mpris/matsyampris_qmlplugins_autogen/mocs_compilation.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.o: ../mpris/mpris.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mpris.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mpris.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mpris.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.o: ../mpris/mpriscontroller.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mpriscontroller.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mpriscontroller.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mpriscontroller.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.o: ../mpris/mprismanager.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mprismanager.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mprismanager.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mprismanager.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.o: ../mpris/mprisplayer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayer.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayer.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayer.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.o: ../mpris/mprisplayeradaptor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayeradaptor.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayeradaptor.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayeradaptor.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.o: ../mpris/mprisplayerinterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayerinterface.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayerinterface.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisplayerinterface.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.o: ../mpris/mprisrootadaptor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisrootadaptor.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisrootadaptor.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisrootadaptor.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.o: ../mpris/mprisrootinterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisrootinterface.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisrootinterface.cpp > CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/mprisrootinterface.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.o: ../mpris/qmlplugins.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/qmlplugins.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/qmlplugins.cpp > CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/qmlplugins.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.o: ../mpris/qtdbusextended/dbusextendedabstractinterface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/qtdbusextended/dbusextendedabstractinterface.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/qtdbusextended/dbusextendedabstractinterface.cpp > CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/qtdbusextended/dbusextendedabstractinterface.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.s

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.o: mpris/CMakeFiles/matsyampris_qmlplugins.dir/flags.make
mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.o: ../mpris/qtdbusextended/dbusextendedpendingcallwatcher.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.o"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.o -c /home/tokyo/Documents/GitHub/libmatsya/mpris/qtdbusextended/dbusextendedpendingcallwatcher.cpp

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.i"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/tokyo/Documents/GitHub/libmatsya/mpris/qtdbusextended/dbusextendedpendingcallwatcher.cpp > CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.i

mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.s"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/tokyo/Documents/GitHub/libmatsya/mpris/qtdbusextended/dbusextendedpendingcallwatcher.cpp -o CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.s

# Object files for target matsyampris_qmlplugins
matsyampris_qmlplugins_OBJECTS = \
"CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.o" \
"CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.o"

# External object files for target matsyampris_qmlplugins
matsyampris_qmlplugins_EXTERNAL_OBJECTS =

mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/matsyampris_qmlplugins_autogen/mocs_compilation.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpris.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mpriscontroller.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprismanager.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayer.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayeradaptor.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisplayerinterface.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootadaptor.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/mprisrootinterface.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/qmlplugins.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedabstractinterface.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/qtdbusextended/dbusextendedpendingcallwatcher.cpp.o
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/build.make
mpris/libmatsyampris_qmlplugins.so: /usr/lib/x86_64-linux-gnu/libQt5Quick.so.5.15.2
mpris/libmatsyampris_qmlplugins.so: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.15.2
mpris/libmatsyampris_qmlplugins.so: /usr/lib/x86_64-linux-gnu/libQt5DBus.so.5.15.2
mpris/libmatsyampris_qmlplugins.so: /usr/lib/x86_64-linux-gnu/libQt5QmlModels.so.5.15.2
mpris/libmatsyampris_qmlplugins.so: /usr/lib/x86_64-linux-gnu/libQt5Qml.so.5.15.2
mpris/libmatsyampris_qmlplugins.so: /usr/lib/x86_64-linux-gnu/libQt5Network.so.5.15.2
mpris/libmatsyampris_qmlplugins.so: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.15.2
mpris/libmatsyampris_qmlplugins.so: mpris/CMakeFiles/matsyampris_qmlplugins.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX shared library libmatsyampris_qmlplugins.so"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/matsyampris_qmlplugins.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
mpris/CMakeFiles/matsyampris_qmlplugins.dir/build: mpris/libmatsyampris_qmlplugins.so

.PHONY : mpris/CMakeFiles/matsyampris_qmlplugins.dir/build

mpris/CMakeFiles/matsyampris_qmlplugins.dir/clean:
	cd /home/tokyo/Documents/GitHub/libmatsya/build/mpris && $(CMAKE_COMMAND) -P CMakeFiles/matsyampris_qmlplugins.dir/cmake_clean.cmake
.PHONY : mpris/CMakeFiles/matsyampris_qmlplugins.dir/clean

mpris/CMakeFiles/matsyampris_qmlplugins.dir/depend:
	cd /home/tokyo/Documents/GitHub/libmatsya/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/Documents/GitHub/libmatsya /home/tokyo/Documents/GitHub/libmatsya/mpris /home/tokyo/Documents/GitHub/libmatsya/build /home/tokyo/Documents/GitHub/libmatsya/build/mpris /home/tokyo/Documents/GitHub/libmatsya/build/mpris/CMakeFiles/matsyampris_qmlplugins.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : mpris/CMakeFiles/matsyampris_qmlplugins.dir/depend
