#include<iostream>

using namespace std;

class student
{
private:
	int marks;
public:
	string name;
	int age;
	int grade;

	student()// default argument
	{

	}
	student(string n,int a=10,int m=100,int g=5 )
	{
		name=n;
		age=a;
		marks=m;
		grade=g;
	}

	void details();
};



void student::details()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Grade : "<<grade<<endl;
	cout<<"Marks : "<<marks<<endl;
}

int main()
{
	student s0;

	student s1("Rakesh");
	student s2("Pinky",9,89);
	student s3("Ajay",12,90,6);

	s0.details();
	cout<<endl;
	s1.details();
	cout<<endl;
	s2.details();
	cout<<endl;
	s3.details();
	cout<<endl;

return 0;
}


