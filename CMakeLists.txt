cmake_minimum_required(VERSION 3.10)

project(car)

set(INC ${CMAKE_SOURCE_DIR}/include
        ${CMAKE_SOURCE_DIR}/Interface)

set(SRC ${CMAKE_SOURCE_DIR}/source/car.cpp 
        ${CMAKE_SOURCE_DIR}/source/Connector.cpp
        ${CMAKE_SOURCE_DIR}/source/media.cpp
        ${CMAKE_SOURCE_DIR}/source/phone.cpp)

add_library(connect STATIC ${SRC})
target_include_directories(connect PUBLIC ${INC})
       
add_executable(exe main.cpp )
target_link_libraries(exe PUBLIC connect)

add_subdirectory(Test)
