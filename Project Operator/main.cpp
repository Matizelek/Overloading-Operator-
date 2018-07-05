#include <iostream>
#include "Original.h"
#include "CloneA.h"

using namespace std;

int main() {

	Original o1(3,4);
	Original o2 = o1;
	Original o3 = o1 + o2;
	

	cout << o3 << "   : "<<o3.sum()<<"\n";

	CloneA c1(2.0,3.0);
	CloneA c2 (3,5);
	
	Original &o4 = c2;

	cout << o4 << "\n";
	cout << c1 << "\n";
	cout << c2 << "\n";

	Original *wsk = &o1;
	wsk = &c1;

	cout << *wsk<< "\n";

	system("PAUSE");
	return 0;
}