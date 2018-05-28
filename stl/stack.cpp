#include <iostream>
#include <stack>

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
	stack<Test> testStack;

	testStack.push(Test("Ali"));
	testStack.push(Test("Veli"));
	testStack.push(Test("Ayşe"));

	while(testStack.size()){
		Test &test = testStack.top();
		test.print();
		testStack.pop();
	}

	return 0;
}