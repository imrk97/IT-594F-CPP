#include <iostream>
using namespace std;
int main(){
	//int a[100][100];
	int m,n;
	cout<<"\nEnter the numbers of row you want:: ";
	cin>>m;
	cout<<"\nEnter the number of columns you want:: ";
	cin>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		cout<<"The "<<i+1<<"-th row's \n";
		for(int j=0;j<n;j++){
			cout<<j+1<<"-th element :: ";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
	
	cout<<"!!!The array is::::    \n";
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"\t";
			
		}
		cout<<"\n";
	}


}
