#include <iostream>
#include<string.h>
using namespace std;

class Mother{
public:
	Mother(){};
	void display(){cout << "hello im the mother!"<< endl;};	
};

class Daughter : public Mother{
public:
	Daughter(){};
	void display(){cout << "hii im daugther!"<< endl;};	
};

int main()
{	
	Mother mo;
	Daughter dau;
	mo.display();
	dau.display();

	return 0;
}