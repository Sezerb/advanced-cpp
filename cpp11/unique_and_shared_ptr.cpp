#include <iostream>
#include <memory>

using namespace std;

class Thing{
public:
	Thing(){
		cout << "Constructed." << endl;
	}

	void saySmth(){
		cout << "Bla bla..." << endl;
	}

	~Thing(){
		cout << "Destroyed." << endl;
	}
};

int main(){

	//unique_ptr usage
	unique_ptr<Thing> pThing(new Thing());
	pThing->saySmth();

	//unique_ptr usage w Array
	unique_ptr<Thing[]> pThingArr(new Thing[2]);
	pThingArr[0].saySmth();

	//shared_ptr usage
	shared_ptr<Thing> psThing1(new Thing());
	{
		cout << "We are in a dummy scope" << endl;
		shared_ptr<Thing> psThing2(nullptr);
		psThing2 = psThing1;
		//psThing2 no deallocated because it's shared!
	}

	cout << "End of days" << endl;
	return 0;

}