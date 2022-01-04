cmake_minimum_required(VERSION 3.10)

project(tests)
enable_testing()
#find_package(Threads REQUIRED)
find_package(GTest REQUIRED)

add_executable(testF Testing/ComplexTest.cpp)
target_link_libraries(testF GTest::GTest GTest::Main connect) 
target_include_directories(testF PRIVATE ${INC})
add_test(test1 testF)