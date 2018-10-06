#include<iostream>
using namespace std;

class person{
		private:
			int age;
			int pay;
		public:
			string name;
			person() // default constructor
			{
				name="Employee";
				age=20;
				pay=50000;
			}
			person(string name,int age,int pay)// parameterized constructor
			{
				this->name=name;
				this->age=age;
				this->pay=pay;
			}
			person(person &i)//Copy constructor
			{
				age=i.age;
				pay=i.pay;
				name=i.name;
			}

			void details()
			{
				cout<<"name : "<<name<<endl;
				cout<<"Age : "<<age<<endl;
				cout<<"Pay : "<<pay<<endl;
			}

		};


int main()
{
	
	person p1;
	person p2("Ajay",34,90292);
	person p3(p2);

	p1.details();
	p2.details();
	p3.details();

	
	return 0;

}


