#include <iostream>

using namespace std;

void test(void (*ptrFunc)()){
    ptrFunc();
}

class Test{
public:
    int a{1};
    int b{2};

    void func(){
        int c{3};
        int d{4};

        auto pLambda = [c, d, this](){
            a = 11;
            b = 22;
            cout << c << " " << d << endl;
        };

        pLambda();
    }

};

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
    //In order to modify "one" only in lambda scope use "mutable"
    [one]() mutable { one = 11;}();
    [one](){ cout << one << endl;}();

    //Capture every local variable by copy.
    [=](){cout << one << " " << two << " "<< three << endl;}();

    //Capture every local variable by reference.
    [&](){one = 11; cout << one << " " << two << " "<< three << endl;}();

    //Capture every local variable by copy, except three.
    [=, &three](){three = 33; cout << one << " " << two << " "<< three << endl;}();

    //Capture class members in a class method.
    Test t;
    t.func();
    cout << t.a << " " << t.b << endl;

    return 0;
}
