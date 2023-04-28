#include <iostream>
#include "ChocolateBoiler.h"

int main()
{
	ChocolateBoiler* a = new ChocolateBoiler;
	a->fill();
	a->boil();
	a->drain();
}