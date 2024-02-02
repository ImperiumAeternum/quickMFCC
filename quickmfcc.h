/*
 * quickmfcc.h - Header for fastmfcc
* Copyright (c) 2023 Kogan Vladislav, Kostanda Volodymyr, Marukhnenko Oleksandr
* Copyright (c) 2010 Jeremy Sawruk
*
* This code is released under the MIT License.
* For conditions of distribution and use, see the license in LICENSE
*/

#pragma once

#define PI 3.14159265358979323846264338327
// Returns the specified (mth) MFCC
double GetCoefficient(double* spectralData, unsigned int samplingRate, unsigned int NumFilters, unsigned int binSize, unsigned int m);

//Compute constexpr pow, replaces math.h for preproc functions (For internal computation only - not to be called directly)
template <typename T> constexpr T ipow(T x, int exp);

//Compute some CenterFrequencies at compile-time (For internal computation only - not to be called directly)
constexpr double PreprocCenterFrequency(unsigned int filterBand);

//Compute some MagnitudeFactors at compile-time (For internal computation only - not to be called directly)
constexpr double PreprocMagnitudeFactor(unsigned int filterBand);

// Compute the normalization factor (For internal computation only - not to be called directly)
double NormalizationFactor(int NumFilters, int m);

// Compute the filter parameter for the specified frequency and filter bands (For internal computation only - not the be called directly)
double GetFilterParameter(unsigned int samplingRate, double rBinSize, unsigned int frequencyBand, unsigned int filterBand);

// Compute the band-dependent magnitude factor for the given filter band (For internal computation only - not the be called directly)
double GetMagnitudeFactor(unsigned int filterBand);

// Compute the center frequency (fc) of the specified filter band (l) (For internal computation only - not the be called directly)
double GetCenterFrequency(unsigned int filterBand);
