#pragma once

#include <atomic>

namespace xar_thread
{
    class SpinLock
    {
    public:
        SpinLock();

        void lock();
        void unlock();

    private:
        std::atomic_flag _flag;
    };
}