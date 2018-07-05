#pragma once
#include "Original.h"

class AbstractA : public Original
{
public:
	AbstractA();
	~AbstractA();
	virtual void doubleValues() = 0;
};

