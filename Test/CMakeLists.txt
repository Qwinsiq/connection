

enable_testing()
find_package(Threads REQUIRED)
find_package(GTest REQUIRED)
include(FindPkgConfig)
pkg_check_modules(GMock REQUIRED "gmock")

add_executable(testF Testing/ComplexTest.cpp)
set(MOCK Mock)
target_link_libraries(testF PUBLIC GTest::GTest GTest::Main connect) 
target_include_directories(testF PUBLIC ${INC})
add_test(test1 testF)

add_executable(testR Testing/TestComplex.cpp)
target_link_libraries(testR PUBLIC GTest::GTest GTest::Main gmock connect) 
target_include_directories(testR PUBLIC ${INC} ${MOCK})
add_test(test2 testR)