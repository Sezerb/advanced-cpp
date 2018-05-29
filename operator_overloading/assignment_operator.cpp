#include <iostream>

using namespace std;

class Test{
	int m_iId;
	string m_strName;

public:
	Test() : m_iId(0), m_strName("zero"){}
	Test(int id, string name) : m_iId(id), m_strName(name) {}

	void print(){
		cout << m_iId << ": " << m_strName << endl;
	}

	const Test& operator=(const Test& other){
		cout << "Assignment operator" << endl;
		m_iId = other.m_iId;
		m_strName = other.m_strName;
		return *this;
	}

	Test(const Test& other){
		cout << "Copy constructor" << endl;
		m_iId = other.m_iId;
		m_strName = other.m_strName;
	}
};

int main()
{
	Test test1(10, "ten");
	Test test2(20, "twenty");
	
	test1.print();
	
	//Assignment
	test1 = test2;
	test1.print();
	
	//Assignment
	test1.operator=(test2);
	test1.print();

	//Copy constructor
	Test test3 = test1;
	test3.print();
	return 0;
}