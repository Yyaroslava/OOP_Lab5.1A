// bad_exception.h
#pragma once
#include <iostream>

using namespace std;

class BadException {
	string message;
public:
	BadException(string m) : message(m) {}
	string what();
};
