#include "Resistor.hpp"
#include <complex>

Resistor::Resistor(double R) : resistance(R) {}

std::complex<double> Resistor::get_impedance(double omega)
{
	std::complex<double> impedance(resistance);
	return impedance;
}