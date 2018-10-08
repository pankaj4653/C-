#include<iostream>
#include<stack>

using namespace std;
typedef long long int ll;

class A
{
public:
	void func()
	{
		cout<<"This is A"<<endl;
	}
};

class B:virtual public A
{

};

class C:public virtual A
{

};

class D:public B,public C
{

};

int main()
{
	D d;
	d.func();

	return 0;
}