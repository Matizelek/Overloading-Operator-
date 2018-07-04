#pragma once
#include "Original.h"

class CloneA : public Original
{
	double real;
	double imagine;
public:
	CloneA();
	~CloneA();
	CloneA(double real, double imagine);
	double sum() const;
};

