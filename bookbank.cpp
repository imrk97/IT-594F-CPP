#include <iostream>
using namespace std;
union bookbank{
	char name[50],author[100],pub[100]; 
	};
int main(){
	union bookbank arr[50];
	int num;
	cout<<"\n\nHow many books you want to store:: ";
	cin>>num;
	for(int i=0;i<num;i++){
		cout<<"\nEnter the information of Book No. "<<i+1;
		cout<<"\nEnter Book Name:: ";
		cin>>arr[i].name;
		cout<<"\nEnter The Author Name:: ";
		cin>>arr[i].author;
		cout<<"\nEnter Publication date:: ";
		cin>>arr[i].pub;
		}
	cout<<"\nEntered Books are:: ";
	for(int i=0;i<num;i++){
		
		cout<<"\nEnter Book Name:: "<<arr[i].name;
		
		cout<<"\nEnter The Author Name:: "<<arr[i].author;
		
		cout<<"\nEnter Publication date:: "<<arr[i].pub;
		
		}
	}
