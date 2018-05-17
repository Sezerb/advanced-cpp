#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream outFile;

	outFile.open("deneme.txt");

	if(outFile.is_open())
	{
		for(int i=0; i<5; i++)
		{
			outFile << "This is line: " << i << endl;
		}

		outFile.close();
	}

	return 0;
}