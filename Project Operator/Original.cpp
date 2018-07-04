#include "Original.h"



Original::Original() :real(0), imagine(0){
}


Original::Original(double real, double imagine):real(real) , imagine(imagine){
}


Original::Original(const Original & other){
	real = other.real;
	imagine = other.imagine;
}

const Original &Original::operator=(const Original &other){
	real = other.real;
	imagine = other.imagine;
	return *this;
	// TODO: tu wstawiæ instrukcjê return
}


Original::~Original()
{
}



double Original::getReal() const
{
	return real;
}

double Original::getImagine() const
{
	return imagine;
}

double Original::sum() const
{
	return real + imagine;
}



Original operator+(const Original &o1, const Original &o2)
{
	
	return Original(o1.getReal() + o2.getReal(),o1.getImagine() + o2.getImagine());
}

ostream & operator<<(ostream & out, const Original & o1)
{
	out << "(" << o1.getReal() << "," << o1.getImagine() << ")";
	return out;
}
