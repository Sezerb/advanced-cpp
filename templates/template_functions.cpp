#include <iostream>

using namespace std;

template<class T> //typename can also be used.
void print(T a){
	cout << "Template " << a << endl;
}

void print(int a){
	cout << "Non-Template " << a << endl;
}

int main()
{
	print<string>("Hi");
	print<int>(120617);
	print("Hi again!");
	print(120617);
	print<>(120617);
}