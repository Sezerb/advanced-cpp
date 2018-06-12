#include <iostream>

using namespace std;

template<class T, class S>
auto getSum(T t, S s) -> decltype(t + s) { //-> shows return type
	return t + s;
}

int main(){

	auto b = 12;
	auto s = "Hello";

	cout << b << endl;
	cout << s << endl;
	cout << getSum(1,5) << endl;
	
	return 0;
}