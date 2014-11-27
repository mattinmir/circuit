#ifndef CAPACITOR_HPP
#define CAPACITOR_HPP

#include "ImpedanceDevice.hpp"
#include <complex>

class Capacitor : public ImpedanceDevice
{
public:

	Capacitor(double C);

	std::complex<double> get_impedance(double omega);
private:
	double capacitance;
};


#endif // !CAPACITOR_HPP
