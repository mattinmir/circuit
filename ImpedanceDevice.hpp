

#ifndef IMPEDANCEDEVICE_HPP
#define IMPEDANCEDEVICE_HPP

#include <complex>

class ImpedanceDevice
{
public:
	virtual std::complex<double> get_impedance(double omega) = 0;

	virtual ~ImpedanceDevice() {}
};
#endif // !IMPEDANCEDEVICE_HPP
