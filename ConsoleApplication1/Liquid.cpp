#include <iostream>
#include <string>
#include "Liquid.h"
using namespace std;

void Liquid::setDen(int value) {
	density = value;
}

void Liquid::setName(string value) {
	name = value;
}

void Liquid::Read() {
	string x;
	int y;
	cout << "Enter Liquid name: "; cin >> x;
	cout << "Enter Liquid density: "; cin >> y;
	if (Init(x, y)) { setName(x); setDen(y); }
}

bool Liquid::Init(string value, int Den) {
	if (value.length() > 0 && Den > 0) {
		return true;
	}
}

void Liquid::Display() const{
	cout << "Liquid name: " << getName() << endl;
	cout << "Liquid density: " << getDensity() << endl;
}

string Liquid::toString() {
	cout << "Density of Liquid: ";
	return to_string(density);
}