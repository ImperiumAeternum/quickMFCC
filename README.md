quickMFCC - C++20 library for computing Mel-Frequency Cepstral Coefficients
Version 0.9 - 2 February 2023

Implementation based on С libMFCC library https://github.com/jsawruk/libmfcc. QuickMFCC uses modern C++ features like constexpr to speed up computation. 

It approximately 20x faster than original library. Average performance results for computing 13 coefficients using Ryzen 5600H on 4 GHz:
libMFCC 	- 8'192'429 nanoseconds aka 8 milliseconds
quickMFCC	- 348'858 nanoseconds	aka 0.33 milliseconds

Files in this distribution:
	LICENSE.md			=>	License to use and redistribute quickMFCC (MIT License)
	README.md			=>	This file
	quickmfcc.cpp		=>	quickMFCC algorithm implementation
	quickmfcc.h			=>	quickMFCC header file
	example/CMakeLists.txt	=>  CMake file for example.cpp
	example/demo.cpp		=> 	algorithm usage sample
	example/sample.dat 		=>  FFT data to process in example
	Sturm2010b.pdf			=>	Sturm et al. reference document
