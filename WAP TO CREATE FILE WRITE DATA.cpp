#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	char a[40]="SAI";
	ofstream myfile("new.txt");

	myfile<<a;
	myfile.close();
	return 0;
	}

