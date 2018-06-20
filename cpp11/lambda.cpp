#include <iostream>

using namespace std;

void test(void (*ptrFunc)()){
    ptrFunc();
}

int main(){

    [](){cout << "lambda expression" << endl;};
	
    auto func =  [](){cout << "lambda expression" << endl;};

    func();

    test(func);

    return 0;
}
