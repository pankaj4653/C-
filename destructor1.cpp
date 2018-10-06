#include<iostream>

using namespace std;



class alpha
{
public:	
	alpha()
	{
		
		cout<<"Constructor Called"<<endl;
	}

	~alpha()
	{
		cout<<"Destructor Called"<<endl;
		
	}
};

int main()
{
	cout<<"Enter main"<<endl;

	alpha a1,a2,a3,a4;
	{
		cout<<"Enter block1"<<endl;
		alpha a5;
	}

	{
		cout<<"Enter block2"<<endl;
		alpha a6;

	}

	cout<<"RE Enter Main"<<endl;

	return 0;
}