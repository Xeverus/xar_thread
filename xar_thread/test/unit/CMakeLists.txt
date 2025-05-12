add_executable(xar_thread_test_unit)

target_sources(xar_thread_test_unit
        PRIVATE
            xar_thread/spinlock_test.cpp
            xar_thread/dummy_test.cpp)

target_link_libraries(xar_thread_test_unit
        PRIVATE
            xar_thread
            GTest::gtest_main)
