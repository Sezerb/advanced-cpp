#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream inFile;

	const char* strFileName = "stats.txt";

	inFile.open(strFileName);

	if(!inFile.is_open()){
		return 1;
	}

	while(inFile){

		string strLine;
		int iNumOfChamp;

		getline(inFile, strLine, ':');
		inFile >> iNumOfChamp;
		inFile >> ws; //C++11: getting new line; especially white space.

		if(!inFile){
			break;
		}

		cout << strLine << " : " << iNumOfChamp << endl;
	}

	inFile.close();
}