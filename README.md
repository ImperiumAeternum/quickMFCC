fastMFCC - C++17 library for computing Mel-Frequency Cepstral Coefficients
Version 0.1 - 21 March 2023

Implementation based on С libMFCC library https://github.com/jsawruk/libmfcc. FastMFCC uses modern C++ features like constexpr to speed up computation. It approximately 10x faster than original library.

Files in this distribution:

	LICENSE.md		=>	License to use and redistribute fastMFCC (MIT License)
	README.md		=>	This file
	libmfcc.c		=>	fastMFCC algorithm implementation
	libmfcc.h		=>	fastMFCC header file
	Sturm2010b.pdf		=>	Sturm et al. reference document
