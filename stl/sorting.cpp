#include <iostream>
#include <vector>
#include <algorithm>

#define DO_NOT_USE_COMP_FUNC 0

using namespace std;

class Test{
	int m_iId;
	string m_strName;

public:
	Test(int id, string name) : m_iId(id), m_strName(name) {}

	void print(){
		cout << m_iId << ": " << m_strName << endl;
	}


#if (DO_NOT_USE_COMP_FUNC == 1)
	bool operator<(const Test &other) const{
		return m_iId < other.m_iId;
	}
#else
	friend bool comp(const Test &a, const Test &b);
#endif

};

#if (!DO_NOT_USE_COMP_FUNC)
bool comp(const Test &a, const Test &b){
	return a.m_strName < b.m_strName;
}
#endif

int main()
{
	vector<Test> v;

	v.push_back(Test(1001, "Sezer"));
	v.push_back(Test(102, "Cemre"));
	v.push_back(Test(3, "Baris"));

#if (DO_NOT_USE_COMP_FUNC == 1)
	sort(v.begin(), v.end());
#else
	sort(v.begin(), v.end(), comp);
#endif
	for(vector<Test>::iterator it = v.begin(); it!=v.end(); it++){
		it->print();
	}
	return 0;
}