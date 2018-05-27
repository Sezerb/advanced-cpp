#include <iostream>
#include <map>

using namespace std;

class PlateCode{
public:
	PlateCode(){};
	~PlateCode(){};
	map<string, int> initMap(){
		map<string, int> m;
		m["istanbul"] = 34;
		m["ankara"] = 6;
		m["canakkale"] = 17;

		return m;
	}
};

int main()
{

	PlateCode pc;
	string strCity;
	map<string, int> m;
	m = pc.initMap();

	m["adana"] = 1; //add a new item to map.
	m.insert(pair<string, int>("trabzon", 61)); //another way of adding an item.
	m.insert(make_pair("nigde", 51)); //another way of adding an item.
	cout << "Enter a city name in lower case" << endl;

	cin >> strCity;

	if(m.find(strCity) != m.end()){
		map<string, int>::iterator it;
		it = m.find(strCity);
		cout << "City:" << it->first << " PlateCode:" << it->second << endl;
		cout << "City:" << (*it).first << " PlateCode:" << (*it).second << endl;
	}
	else{
		string strYesNo;
		cout << "Cannot find city" << endl;
 	}

 	cout << "Final Map: " << endl;
 	for(map<string, int>::iterator it = m.begin(); it != m.end(); it++){
 		pair<string, int> p = *it;
 		cout << p.first << ": " << p.second << endl;
 	}	

}