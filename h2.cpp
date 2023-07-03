#include<iostream>
#include<string.h>
using namespace std;
class animal{
	public :
	char name[100];
	int age;
	void set_value()
	{
		cout<<"enter name = ";
		cin>>name;
		cout<<"enter age = ";
		cin>>age;
	}
};
class zebra : public animal
{
	public :
	char place[100];	
	void show()
	{
		cout<<"enter place = ";
		cin>>place;
	}
};
class dolhpin : public animal
{
	public :
	char food[100];
    void info()
		{
			cout<<"enter food = ";
			cin>>food;
		}
};
int main()
{
	zebra o1;
	o1.set_value();
	o1.show();
	return 0;
}