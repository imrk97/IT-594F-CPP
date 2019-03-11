#include <iostream>
using namespace std;
struct complexnumber{
	double real;
	double imaginary;
};
	
	
int main(){
	struct complexnumber num1,num2,sum;
	cout<<"\n Enter the First imaginary number:: ";
	cout<<"\n\n Real Part:: ";
	cin>>num1.real;
	cout<<"\n Imaginary part:: ";
	cin>>num1.imaginary;
	cout<<"\n\n\n Enter the second imaginary number:: ";
	cout<<"\n\n Real Part:: ";
	cin>>num2.real;
	cout<<"\n Imaginary part:: ";
	cin>>num2.imaginary;
	sum.real=num1.real +num2.real;
	sum.imaginary= num1.imaginary+num2.imaginary;
	
	if(sum.imaginary<0){
		double a=-sum.imaginary;
	cout<<"\n The sum of the two complex numbers is:: "<<sum.real<< " - "<<a<<"(i)" ;
	}
	else if(sum.imaginary==0){
		cout<<"\n The sum of the two complex numbers is:: "<<sum.real;
		}
	else{
		cout<<"\n The sum of the two complex numbers is:: "<<sum.real<< " + "<<sum.imaginary<<"(i)" ;
		}
}
