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

	
	student(string name,int,int,int);
	student(student &);

	void details();
};

student::student(string n,int a=10,int m=100,int g=5 )// constructor with default arguments
	{
		name=n;
		age=a;
		marks=m;
		grade=g;
	}

student::student(student &i)// copy constructor defination 
{
	marks=i.marks;
	name=i.name;
	age=i.age;
	grade=i.grade;

}



void student::details()
{
	cout<<"Name : "<<name<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Grade : "<<grade<<endl;
	cout<<"Marks : "<<marks<<endl;
}

int main()
{
	
	student s1("Rakesh");
	student s2(s1);
	

	
	s1.details();
	cout<<endl;
	s2.details();
	cout<<endl;
	

return 0;
}


