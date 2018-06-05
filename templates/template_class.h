#ifndef TEMPLATE_CLASS_HEADER
#define TEMPLATE_CLASS_HEADER
#include <iostream>
using namespace std;

template<class T>
class Test{
	T obj;

public:
	Test(T obj){
		this->obj = obj;
	}

	void print(){
		cout << obj << endl;
	}
};


#endif