//Function Overlaoding

#include<iostream>
using namespace std;


class demo
{
public :
void sfunc1(int a,int b)
	{
		cout<<"This function is taking two arguments "<<endl;
		cout<<"With (int) and (int) datatype"<<endl<<endl;
	}

int sfunc1(int a,double c)
	{
		cout<<"This function is taking two arguments "<<endl;
		cout<<"With (int) and (double) datatype"<<endl<<endl;

		return 0;
	}

void sfunc1(int a,float d,float f)
	{
		cout<<"This function is taking three arguments "<<endl;
		cout<<"With (int) and (float) and (float) datatype"<<endl<<endl;
	}

};



int main()
{
	demo d;
	d.sfunc1(2,3,6);
	d.sfunc1(3,6.56);
	d.sfunc1(3,3.4,8.9);
	return 0;
}


