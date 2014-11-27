#include "Inductor.hpp"
#include <complex> 

Inductor::Inductor(double L) : inductance(L) {}

std::complex<double> Inductor::get_impedance(double omega)
{
	std::complex<double> impedance(0, omega * inductance);
	return impedance;
}

