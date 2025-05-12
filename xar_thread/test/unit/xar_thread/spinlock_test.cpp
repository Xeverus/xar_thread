#include <chrono>
#include <thread>

#include <gtest/gtest.h>

#include <xar_thread/spinlock.hpp>


namespace xar_thread
{
    TEST(SpinLockTest, lifecycle__many_threads__result_ok)
    {
        const auto expected = 10;
        auto result = 0;

        SpinLock lock;
        const auto worker = [&]()
            {
                lock.lock();

                using namespace std::chrono_literals;
                std::this_thread::sleep_for(3ms);
                result = result + 1;

                lock.unlock();
            };

        std::vector<std::thread> threads;
        threads.reserve(expected);
        for (auto i = 0; i < expected; ++i)
        {
            threads.emplace_back(worker);
        }

        for (auto& thread : threads)
        {
            thread.join();
        }

        EXPECT_EQ(result, expected);
    }
}