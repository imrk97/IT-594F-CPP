#include <iostream>
using namespace std;
int main(){
	int a,b,c,g;
	cout<<"Enter 3 numbers: ";
	cout<<"1st number: ";
	cin>>a;
	cout<<"2nd number: ";
	cin>>b;
	cout<<"3rd number: ";
	cin>>c;
	if(a==b && b==c){
		cout<<" the numbers are equal";
		}
		else{
	g=(a>b&&a>c)?a:(b>c)?b:c;
	cout<< g<<" is the greatest.";
	 int  s=(a<b&& a<c)?a: (b<c)?b:c;
	cout<<s<<" is smallest.";
	if((a==g || c==g)&&(a==s||c==s)){
		cout<<b <<" is in the middle";
		}
	else if ((a==g|| b==g)&&(a==s||b==s)){
		cout<<c<< " is in the middle";
		}
		else if((c==g||b==g)&(c==s||b==s)){
			cout<<a<<" is the middle";
			}
}
	}
