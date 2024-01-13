cmake_minimum_required(VERSION 3.23)
project(QT_M36)

set(CMAKE_CXX_STANDARD 20)
#set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/usr/local/Cellar/qt@5/5.15.11")

find_package(Qt5 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)
include_directories(include)
add_executable(QT_M36 src/main.cpp src/Printer.cpp include/Printer.h)
target_link_libraries(QT_M36
        Qt5::Core
        Qt5::Gui
        Qt5::Widgets
        )

