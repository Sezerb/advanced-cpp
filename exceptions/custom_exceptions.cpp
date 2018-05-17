#include <iostream>
#include <exception>

using namespace std;

class MyException : public exception{
public:
	virtual const char* what() const throw(){
		return "Something happened!"; 
	}
};

class Test{
public:
	void goesWrong(){
		throw MyException();
	}
};

int main()
{
	Test test;

	try{
		test.goesWrong();
	}
	catch(exception &e){
		cout << e.what() << endl;
	}

	return 0;
}