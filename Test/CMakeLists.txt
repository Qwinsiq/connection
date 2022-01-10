cmake_minimum_required(VERSION 3.10)

project(tests)
enable_testing()
#find_package(Threads REQUIRED)
find_package(GTest REQUIRED)
include(CTest)

add_executable(testF Testing/ComplexTest.cpp)
set(MOCK Mock)
target_link_libraries(testF GTest::GTest GTest::Main connect) 
target_include_directories(testF PRIVATE ${INC})
add_test(test1 testF)



include_directories(${GTEST_INCLUDE_DIRS})

add_executable(testR Testing/TestComplex.cpp)
target_link_libraries(testR GTest::GTest GTest::Main ${GMock_LIBRARIES} ${GTEST_LIBRARIES} connect) 
target_include_directories(testR PUBLIC ${INC} ${MOCK})
add_test(test2 testR)