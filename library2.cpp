#include <iostream>
#include "library2.hpp"

using namespace std;
void library2::printString(const std::string& s)
{
    cout << s << endl;
}

void library2::printName()
{
	cout << "__PRETTY_FUNCTION__ = " << __PRETTY_FUNCTION__ << endl;
}
