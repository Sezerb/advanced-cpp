#include <iostream>
#include <fstream>

using namespace std;

int main()
{

	ifstream inFile;

	//string inFileName = "deneme.txt";
	const char* inFileName = "deneme.txt";
	
	inFile.open(inFileName);

	if(inFile.is_open())
	{
		string strLine;
		while(!inFile.eof())
		{
			getline(inFile, strLine);
			cout << strLine << endl;
		}
		inFile.close();
	}
	else
	{
		cout << "Cannot open file: " << inFileName << endl;
	}

	return 0;
}