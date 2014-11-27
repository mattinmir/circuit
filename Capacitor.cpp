#include "Capacitor.hpp"
#include <complex> 

Capacitor::Capacitor(double C) : capacitance(C) {}

std::complex<double> Capacitor::get_impedance(double omega)
{
	std::complex<double> impedance(0, -1 / (omega*capacitance));
	return impedance;
}

