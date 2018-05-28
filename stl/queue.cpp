#include <iostream>
#include <queue>

using namespace std;

class Test{
private:
	string m_strName;
public:	
	Test(string s) : m_strName(s){};
	~Test(){
		cout << "Destructor!" << endl;
	}
	void print(){
		cout << m_strName << endl;
	}
};

int main()
{
	queue<Test> testQueue;

	testQueue.push(Test("Ali"));
	testQueue.push(Test("Veli"));
	testQueue.push(Test("Ayşe"));

	cout << "Front: ";
	testQueue.front().print();
	cout << "Back: "; 
	testQueue.back().print();

	while(testQueue.size()){
		Test &test = testQueue.front();
		test.print();
		testQueue.pop();
	}

	return 0;
}