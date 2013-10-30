#pragma once
#include <memory>
#include <complex>

template <typename data_type>
struct Parameters
{
		using size_type = long unsigned int;
		using complex_type = std::complex<data_type>;

		size_type samplingRate = 44100U;
		size_type bufferSize = 512U;
};