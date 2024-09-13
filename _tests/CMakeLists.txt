include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/tags/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

add_executable(test_Generator Actions.test.cpp ../actions.cpp)

target_link_libraries(test_Generator gtest gtest_main)

enable_testing()

add_test(NAME ActionsTests COMMAND test_Actions)
