#include <iostream>
using namespace std;

class parentClass{
	public:
	int mulFunction(int var1,int var2) {
		return var1*var2;
	}
};

class childClass: public parentClass{
	public:
	int mulFunction(int var1,int var2) {
		return var1*var2;
	}
	int addFunction(int var1,int var2) {
		return var1+var2;
	}
	double addFunction(double var1,double var2) {
		return var1+var2;
	}
	int addFunction(int var1,int var2,int var3) {
		return var1+var2+var3;
	}
	double addFunction(double var1,double var2,double var3) {
		return var1+var2+var3;
	}
};

int main() {
	parentClass obj;
	childClass obj1;
	cout<<"Multiplication: "<<obj.mulFunction(10,20)<<"\n";
	cout<<"Multiplication: "<<obj1.mulFunction(10,20)<<"\n";
	cout<<"Addition: "<<obj1.addFunction(10,20)<<"\n";
	cout<<"Addition: "<<obj1.addFunction(10.1,20.1)<<"\n";
	cout<<"Addition: "<<obj1.addFunction(10,20,30)<<"\n";
	cout<<"Addition: "<<obj1.addFunction(10.1,20.1,30.1)<<"\n";
	return 0;
}
