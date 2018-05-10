#include <iostream>
using namespace std;

#define SIZE 99999999999999

class CanGoWrong{
public:
	CanGoWrong(){
		char* cPtr = new char[SIZE];
		delete[] cPtr;
	}
};


int main(){

	try{
		CanGoWrong wrong;	
	}
	catch(bad_alloc &e){
		cout << "Exception: " << e.what() <<endl;
	}
	
	cout << "Exception handled properly" << endl;
	return 0;	
}
