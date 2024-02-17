cmake_minimum_required(VERSION 3.27)
project(pong)

set(CMAKE_CXX_STANDARD 17)

set(SDL_INCLUDE_DIR "C:\\sandbox\\libs\\SDL\\include")
set(SDL_LIB_DIR "C:\\sandbox\\libs\\SDL\\lib\\x64")

include_directories(${SDL_INCLUDE_DIR})
link_directories(${SDL_LIB_DIR})
add_executable(pong main.cpp
        src/inc/Game.h
        src/lib/Game.cpp)

target_link_libraries(${PROJECT_NAME} SDL2main SDL2)
