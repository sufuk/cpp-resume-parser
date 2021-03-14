cmake_minimum_required(VERSION 3.16.0)
project(ResumeParser)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

file(GLOB SOURCE_FILES ${PROJECT_SOURCE_DIR}/src/*.cpp)
file(GLOB HEADER_FILES ${PROJECT_SOURCE_DIR}/src/*.h)
file(GLOB RESOURCE_FILES ${PROJECT_SOURCE_DIR}/resources/*.qrc)

set(Qt6_DIR $ENV{HOME}/Qt/6.0.2/gcc_64/lib/cmake/Qt6)
find_package(Qt6 COMPONENTS Core Widgets Gui OpenGL REQUIRED)

add_executable(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES})

target_link_libraries(${PROJECT_NAME}  PRIVATE Qt6::Core Qt6::Widgets)