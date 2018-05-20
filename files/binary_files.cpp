#include <iostream>
#include <fstream>

using namespace std;

struct Person{
	string name;
	int age;
	double height;
};


int main()
{

	Person someone = {"Baris", 0, 1.0};
	Person someoneElse = {};
	//Write to binary file
	ofstream outFile;
	outFile.open("test.bin", ios::binary);

	if(outFile.is_open()){

		outFile.write(reinterpret_cast<char *>(&someone), sizeof(Person));
		outFile.close();
	}
	else{
		cout << "Cannot open test.bin" << endl;
	}

	//Read from binary file
	ifstream inFile;
	inFile.open("test.bin", ios::binary);

	if(inFile.is_open()){
		inFile.read(reinterpret_cast<char *>(&someoneElse), sizeof(Person));
		inFile.close();
	}
	else{
		cout << "Cannot write to test.bin" << endl;
	}

	cout << someoneElse.name << ", " << someoneElse.age << ", " << someoneElse.height << endl;

	return 0;

}