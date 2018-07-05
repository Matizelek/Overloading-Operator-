#include "CloneA.h"



CloneA::CloneA() : Creal(0), Cimagine(0)
{
}



CloneA::~CloneA()
{
}

CloneA::CloneA(double real, double imagine) : Creal(real) , Cimagine(imagine)
{
}

double CloneA::getReal() const
{
	return Creal;
}

double CloneA::getImagine() const
{
	return Cimagine;
}

double CloneA::sum() const
{
	return (Creal * 2) + (Cimagine * 2) +1;
}

ostream & operator<<(ostream & out, const CloneA & o1)
{
	out << "(" << o1.getReal() << "," << o1.getImagine() << ")";
	return out;
}
