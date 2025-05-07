# Find CUnit package
find_package(CUnit REQUIRED)

# Add test executable
add_executable(run_tests test_main.c)

# Link against CUnit
target_link_libraries(run_tests CUnit::CUnit)

# Add test
add_test(NAME run_tests COMMAND run_tests) 