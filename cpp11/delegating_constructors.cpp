#include <iostream>

using namespace std;


class Parent{
	int m_iAge;
	string m_strName;

public:
	Parent() : Parent(0, "Anomim"){
		cout << "Parent no parameter constructor." << endl;
	} //Delegating constructors withing the same class only available with C++11 or higher
	Parent(int age, string name) : m_iAge(age), m_strName(name){
		cout << "Parent with parameter constructor." << endl;
	}
};

class Child : public Parent{
public:
	Child() : Parent(){
		cout << "Child no parameter constructor." << endl;
	}
};

int main(){
	Parent p;
	Child c;

	return 0;

/***
Expected output:
Parent with parameter constructor.
Parent no parameter constructor.
Parent with parameter constructor.
Parent no parameter constructor.
Child no parameter constructor.
***/	
}