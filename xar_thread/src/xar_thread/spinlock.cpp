#include <xar_thread/spinlock.hpp>

namespace xar_thread
{

    SpinLock::SpinLock()
        : _flag{}
    {
    }

    void SpinLock::lock()
    {
        while (_flag.test_and_set())
        {
        }
    }

    void SpinLock::unlock()
    {
        _flag.clear();
    }
}