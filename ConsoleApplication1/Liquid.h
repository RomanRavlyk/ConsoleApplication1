#pragma once
#include <iostream>
#include <string>

class Liquid {
private: 
	std::string name;
	int density;
public:
	std::string getName() const { return name; }
	void setName(std::string value);
	int getDensity() const { return density;  }
	void setDen(int value);
	void Read();
	void Display() const;
	bool Init(std::string value, int Den);
	std::string toString();
};