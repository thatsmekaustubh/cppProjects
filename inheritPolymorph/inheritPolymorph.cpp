#include <iostream>
using namespace std;

class grandParentClass{
	protected:
	int var1, var2;
	public:
	grandParentClass() {
		var1=0;
		var2=0;
		cout<<"Granpa says hi!";
	}
	void input() {
		var1=10;
		var2=20;
	}
};

class parentClass: public grandParentClass{
	protected:
	int sum;
	public:
	parentClass() {
		sum=0;
		cout<<"\nPa says hi!";
	}
	void add() {
		sum=var1+var2;
	}
};

class childClass: public parentClass{
	int avg;
	public:
	childClass() {
		avg=0;
		cout<<"\nYou say hi!";
	}
	void average() {
		avg=sum/2;
	}
	void display() {
		cout<<"Average is: "<<avg;
	}
};

int main() {
	childClass obj;
	obj.input();
	obj.add();
	obj.average();
	obj.display();
	return 0;
}
