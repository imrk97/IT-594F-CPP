#include <iostream>
using namespace std;
const int city=2;
const int week=7;
int main (){

	int temparature[city][week];
	cout<<"ENTER ALL TEMPARATURE FOR A WEEK OF THE FIRST CITY AND THEN THE SECOND CITY\n\n";
	for(int i=0;i<city;i++){
		for (int j=0;j<week;j++){
			cout<<"City "<<i+1<<",Day "<<j+1<<" : ";
			cin>>temparature[i][j];
		}
	}

	cout<<"\n\n Dispalying values: \n";
	for(int i=0;i<city;i++){
		for(int j=0;j<week;j++){
			cout<<"city "<<i+1<<", Day"<<j+1<<" = "<<temparature[i][j]<<"\n";
		}
	}

	return 0;
}

