#include "ChocolateBoiler.h"
#include <iostream>

using namespace std;

ChocolateBoiler::ChocolateBoiler() {
	empty = true;
	boiled = false;
}

void ChocolateBoiler::fill() {
	if (isEmpty()) {
		empty = false;
		boiled = false;
		cout << "Zalivaem shokolad..." << endl;
	}
}

void ChocolateBoiler::drain() {
	if (!isEmpty() && isBoiled()) {
		cout << "Slivaem nagretoe moloko i shokolad..." << endl;
		empty = true;
	}
	else {
		cout << "debug";
	}
}

void ChocolateBoiler::boil() {
	if (!isEmpty() && !isBoiled()) {
		cout << "Kipyatim..." << endl;
		boiled = true;
	}
}

bool ChocolateBoiler::isEmpty() {
	return empty;
}

bool ChocolateBoiler::isBoiled() {
	return boiled;
}