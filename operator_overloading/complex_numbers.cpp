#include <iostream>

using namespace std;

class Complex{
	double real;
	double img;

public:
	//Constructor
	Complex() : real(0.), img(0.) {}
	Complex(double real, double img) : real(real), img(img) {}

	double getReal() const{
		return real;
	}
	double getImg() const{
		return img;
	}

	//Copy constructor
	Complex(const Complex& other){
		cout << "Copy constructor" << endl;
		real = other.real;
		img = other.img;
	}

	//Assignment operator:
	const Complex& operator=(const Complex& other){
		cout << "Assignment operator" << endl;
		real = other.real;
		img = other.img;
		return *this;
	}

	//left bit shift operator:
	friend ostream &operator<<(ostream& out, const Complex& obj){
		out << "(" << obj.getReal() << ", " << obj.getImg() <<"i)" << endl;
		return out;
	}

	//+ plus operator
	Complex operator+(const Complex &obj){
		return Complex(this->getReal() + obj.getReal(), this->getImg() + obj.getImg());
	}
};


//+ plus operator
/*
Complex operator+(const Complex &obj1, const Complex &obj2){
	return Complex(obj1.getReal() + obj2.getReal(), obj1.getImg() + obj2.getImg());
}
*/

int main()
{
	Complex c1(2,3);
	cout << c1 << endl;

	Complex c2 = c1;
	cout << c2 << endl;

	Complex c3;
	c3 = c2;
	cout << c3 << endl;

	Complex c4;
	c4 = c1 + c2 + c3;
	cout << c4 << endl;

	return 0;
}