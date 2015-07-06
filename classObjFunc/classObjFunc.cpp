#include <iostream>
using namespace std;

class newClass {
	public:
	int var1,var2,sum;	
	newClass() {
		var1=10;
		var2=20;
		sum=0;
	}
	void add() {
		sum=var1+var2;
	}
	void display();
	~newClass() {
		var1=0;
		var2=0;
	}
};

void newClass::display() {
	cout<<"Addition is: "<<sum<<"\n";
}

int main() {
	newClass obj1;
	obj1.add();
	obj1.display();
	obj1.var1=11;
	obj1.var2=12;
	obj1.add();
	obj1.display(); 
	return 0;
}

/*
Output:
Addition is: 30
Addition is: 23 

Manipulate this code at codepad.org : http://codepad.org/CW7hn6gU
*/
