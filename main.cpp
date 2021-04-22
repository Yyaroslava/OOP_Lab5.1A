// lab5.1A.cpp 
#include <iostream>
#include <exception>
#include <stdexcept>
#include "Line.h"

using namespace std;

int main() {
	Line A;
	bool result;
	do {
		try {
			result = true;
			cin >> A;
		}
		catch (const char* str) {
			result = false;
			cerr << str << endl;
		}
		catch (bad_exception& e) {
			result = false;
			cerr << e.what() << endl;
		}
		catch (invalid_argument e) {
			result = false;
			cerr << e.what() << endl;
		}
	} while (!result);
	
	try {
	}

	catch (BadException e) {
		cerr << e.what() << endl;
		result = false;
	}

	catch (invalid_argument e) {
		cerr << e.what() << endl;
	}

	cout << "A.Check(): " << endl;
	A.Check();

	cout << "A.Function(): " << endl;
	A.Function();

	cout << "++A: " << endl;
	++A;
	cout << A;

	cout << "--A: " << endl;
	--A;
	cout << A;

	cout << "A++: " << endl;
	A++;
	cout << A;

	cout << "A--: " << endl;
	A--;
	cout << A;

	return 0;
}