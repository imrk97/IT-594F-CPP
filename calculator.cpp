#include <iostream>
using namespace std;
void sum(int ,int );
void takeaway(int ,int );
void product(int,int);
void divide(int,int);
int main(){
	int ch,a,b;
	cout<<"Enter two numbers";
	cout<<"\n1st number: ";
	cin>>a;
	cout<<"\n2nd number: ";
	cin>>b;
	
	cout<<"Choose one of the following option:: \n";
	cout<<"1. Summation\n";
	cout<<"2. Substraction\n";
	cout<<"3. Multipication\n";
	cout<<"4. Division\n";
	cout<<"5. Exit\n";
	cout<<"Enter your option:: ";
	cin>>ch;
	
		switch(ch){
			case 1: 
			sum(a,b);
			break;
			case 2:
			takeaway(a,b);
			break;
			case 3:
			product(a,b);
			break;
			case 4:
			divide(a,b);
			break;
			
		
						default:
			cout<<"Choose Correct option";
			
			}
		}
	
void sum(int a,int b){
	cout<<a+b;
	}
void divide(int a,int b){
	cout<<a/b;
	}
void product(int a, int b){
	cout<<a*b;
	}
void takeaway(int a,int b){
	cout<<a-b;
	}

