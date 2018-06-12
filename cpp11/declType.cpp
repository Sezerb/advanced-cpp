#include <iostream>
#include <typeinfo>
/*do not forget -std=gnu++11*/
using namespace std;

int main(){
	int i;
	string str1 = "earth";

	cout << typeid(i).name() << endl;
	cout << typeid(str1).name() << endl;

	decltype(str1) str2 = "space";

	cout << str2 << endl;

	return 0;
}
