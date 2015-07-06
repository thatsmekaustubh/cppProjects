#include <iostream>
using namespace std;

class parentClass {
	public:
	int var1,var2,sum;	
	parentClass() {
		var1=10;
		var2=20;
		sum=0;
	}
	void addFunction() {
		sum=var1+var2;
	}
	~parentClass() {
		var1=0;
		var2=0;
		sum=0;
	}
};

class childClass: public parentClass{
	public:
	void display() {
		cout<<"Addition is : "<<sum<<"\n";
	}
};

int main() {
	childClass obj1;
	obj1.addFunction();
	obj1.display();
	return 0;
}
