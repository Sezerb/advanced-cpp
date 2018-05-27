#include <iostream>
#include <map>

using namespace std;

class BtcAcc{
	string m_strName;
	int m_iPasswd;

public:

	BtcAcc(string name, int passwd) : m_strName(name), m_iPasswd(passwd){};

	bool operator<(const BtcAcc &other) const{
		return m_strName < other.m_strName;
	}

	void printAcc() const{
		cout << m_strName << "@" << m_iPasswd;
	}
};

int main()
{
	map<BtcAcc, int> m;

	m[BtcAcc("Sezer", 1986)] = 500;
	m[BtcAcc("Cemre", 1986)] = 1000;
	m[BtcAcc("Baris", 2017)] = 1500;

	for(map<BtcAcc, int>::iterator it = m.begin(); it!=m.end(); it++){
		it->first.printAcc();	
		cout << ": " << it->second << endl;
	}
	
	return 0;
}