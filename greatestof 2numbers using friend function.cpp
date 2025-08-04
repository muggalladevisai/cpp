#include<iostream>
using namespace std;
class name{
	int x,y;
	public:name()
	{
		x=10;
		y=20;
	}
	friend class name2;
	void sum()
	{
		cout<<x+y<<endl;
	}
	};
	class name2{
		public:
		void greatest(name obj)
		{
			if (obj.x > obj.y)
			cout << "Greatest: " << obj.x << endl;
		else
			cout << "Greatest: " << obj.y << endl;
	}
};
	main(){
	name obj1;
	obj1.sum();
	name2 obj2;
	obj2.greatest(obj1);
}
	
