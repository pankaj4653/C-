#include<iostream>

using namespace std;

class A
{
	private:
		int a;
	public:
		void func()
		{
			cout<<"This is class A"<<endl;

		}

};

class B:public A
{

public:
	void func()
	{
		cout<<"This is class B"<<endl;
	}

};

int main()
{
	B b1;

	b1.func();

	b1.A::func();

	A b2;

	b2.func();

	return 0;
}