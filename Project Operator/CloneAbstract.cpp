#include "CloneAbstract.h"



CloneAbstract::CloneAbstract() : Areal(0), Aimagine(0)
{
}


CloneAbstract::~CloneAbstract()
{
}

CloneAbstract::CloneAbstract(double real, double imagine) : Areal(real), Aimagine(imagine)
{
}

double CloneAbstract::getReal() const
{
	return Areal;
}

double CloneAbstract::getImagine() const
{
	return Aimagine;
}

void CloneAbstract::doubleValues(){
	this->Areal += this->Areal;
	this->Aimagine += this->Aimagine;
}
