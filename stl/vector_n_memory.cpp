#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> numbers(10);

	cout << "Size " << numbers.size() << endl;
	cout << "Capacity " << numbers.capacity() << endl;

	for(int i=0; i<1000; i++)
	{
		numbers.push_back(i);
	}

	cout << "Size " << numbers.size() << endl;
	cout << "Capacity " << numbers.capacity() << endl;		

	numbers.resize(10);
	cout << "Size " << numbers.size() << endl;
	cout << "Capacity " << numbers.capacity() << endl;

	numbers.reserve(10);
	cout << "Size " << numbers.size() << endl;
	cout << "Capacity " << numbers.capacity() << endl;

	numbers.reserve(1281);
	cout << "Size " << numbers.size() << endl;
	cout << "Capacity " << numbers.capacity() << endl;			

	return 0;

}