/*
 * example.c - example of using libMFCC
 * Written 2010 - J. Sawruk
 */

#include <iostream>
#include <fstream>
#include <vector>
#include <chrono>
#include <array>
#include <filesystem>

#include "../quickmfcc.h"

int main()
{
	// Read in sample data from sample.dat
	// sample.dat contains an 8192-point spectrum from a sine wave at 440Hz (A) in double precision
	// Spectrum was computed using FFTW (http://www.fftw.org/)
	// Data was not windowed (rectangular)
    // Holds the spectrum data to be analyzed
    std::vector<double> spectrum(8192);

    // Name of the sample spectrum data file
    std::filesystem::path currentPath = __FILE__;
    std::filesystem::path directory = currentPath.parent_path();
    std::filesystem::path fileName = directory / "sample.dat";

    // Open the sample spectrum data
    std::ifstream sampleFile(fileName, std::ios::binary);

    // Check if the file is opened successfully
    if (!sampleFile.is_open()) {
        std::cerr << "Failed to open file: " << fileName << std::endl;
        return 1;
    }

    // Read in the contents of the sample file
    unsigned int i = 0;
    double value;
    while (sampleFile >> value) {
        spectrum[i++] = value;
        if (i >= spectrum.size()) {
            // The vector is full, break the loop
            break;
        }
    }

    // Close the sample file
    sampleFile.close();

	// Compute the first 13 coefficients
    std::array<double, 13> coefs = {};
    std::chrono::steady_clock::time_point t1 = std::chrono::steady_clock::now();
	for(auto i = 0; i < coefs.size(); i++)   
	{
        coefs[i] = GetCoefficient(spectrum.data(), 44100, 48, 128, i);
	}
    std::chrono::steady_clock::time_point t2 = std::chrono::steady_clock::now();
    for (auto el:coefs) {
        std::cout << el << '\n';
    }
    std::cout << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << '\t';
    printf("nanoseconds to compute first 13 MFC coefficients \n");
	getchar();
	return 0;
}
