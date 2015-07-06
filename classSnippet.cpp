#include <iostream>
using namespace std;

class newClass {
	public:
	int var1,var2;	
	newClass() {
	}
	void newFunction() {

	}
	void display();
	~newClass() {
		var1=0;
		var2=0;
	}
};

void newClass::display() {

}

int main() {
	newClass obj1;
	obj1.newFunction();
	obj1.display();
	return 0;
}
