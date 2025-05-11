# Xar Thread

## Description
My repository that I use to practice my multithread processing skills.

## Build
Example debug build commands:

```
conan install . -pr config/conan/profiles/windows_x86_64-gcc11 --build=missing -s build_type=Debug
cmake --preset conan-debug
cmake --build --preset conan-debug
```