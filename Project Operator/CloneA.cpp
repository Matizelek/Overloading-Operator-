#include "CloneA.h"



CloneA::CloneA() : real(0), imagine(0)
{
}



CloneA::~CloneA()
{
}

CloneA::CloneA(double real, double imagine) : real(real) , imagine(imagine)
{
}

double CloneA::sum() const
{
	return (real * 2) + (imagine * 2);
}

