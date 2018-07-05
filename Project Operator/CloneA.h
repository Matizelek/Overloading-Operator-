#pragma once
#include "Original.h"

class CloneA : public Original
{
	double Creal;
	double Cimagine;
public:
	CloneA();
	~CloneA();
	CloneA(double real, double imagine);
	double getReal() const;
	double getImagine() const;
	double sum() const;
};

ostream &operator<<(ostream &out, const CloneA &o1);