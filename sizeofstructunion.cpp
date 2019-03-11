#include <iostream>
using namespace std;
struct Employee1
	  {
			 int Id;
			 char Name[25];
			 long Salary;
	  };

	  union Employee2
	  {
			 int Id;
			 char Name[25];
			 long Salary;
	  };

int main(){
	Employee1 ob1;
	Employee2 ob2;
	int size1=sizeof(ob1);
	int size2=sizeof(ob2);
	cout<<"\n\nThe size of structure is "<<size1;
	cout<<"\n\nThe size of union is "<<size2;
	}
