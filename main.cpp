#include<iostream>
#include "cutlery.h"
using namespace std;
int main() {
	srand(time(NULL));

	cutlery c1;
	cutlery c2;
	cutlery c3;

	c1.printinfo();
	c2.printinfo();
	c3.printinfo();

	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;

	c1.use();
	c2.use();
	c3.use();

	cout << endl;
	cout << "------------------------------" << endl;
	cout << endl;

	c1.wash();
	c2.wash();
	c3.wash();
}
