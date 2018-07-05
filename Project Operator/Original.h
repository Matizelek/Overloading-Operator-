#pragma once
#include <iostream>

using namespace std;

class Original
{
	double real;
	double imagine;
public:
	Original();
	 Original(double real, double imagine);
	 Original(const Original &other);
	 const Original &operator=(const Original &other);
	virtual ~Original();
	virtual double getReal() const ;
	virtual double getImagine() const ;
	virtual double sum() const;
};

Original operator+(const Original &o1, const Original &o2);
ostream &operator<<(ostream &out, const Original &o1);
