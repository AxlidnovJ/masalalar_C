#include <iostream>
#include <list>
#include <time.h>

using namespace std;

int main(){
	
	srand(time(0));
	
	list <string> list;

	
	int n;
	cout<<"n=";
	cin>>n;
	

		
	for(int i=1; i<=n; i++){
		string name;
		cout<<"Name = "; cin>>name;
		list.push_back(name);
	}
	
	cout<<"\nKimni qidirmoqchisiz?\n";
	string find;
	cin>>find;
	
	for(auto it=list.begin(); it!=list.end(); it++){
		if(*it==find){
			cout<<"Qidirgan malumotingiz topildi. ";
			cout<<*it<<"\n";
		}
	}

	
	
}