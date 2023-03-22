#include<iostream>
#include"cutlery.h"

using namespace std;

cutlery::cutlery() {
	isClean = true;
	type = rand() % 3;
}

void cutlery::printinfo() {
	if (type == 0) {
		cout << "you have frok" << endl;
		if (isClean == true)
			cout << "frok clean" << endl;
		else
			cout << "frok dity" << endl;
	}
	else if (type == 1) {
		cout << "you have spon" << endl;
		if (isClean == true)
			cout << "spon clean" << endl;
		else
			cout << "spon ditry" << endl;
	}
	else if (type == 2) {
		cout << "you ahev nife" << endl;
		if (isClean == true)
			cout << "nife ceen" << endl;
		else
			cout << "nife drity" << endl;
	}
	
}

void cutlery::use() {
	if (isClean == true) {
		if (type == 0) {
			cout << "u use frok";
		}
		else if (type == 1) {
			cout << "u use sopn";
		}
		else if (type == 2) {
			cout << "u sued noife";
		}
		isClean = false;
		cout << ", now id sirty" << endl;
	}
	
}

void cutlery::wash() {

	if (isClean == false) {
		if (type == 0) {
			cout << "frok wash brrr";
		}
		else if (type == 1) {
			cout << "spon wash brrr";
		}
		else if (type == 2) {
			cout << "knie wash brrr";
		}

		isClean = true;
		cout << " is clen now " << endl;
	}
	else if (isClean == true) {
			cout << "Why would you clean it again, it is already clean." << endl;
	}
}
