#include<iostream>
#include<vector>

using namespace std;



class student
{
	protected :
		int rollno;
		int age;
	public:
		string name;
		int grade;
	
	void getdetails()
	{
		cout<<"Enter name, rollno, age,grade"<<endl;
		cin>>name>>rollno>>age>>grade;
	}

	void putdetails()
	{
		cout<<"Name : "<<name<<endl;
		cout<<"Roll_no : "<<rollno<<endl;
		cout<<"Grade : "<<grade<<endl;
		cout<<"Age : "<<age<<endl;
	}

};


class marks:public student
{
public:
	int s1;
	int s2;
	void getmarks(int s1,int s2)
	{
		this->s1=s1;
		this->s2=s2;
	}
	void putmarks()
	{
		cout<<"S1 : "<<s1<<endl;
		cout<<"S2  : "<<s2<<endl;
	}

};


class result: public marks
{
private:
	int tot;
public:
	void total()
	{
		tot=s1+s2;
	}
	void display()
	{
		cout<<"Total : "<<tot<<endl;
	}
};

int main()
{
	result r;


	r.getdetails();
	r.putdetails();
	r.getmarks(78,90);
	r.putmarks();

	r.total();
	r.display();

	return 0;
}

