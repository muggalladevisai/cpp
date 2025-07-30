#include<iostream>
using namespace std;
class name{
	int x,y;
	public:name()
	{
		x=10;
		y=20;
	}
	friend void sum(int ,name);
};
main()
{
	name obj;
	sum(5,obj);
}
void sum(int a,name obj1)
{
	cout<<a+obj1.x<<endl;
}
