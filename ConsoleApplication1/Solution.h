
#pragma once
#include <string>
#include "Liquid.h"

using namespace std;
class Solution
{
private:
	Liquid liquid;
	int amount;
public:
	int getAmount() const { return amount; }
	void setAmount(int value) { this->amount = value; };
	void setLiquid(Liquid liquid) { this->liquid = liquid; };
	Liquid getLiquid() const { return liquid; }
	void Init(int amount, Liquid liquid);
	void Display() const;
	void Read();
	string toString();
};

