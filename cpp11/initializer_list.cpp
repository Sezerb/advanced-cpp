#include <iostream>
#include <initializer_list>

using namespace std;

class Test{
public:
	Test(initializer_list<int> iNumbers){
		for(auto value : iNumbers){
			cout << value << endl;
		}
	}

	void print(initializer_list<string> strCities){
		for(auto city : strCities){
			cout << city << endl;
		}
	}
};

int main(){
	
	Test t1{1, 9, 8, 6};

	t1.print({"istanbul", "ankara", "mugla"});
}