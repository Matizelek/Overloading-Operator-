#pragma once
#include "AbstractA.h"

class CloneAbstract : public AbstractA
{
	double Areal;
	double Aimagine;
public:
	CloneAbstract();
	CloneAbstract(double real, double imagine);
	~CloneAbstract();
	double getReal() const;
	double getImagine() const;
	void doubleValues();
};

