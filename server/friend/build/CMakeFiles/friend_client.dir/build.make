# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/lbk/chatsystem/server/friend

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lbk/chatsystem/server/friend/build

# Include any dependencies generated for this target.
include CMakeFiles/friend_client.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/friend_client.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/friend_client.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/friend_client.dir/flags.make

CMakeFiles/friend_client.dir/test/friend_client.cc.o: CMakeFiles/friend_client.dir/flags.make
CMakeFiles/friend_client.dir/test/friend_client.cc.o: ../test/friend_client.cc
CMakeFiles/friend_client.dir/test/friend_client.cc.o: CMakeFiles/friend_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lbk/chatsystem/server/friend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/friend_client.dir/test/friend_client.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/friend_client.dir/test/friend_client.cc.o -MF CMakeFiles/friend_client.dir/test/friend_client.cc.o.d -o CMakeFiles/friend_client.dir/test/friend_client.cc.o -c /home/lbk/chatsystem/server/friend/test/friend_client.cc

CMakeFiles/friend_client.dir/test/friend_client.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/friend_client.dir/test/friend_client.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lbk/chatsystem/server/friend/test/friend_client.cc > CMakeFiles/friend_client.dir/test/friend_client.cc.i

CMakeFiles/friend_client.dir/test/friend_client.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/friend_client.dir/test/friend_client.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lbk/chatsystem/server/friend/test/friend_client.cc -o CMakeFiles/friend_client.dir/test/friend_client.cc.s

CMakeFiles/friend_client.dir/base.pb.cc.o: CMakeFiles/friend_client.dir/flags.make
CMakeFiles/friend_client.dir/base.pb.cc.o: base.pb.cc
CMakeFiles/friend_client.dir/base.pb.cc.o: CMakeFiles/friend_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lbk/chatsystem/server/friend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/friend_client.dir/base.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/friend_client.dir/base.pb.cc.o -MF CMakeFiles/friend_client.dir/base.pb.cc.o.d -o CMakeFiles/friend_client.dir/base.pb.cc.o -c /home/lbk/chatsystem/server/friend/build/base.pb.cc

CMakeFiles/friend_client.dir/base.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/friend_client.dir/base.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lbk/chatsystem/server/friend/build/base.pb.cc > CMakeFiles/friend_client.dir/base.pb.cc.i

CMakeFiles/friend_client.dir/base.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/friend_client.dir/base.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lbk/chatsystem/server/friend/build/base.pb.cc -o CMakeFiles/friend_client.dir/base.pb.cc.s

CMakeFiles/friend_client.dir/user.pb.cc.o: CMakeFiles/friend_client.dir/flags.make
CMakeFiles/friend_client.dir/user.pb.cc.o: user.pb.cc
CMakeFiles/friend_client.dir/user.pb.cc.o: CMakeFiles/friend_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lbk/chatsystem/server/friend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/friend_client.dir/user.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/friend_client.dir/user.pb.cc.o -MF CMakeFiles/friend_client.dir/user.pb.cc.o.d -o CMakeFiles/friend_client.dir/user.pb.cc.o -c /home/lbk/chatsystem/server/friend/build/user.pb.cc

CMakeFiles/friend_client.dir/user.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/friend_client.dir/user.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lbk/chatsystem/server/friend/build/user.pb.cc > CMakeFiles/friend_client.dir/user.pb.cc.i

CMakeFiles/friend_client.dir/user.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/friend_client.dir/user.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lbk/chatsystem/server/friend/build/user.pb.cc -o CMakeFiles/friend_client.dir/user.pb.cc.s

CMakeFiles/friend_client.dir/message.pb.cc.o: CMakeFiles/friend_client.dir/flags.make
CMakeFiles/friend_client.dir/message.pb.cc.o: message.pb.cc
CMakeFiles/friend_client.dir/message.pb.cc.o: CMakeFiles/friend_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lbk/chatsystem/server/friend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/friend_client.dir/message.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/friend_client.dir/message.pb.cc.o -MF CMakeFiles/friend_client.dir/message.pb.cc.o.d -o CMakeFiles/friend_client.dir/message.pb.cc.o -c /home/lbk/chatsystem/server/friend/build/message.pb.cc

CMakeFiles/friend_client.dir/message.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/friend_client.dir/message.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lbk/chatsystem/server/friend/build/message.pb.cc > CMakeFiles/friend_client.dir/message.pb.cc.i

CMakeFiles/friend_client.dir/message.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/friend_client.dir/message.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lbk/chatsystem/server/friend/build/message.pb.cc -o CMakeFiles/friend_client.dir/message.pb.cc.s

CMakeFiles/friend_client.dir/friend.pb.cc.o: CMakeFiles/friend_client.dir/flags.make
CMakeFiles/friend_client.dir/friend.pb.cc.o: friend.pb.cc
CMakeFiles/friend_client.dir/friend.pb.cc.o: CMakeFiles/friend_client.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lbk/chatsystem/server/friend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/friend_client.dir/friend.pb.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/friend_client.dir/friend.pb.cc.o -MF CMakeFiles/friend_client.dir/friend.pb.cc.o.d -o CMakeFiles/friend_client.dir/friend.pb.cc.o -c /home/lbk/chatsystem/server/friend/build/friend.pb.cc

CMakeFiles/friend_client.dir/friend.pb.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/friend_client.dir/friend.pb.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lbk/chatsystem/server/friend/build/friend.pb.cc > CMakeFiles/friend_client.dir/friend.pb.cc.i

CMakeFiles/friend_client.dir/friend.pb.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/friend_client.dir/friend.pb.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lbk/chatsystem/server/friend/build/friend.pb.cc -o CMakeFiles/friend_client.dir/friend.pb.cc.s

# Object files for target friend_client
friend_client_OBJECTS = \
"CMakeFiles/friend_client.dir/test/friend_client.cc.o" \
"CMakeFiles/friend_client.dir/base.pb.cc.o" \
"CMakeFiles/friend_client.dir/user.pb.cc.o" \
"CMakeFiles/friend_client.dir/message.pb.cc.o" \
"CMakeFiles/friend_client.dir/friend.pb.cc.o"

# External object files for target friend_client
friend_client_EXTERNAL_OBJECTS =

friend_client: CMakeFiles/friend_client.dir/test/friend_client.cc.o
friend_client: CMakeFiles/friend_client.dir/base.pb.cc.o
friend_client: CMakeFiles/friend_client.dir/user.pb.cc.o
friend_client: CMakeFiles/friend_client.dir/message.pb.cc.o
friend_client: CMakeFiles/friend_client.dir/friend.pb.cc.o
friend_client: CMakeFiles/friend_client.dir/build.make
friend_client: /usr/lib/x86_64-linux-gnu/libjsoncpp.so.19
friend_client: CMakeFiles/friend_client.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lbk/chatsystem/server/friend/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable friend_client"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/friend_client.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/friend_client.dir/build: friend_client
.PHONY : CMakeFiles/friend_client.dir/build

CMakeFiles/friend_client.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/friend_client.dir/cmake_clean.cmake
.PHONY : CMakeFiles/friend_client.dir/clean

CMakeFiles/friend_client.dir/depend:
	cd /home/lbk/chatsystem/server/friend/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lbk/chatsystem/server/friend /home/lbk/chatsystem/server/friend /home/lbk/chatsystem/server/friend/build /home/lbk/chatsystem/server/friend/build /home/lbk/chatsystem/server/friend/build/CMakeFiles/friend_client.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/friend_client.dir/depend

