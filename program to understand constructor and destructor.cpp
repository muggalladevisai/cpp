#include<iostream>
using namespace std;
class name{
	int x;
	public:name()
	{
		cout<<"default constructor called"<<endl;
	}
	name(int a){
	x=a;
		cout<<"parameterized constructor called"<<endl;
	}
	~name(){
		cout<<"destructor called"<<endl;
	}
};
int main()
{
	name obj,obj1(20);
}
