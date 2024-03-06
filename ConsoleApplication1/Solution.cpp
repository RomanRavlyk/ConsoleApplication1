#include <iostream>
#include <string>
#include "Solution.h"

using namespace std;

void Solution::Read() {
	Liquid s;
	cout << endl;
	cout << "Solution = ? " << endl;
	s.Read();
	int Am;
	cout << "Amount = ? " << endl;
	
	cin >> Am;
	Init(Am, s);

}

void Solution::Display() const{
	cout << "Amount: " << getAmount() << endl;
	cout << "Liquid: "; liquid.Display(); cout << endl;
}

void Solution::Init(int amount, Liquid liquid) {
	setAmount(amount);
	setLiquid(liquid);
}

string Solution::toString() {
	cout << "Amount string: ";
	return to_string(amount);
}