#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers;
	vector<int>::iterator it;

	for(int i=0; i<5; i++)
		numbers.push_back(i);

	for(it=numbers.begin(); it!=numbers.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}