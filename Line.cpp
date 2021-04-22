// Line.cpp
#include "Line.h"

Line::Line()  {
	first = 0;
	second = 0;
	x = 0;
}

Line::Line(double first = 0, double second = 0,double x = 0) throw(BadException, invalid_argument) {
	if (first > second) {
		throw BadException("BadException Error!( first < second )");
	}
	if (first == second) {
		throw invalid_argument("Built in exception Error!( first = second )");
	}	
	this->first = first;
	this->second = second;
	this->x = x;
}

Line::Line(const Line& line) {
	first = line.first;
	second = line.second;
	x = line.x;
}

void Line::Setfirst(double first) {
	this->first = first;
}

void Line::Setsecond(double second) {
	this->second = second;
}

void Line::Setx(double second) {
	this->x = x;
}

double Line::Getfirst() const { return first; }
double Line::Getsecond() const { return second; }
double Line::Getx() const { return x; }

Line& Line::operator = (const Line& line)
{
	first = line.first;
	second = line.second;
	x = line.x;
	return *this;
}

Line::operator string() const {
	stringstream ss;
	ss << "A, B and x: " << endl;
	ss << "A: " << first << endl;
	ss << "B: " << second << endl;
	ss << "x: " << x << endl;
	return ss.str();
}

ostream& operator << (ostream& out, const Line& line) {
	out << string(line);
	return out;
}

istream& operator >> (istream& in, Line& line) throw(const char*, bad_exception&) {
	cout << "Enter A, B and x: " << endl;
	cout << " A: ";
	in >> line.first;

	cout << " B: ";
	in >> line.second;

	cout << " x: ";
	in >> line.x;

	cout << endl;

	if (line.first > line.second) {
		throw "Error! ( first > second ) ";
	}
	if (line.first == line.second) {
		throw bad_exception();
	}
	if (line.x == 100) {
		throw invalid_argument("Error! ( x = 100 ) ");
	}
	return in;
}

double Line::Check() {
	cout << "A != 0 " << endl;
	if (first != 0) {
		cout << "Yes " << endl;
		cout << "y = " << Function() << endl;
		return true;
	}
	else {
		cout << "No " << endl;
		return false;
	}
}

double Line::Function() {
	return  first * x + second;
}

Line& Line::operator ++() {     
	++first;
	return *this;
}

Line& Line::operator --() {    
	--first;
	return *this;
}

Line Line::operator ++(int) {  
	Line a(*this);
	second++;
	return a;
}

Line Line::operator --(int) {   
	Line a(*this);
	second--;
	return a;
}
