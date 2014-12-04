#include <iostream>
#include <fstream>
#include <cstdlib>
#include <list>
#include "Components.hpp"

using namespace std;
int main()
{
	ifstream infile;
	infile.open("circuit.txt");

	if (!infile.is_open())
	{
		cout << "could not open file";
		exit(EXIT_FAILURE);
	}
	
	list<ImpedanceDevice*> circuit;
	char component;
	double value;
	while (infile >> component >> value)
	{
		if (component == 'c')
		{
			circuit.push_back(new Capacitor(value));
		}
		else if (component == 'l')
		{
			circuit.push_back(new Inductor(value));
		}
		else if (component == 'r')
		{
			circuit.push_back(new Resistor(value));
		}
	}

	infile.close();

	list<ImpedanceDevice*>::iterator it;

	for (it = circuit.begin(); it != circuit.end(); ++it)
	{
		if ((*it)->get_impedance(1000).imag() < 0)
			cout << (*it)->get_impedance(1000).real() << "-" << -(*it)->get_impedance(1000).imag() << "i" << endl;
		else
			cout << (*it)->get_impedance(1000).real() << "+" << (*it)->get_impedance(1000).imag() << "i" << endl;
	}


	return 0;
}