#ifndef RESISTOR_HPP
#define RESISTOR_HPP

#include "ImpedanceDevice.hpp"
#include <complex>

class Resistor : public ImpedanceDevice
{
public:
	Resistor(double R);

	std::complex<double> get_impedance(double omega);
private:
	double resistance;
};

#endif
