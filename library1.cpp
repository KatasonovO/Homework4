#include <iostream>
#include "library1.hpp"

using namespace std;

double library1 :: makeDouble(int n)
{
    return static_cast<double>(n);
}

void library1 :: printName()
{
	cout << "__PRETTY_FUNCTION__ = " << __PRETTY_FUNCTION__ << endl;
}
