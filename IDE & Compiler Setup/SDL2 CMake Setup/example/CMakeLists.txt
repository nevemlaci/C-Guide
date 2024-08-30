#Minimum cmake verzió
cmake_minimum_required(VERSION 3.28)

#projekt név, egy projekt alatt több executable/library is lehet
project(sdl_example)

#A CMAKE_PREFIX_PATH egy változó ami a CMake packagek path-jeit tárolja. Ennek az elejére beszúrjuk az external directory-t, ahova az SDL2-t "telepítettük"
list(PREPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/external")

#Az SDL2 által adott CMake config fileok segítségével a CMake magtalálja a könyvtárat
find_package(SDL2 REQUIRED)

#a C standard verzióját itt lehet beállítani
# C standardok: C99, C11, C17, C23
set(CMAKE_C_STANDARD 99)

#egy executablet adunk hozzá amihez a main.c filet kell fordítani
#több file esetén itt soroljuk fel az összes filet
add_executable(${PROJECT_NAME} main.c)

#Az SDL2 configja által adott SDL2::SDL2-static targethez linkelünk(SDL2::SDL2-shared is létezik, természetesen)
target_link_libraries(${PROJECT_NAME} PRIVATE SDL2::SDL2-static)