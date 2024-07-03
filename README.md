# quickMFCC - Fast Mel-Frequency Cepstral Coefficients Library

**Version 0.9 - 2 February 2024**

quickMFCC is a C++20 library designed for efficiently computing Mel-Frequency Cepstral Coefficients (MFCCs). Leveraging modern C++ features, such as constexpr, the library achieves remarkable speed improvements compared to its predecessor, libMFCC. The implementation is approximately 20 times faster than original.

## Key Features

- **High Performance:** QuickMFCC is optimized for speed by using look-up tables to complete most frequent computations at compile-time
- **C++20 Features:** Utilizing modern C++ features, including constexpr and constinit, to enhance computation speed and efficiency
- **Ease of Use:** This is a lightweight library with no dependencies except modern C++ compiler.

## Performance Benchmark

On average, computing 13 coefficients using a Ryzen 5600H at 4 GHz gives following results:

- **libMFCC:** 8,192,429 nanoseconds (8 milliseconds)
- **quickMFCC:** 348,858 nanoseconds (0.33 milliseconds)

## Files in this Distribution

- `LICENSE.md`: MIT License for using and redistributing quickMFCC.
- `README.md`: This file, providing an overview of the library and its features.
- `quickmfcc.cpp`: Implementation of the quickMFCC algorithm.
- `quickmfcc.h`: Header file for quickMFCC.
- `example/CMakeLists.txt`: CMake file for compiling example.cpp.
- `example/demo.cpp`: A sample demonstrating the usage of the quickMFCC algorithm.
- `example/sample.dat`: FFT data used for processing in the example.
- `Sturm2010b.pdf`: Reference document by Sturm et al.

## Getting Started

Include quickmfcc.h header file where you want and compile it with std=c++20 or higher. Basic demo is provided in the /example subfolder.
