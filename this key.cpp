#include<iostream>
using namespace std;
class name {
	public:int x,y;
	void sum(int x, int y )
	{
//	this->x=x;
//	this->y=y;
	(*this).x=x;
	(*this).y=y;
	cout<<this<<endl;
	cout<<x+y<<endl;
	}
		};
		main()
		{
			name obj1,obj2;
			obj1.sum(10,20);
			cout<<obj1.x<<""<<obj2.y<<endl;
			obj2.sum(30,40);
			
		}
