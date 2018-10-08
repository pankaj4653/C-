#include<iostream>
#include<vector>
#include<stack>


using namespace std;
typedef long long int ll;


class A
{
public:
	int a;
	void func()
	{
		cout<<"This is func() in A"<<endl;
	}

};



class B
{
public:
	int a;
	void func()
	{
		cout<<"This is func() in B"<<endl;
	}
};

class C
{
public:
	int a;

	void func()
	{
		cout<<"This is func() in C"<<endl;
	}
};




class D:public A,public B,public C
{
public:
	int a;
	void func()
	{
		cout<<"This is func() in D"<<endl;
	}
};


int main()
{
	D d;
	d.a=10;
	d.A::a=20;

	cout<<d.A::a<<endl;

	cout<<d.a<<endl;

	d.func();
	d.B::func();

	d.C::func();
	

	d.A::func();
	return 0;
}


