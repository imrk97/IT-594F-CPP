#include <iostream>
using namespace std;
int main(){
	int a,x=0,temp=0,b;
	cout<<"Enter a number to find if the the number is divisible by 3!!!\n";
	cin>>a;
	b=a;
	while(a>0){
		x=a%10;
		temp=temp+x;
		a=a/10;
		}
if (temp%3==0){
	cout<<"the sum of the digits of "<<b<<"  is:  "<<temp;
	cout<<" \nso "<<b<<" is divisible by 3!!";
	}
}
