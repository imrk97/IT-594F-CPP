#include <iostream>
using namespace std;
int main(){
	//int a[100][100];
	int m,n,o;
	cout<<"\nEnter the numbers of row you want:: ";
	cin>>m;
	cout<<"\nEnter the number of columns you want:: ";
	cin>>n;
	cout<<"\nEnter the number of depth you want::: ";
	cin>>o;
	int a[m][n][o];
	cout<<"\nEnter the elements\n";
	for(int i=0;i<m;i++){
	
		for(int j=0;j<n;j++){
			for(int k=0;k<o;k++){
				cin>>a[i][j][k];
			}
			cout<<"\n";
		
		}
		cout<<"\n";
	}
	
	cout<<"!!!The array is::::    \n";
	for(int i=0;i<m;i++){
		
		for(int j=0;j<n;j++){
			for(int k=0;k<o;k++){
				cout<<a[i][j][k]<<"\t";
			}
			cout<<"\n";
			
		}
		cout<<"\n";
	}
	}
