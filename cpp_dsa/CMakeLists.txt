cmake_minimum_required(VERSION 3.10)
project(Algorithm2025)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Enable testing
enable_testing()

# Add Google Test
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

# Add main executable
add_executable(algorithm2025 
    src/main/cpp/dev/dsa/RunApp.cpp
    src/main/cpp/dev/dsa/bigo/BigOExamples.cpp
)

# Add include directories
target_include_directories(algorithm2025 PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Add test executable
add_executable(algorithm2025_tests
    src/test/cpp/dev/dsa/bigo/BigOExamplesTest.cpp
)

# Link test executable with Google Test
target_link_libraries(algorithm2025_tests PRIVATE
    GTest::gtest_main
    GTest::gmock_main
)

# Add test executable to CTest
add_test(NAME algorithm2025_tests COMMAND algorithm2025_tests) 