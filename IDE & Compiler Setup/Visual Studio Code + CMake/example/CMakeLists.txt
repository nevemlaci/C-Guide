#Minimum cmake verzió
cmake_minimum_required(VERSION 3.28)

#projekt név, egy projekt alatt több executable/library is lehet
project(example)

#a C standard verzióját itt lehet beállítani
# C standardok: C99, C11, C17, C23
set(CMAKE_C_STANDARD 99)

#egy executablet adunk hozzá amihez a main.c filet kell fordítani
#több file esetén itt soroljuk fel az összes filet
add_executable(${PROJECT_NAME} main.c)