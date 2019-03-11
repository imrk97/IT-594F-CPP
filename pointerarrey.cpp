#include <iostream>
using namespace std;

int main(){
	int n;
	int* p;
	cout<<"\nEnter the number of elements you want:: ";
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++){
		cout<<"\nEnter the "<<i+1<<" -th element of the arrey: ";
		cin>>a[i];
		}
	cout<<"\nThe address of the elements of the arrey is:: ";
	for(int j=0;j<n;j++){
		cout<<"\nThe address of the "<<j+1<<" -th element "<<a[j]<<" is: "<<&a[j];
		}
		cout<<"\nThe address of the elements of the arrey using pointer is:: ";
		p=a;
	for(int k=0;k<n;k++){
		
		
		cout<<"\n the address of "<<k+1<<" -th element "<<*(p+k)<<" is "<<p+k;
		}
	}
