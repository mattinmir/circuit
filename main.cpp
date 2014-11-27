#include <iostream>
#include <fstream>
#include <vector> 
#include <cstdlib>
#include "Components.hpp"

using namespace std;
int main()
{
	ifstream infile;
	infile.open("circuit.txt", 'r');

	if (!infile.is_open())
	{
		cout << "could not open file";
		exit(EXIT_FAILURE);
	}

	vector<ImpedanceDevice*> circuit;
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

	for (int i = 0; i < circuit.size(); i++)
		cout << circuit.at(i)->get_impedance(1000);

	return 0;
}