#include <iostream>

using namespace std;

void test(void (*ptrFunc)()){
    ptrFunc();
}

int main(){

	//lambda expression without input arguments	
    auto func =  [](){cout << "lambda expression" << endl;};
    func();
    test(func);

    //lambda expression with input arguments
    auto divFunc = [](double a, double b) -> double {

    	if(b == 0.0){
    		return 0;
    	}

    	return a/b;
    };

    cout << divFunc(8,3) << endl;


    //Capture parameters
    int one{1};
    int two{2};
    int three = 3;

    //Lambda expression has its own scope so capture one!
    [one](){ cout << one << endl;}();

    //Capture every local variable by copy.
    [=](){cout << one << " " << two << " "<< three << endl;}();

    //Capture every local variable by reference.
    [&](){one = 11; cout << one << " " << two << " "<< three << endl;}();

    //Capture every local variable by copy, except three.
    [=, &three](){three = 33; cout << one << " " << two << " "<< three << endl;}();

    return 0;
}
