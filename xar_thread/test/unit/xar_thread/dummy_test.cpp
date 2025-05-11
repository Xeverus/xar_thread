#include <gtest/gtest.h>

#include <xar_thread/dummy.hpp>

namespace xar_thread
{
    namespace
    {
        TEST(DummyTest, basic)
        {
            const auto expected_result = std::string{"Hello World"};
            const auto actual_result = dummy();

            ASSERT_EQ(expected_result, actual_result);
        }
    }
}
