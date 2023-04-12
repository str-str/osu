# CMake minimum version requirement
cmake_minimum_required(VERSION 3.10)

# Set project name
project(MyProject)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)

# Add subdirectories for library and executable
#add_subdirectory(lib)
#add_subdirectory(src)
add_subdirectory(osu.Game.Rulesets.Mania)
add_subdirectory(osu.Game.SDL)

# Define executable target
#add_executable(MyExecutable main_my_hacks.cpp)

add_executable(MyExecutable
    main_my_hacks.cpp
    osu.Game.Rulesets.Mania/ManiaRuleset.cs
    osu.Game.Rulesets.Mania.Multiplayer/MultiplayerManiaClient.cs
)
# Link executable target with library target
#target_link_libraries(MyExecutable PRIVATE MyLibrary)

#link_directories(/path/to/MyLibrary)
#link_directories(/lib/udev)
