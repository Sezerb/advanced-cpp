#include <iostream>
#include <list>

using namespace std;

void printList(list<int> &numberList, int line)
{
	list<int>::iterator it = numberList.begin();
	cout << "LINE: " << line << endl;
	while(it != numberList.end())
	{
		cout << *it << endl;
		it++;
	}
}

int main()
{
	list<int> numberList;
	list<int>::iterator it;

	numberList.push_back(1);
	numberList.push_back(2);
	numberList.push_back(3);
	numberList.push_front(0);
	printList(numberList, __LINE__);

	it = numberList.begin();
	it++;

	//insert 100
	numberList.insert(it, 100); //after insert it++
	printList(numberList, __LINE__);
	cout << "*it: " << *it << endl;

	//delete 100
	it--;
	it = numberList.erase(it); //after erase it--
	printList(numberList, __LINE__);
	cout << "*it: " << *it << endl;

	return 0;
}