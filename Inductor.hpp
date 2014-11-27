#ifndef INDUCTOR_HPP
#define INDUCTOR_HPP

#include "ImpedanceDevice.hpp"
#include <complex>

class Inductor : public ImpedanceDevice
{
public:
	Inductor(double L);

	std::complex<double> get_impedance(double omega);
private:
	double inductance;
};

#endif // !INDUCTOR_HPP
