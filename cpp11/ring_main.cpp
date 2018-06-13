#include "ring.h"

int main(){

	ring<string> textring(3);

	textring.add("one");
	textring.add("two");
	textring.add("three");
	textring.add("four");

	//Traditional
	for(int i=0; i<textring.size(); i++){
		cout << textring.get(i) << endl;
	}

	//C++98 style
	for(ring<string>::iterator it = textring.begin(); it != textring.end(); it++){
		cout << *it << endl;
	}

	//C++11 style
	for(auto value: textring){
		cout << value << endl;
	}

}
