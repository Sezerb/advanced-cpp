#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;


bool checkSizeThree(string name){
	return name.size() == 3;
}

class Checker{
public:
	bool operator()(string name){
		return name.size() == 5;
	}
};

//Convention: function<retType(inputParam)> funcName
void run(function<bool(string&)> check, string name){
	cout << check(name) << endl;
}

int main(){

	vector<string> v{"ali", "veli", "deli"};

	//Use function pointer
	cout << count_if(v.begin(), v.end(), checkSizeThree) << endl;

	//Use lambda expression
	auto lambda = [](string name){ return name.size() == 4;};
	cout << count_if(v.begin(), v.end(), lambda) << endl;

	//Use Functor
	Checker cChecker;
	cout << count_if(v.begin(), v.end(), cChecker) << endl;

	//Use functional for all!
	run(checkSizeThree, "oya"); //Function Pointer
	run(lambda, "sema"); //Lambda Expression
	run(cChecker, "veysel"); //Functor

	return 0;
}
