#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class DataBlock{
	int m_iSize;
	int* m_pData;

public:
	//Constructor
	explicit DataBlock(int size) : m_iSize(size), m_pData(new int[size]){
		cout << "Constructor... " << "Size:" << m_iSize << endl;
	}

	//Destructor
	~DataBlock(){

		if(m_pData != nullptr){
			cout << "Delete resources..." << endl;
			delete[] m_pData;
		}
	}

	//Copy Constructor
	DataBlock(const DataBlock& other) : m_iSize(other.m_iSize), m_pData(new int[other.m_iSize]){
		cout << "Copy Constructor... " << "Size:" << m_iSize << endl;
		copy(other.m_pData, other.m_pData + m_iSize, m_pData);	
	}

	//Copy Assignment Operator
	const DataBlock& operator=(const DataBlock& other){
		cout << "Copy assignment operator..." << "Size:" << other.m_iSize <<endl;
		
		if(this != &other){
			delete[] m_pData;

			m_iSize = other.m_iSize;
			m_pData = new int[m_iSize];

			copy(other.m_pData, other.m_pData + m_iSize, m_pData);
		}

		return *this;
	}

	//Move Semantics:
	//Move Constructor
	DataBlock(DataBlock&& other) : m_pData(nullptr), m_iSize(0){
		cout << "Move Constructor... " << "Size:" << other.m_iSize << endl;

		m_pData = other.m_pData;
		m_iSize = other.m_iSize;
		other.m_pData = nullptr;
		other.m_iSize = 0;
	}

	//Move Assignment Operator
	const DataBlock& operator=(DataBlock&& other){
		cout << "Move Assignment Operator... " << "Size:" << other.m_iSize << endl;
		if(this != &other){
			delete[] m_pData;

			m_pData = other.m_pData;
			m_iSize = other.m_iSize;
			other.m_pData = nullptr;
			other.m_iSize = 0;
		}

		return *this;
	}

};

int main()
{
	vector<DataBlock> v;
	v.push_back(DataBlock(10));
	v.push_back(DataBlock(100));

	v.insert(v.begin() + 1, DataBlock(50));

	return 0;
}
