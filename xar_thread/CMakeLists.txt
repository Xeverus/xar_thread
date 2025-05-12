set(PUBLIC_FILES
        src/xar_thread/spinlock.cpp
        src/xar_thread/dummy.cpp)

set(PRIVATE_FILES
        include/xar_thread/spinlock.hpp
        include/xar_thread/dummy.hpp)


add_library(xar_thread STATIC)


target_sources(xar_thread
        PRIVATE
            ${PUBLIC_FILES}
            ${PRIVATE_FILES})


target_include_directories(xar_thread
        PUBLIC
            ${CMAKE_CURRENT_SOURCE_DIR}/include
        PRIVATE
            ${CMAKE_CURRENT_SOURCE_DIR}/src)


add_subdirectory(test)