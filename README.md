This is a mimumum working example CMake project for using the Jiskefet C++ API

## Build

```
git clone https://github.com/PascalBoeschoten/jiskefet-api-cpp-cmake-example.git
cd jiskefet-api-cpp-cmake-example
mkdir build; cd build
cmake ..
make
```

Depending on how JiskefetApiCpp was installed, it may be necessary to indicate to CMake where to find the JiskefetApiCppConfig.cmake file:

```
cmake -DCMAKE_PREFIX_PATH=/path/to/my/lib/cmake/JiskefetApiCpp ..
```