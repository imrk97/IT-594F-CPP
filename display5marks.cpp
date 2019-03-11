#include <iostream>
using namespace std;

void display(int a[],int n){
	for(int j=0;j<n;j++){
		cout<<"\t"<<a[j];
		}
	}

int main(){
	cout<<"Enter the marks of 5 students:: ";
	
	int a[5];
	for(int i=0;i<5;i++){
		cout<<"\n\nThe marks of the "<<i+1<<" -th student:: ";
		cin>>a[i];
		}
	display(a,5);
	}
