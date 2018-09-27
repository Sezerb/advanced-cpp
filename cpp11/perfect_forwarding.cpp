#include <iostream>

class Thing{

};

template<class T>
runCheck(T&& arg){
	check(std::forward<T>(arg));
}

void check(Thing& t){
	std::cout << "L value reference" << std::endl;
}

void check(Thing&& t){
	std::cout << "R value reference" << std::endl;
}

int main(){
	Thing t;
	runCheck(t);
	runCheck(Thing());

	return 0;	
}