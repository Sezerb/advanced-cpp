#include <iostream>
#include <vector>

using namespace std;

int main(){
	
	//Initialization in C++98
	cout << "C++98" << endl;

	int iArray[] = {1, 2, 3};
	cout << iArray[0] << endl;

	//Initialization in C++98
	struct strTest{
		string sName;
		int iId;
	};
	strTest s = {"Barko", 1}; //Only valid for initialization!
	cout << s.sName << " " << s.iId << endl;

	cout << "******" << endl;

	//Initialization in C++11
	cout << "C++11" << endl;

	int iVal0{};
	int iVal1{1};
	cout << iVal0 << " " << iVal1 << endl;

	int iPrime[]{2, 3, 5};
	cout << iPrime[2] << endl;

	struct strTest2{
		string sName;
		int iId;
	};
	strTest2 s2{"Barko",2};
	cout << s2.sName << " " << s2.iId << endl;

	vector<string> vDays{"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
	cout << vDays[3] << endl;

}