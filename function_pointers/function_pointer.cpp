#include <iostream>
#include <vector>

using namespace std;

bool match(string str){
	return (str.size() == 3);
}

int matchCount(vector<string>& v, bool (*ptrFunc)(string)){

	int count = 0;

	for(vector<string>::iterator it = v.begin(); it!=v.end(); it++){
		if(ptrFunc(*it)){
			count++;
		}
	}

	return count;
}

int main()
{

	vector<string> v;

	v.push_back("one");
	v.push_back("two");
	v.push_back("six");
	v.push_back("ten");
	v.push_back("eleven");

	cout << matchCount(v, match) << endl;


}