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

# Utility rule file for matsyaaudio_qmlplugins_autogen.

# Include the progress variables for this target.
include audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/progress.make

audio/CMakeFiles/matsyaaudio_qmlplugins_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/tokyo/Documents/GitHub/libmatsya/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target matsyaaudio_qmlplugins"
	cd /home/tokyo/Documents/GitHub/libmatsya/build/audio && /usr/bin/cmake -E cmake_autogen /home/tokyo/Documents/GitHub/libmatsya/build/audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/AutogenInfo.json ""

matsyaaudio_qmlplugins_autogen: audio/CMakeFiles/matsyaaudio_qmlplugins_autogen
matsyaaudio_qmlplugins_autogen: audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/build.make

.PHONY : matsyaaudio_qmlplugins_autogen

# Rule to build all files generated by this target.
audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/build: matsyaaudio_qmlplugins_autogen

.PHONY : audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/build

audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/clean:
	cd /home/tokyo/Documents/GitHub/libmatsya/build/audio && $(CMAKE_COMMAND) -P CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/cmake_clean.cmake
.PHONY : audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/clean

audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/depend:
	cd /home/tokyo/Documents/GitHub/libmatsya/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/tokyo/Documents/GitHub/libmatsya /home/tokyo/Documents/GitHub/libmatsya/audio /home/tokyo/Documents/GitHub/libmatsya/build /home/tokyo/Documents/GitHub/libmatsya/build/audio /home/tokyo/Documents/GitHub/libmatsya/build/audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : audio/CMakeFiles/matsyaaudio_qmlplugins_autogen.dir/depend

