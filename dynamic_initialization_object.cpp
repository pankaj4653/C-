#include<iostream>
using namespace std;

class Laptop
{
	private:
		int ram;
	public:
		string comp;
		int price;

	Laptop(int r,string c,int p)
	{
		ram=r;
		comp=c;
		price=p;
	}

	void details()
	{
		cout<<"Name : "<<comp<<endl;
		cout<<"Ram : "<<ram<<endl;
		cout<<"Price :"<<price<<endl;
	}
};


int main()
{
	int ram,price;
	string name;
	cout<<"Enter Name, Ram and price of the laptop "<<endl;
	cin>>name>>ram>>price;

	Laptop *l1=new Laptop(ram,name,price);
	l1->details();




	return 0;
}