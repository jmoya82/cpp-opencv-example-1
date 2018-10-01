include(GoogleTest)
add_executable(runtests test/main test/addition_tests.cpp)
find_package(GTest REQUIRED)
target_link_libraries(runtests PRIVATE GTest::GTest GTest::Main binops)
gtest_discover_tests(runtests)

add_library(binops SHARED include/binops.hpp src/addition.cpp)
set_target_properties(binops PROPERTIES PUBLIC_HEADER include/binops.hpp)
