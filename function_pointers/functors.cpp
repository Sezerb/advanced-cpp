#include <iostream>
#include <vector>

using namespace std;


struct Worker{
	virtual bool operator()() = 0;
	virtual ~Worker(){};
};

struct Farmer : public Worker{
	virtual bool operator()(){
		cout << "Yaparim, tamam." << endl;
		return true; 
	}
};

struct Soldier : public Worker{
	virtual bool operator()(){
		cout << "Saldir, tamam." << endl;
		return true; 
	}
};

bool finishJobs(vector<Worker*> v){
	for(vector<Worker*>::iterator it = v.begin(); it!=v.end(); it++){
		(*(*it))();
	}

	return true;
}

int main(){

	vector<Worker*> v;
	Farmer f;
	Soldier s;

	v.push_back(&f);
	v.push_back(&s);
	
	finishJobs(v);

	return 0;
}