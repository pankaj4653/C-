#include<iostream>
using namespace std;
 
//base class
class Device{
 
public:
	Device(){cout<<"Constructor: Device\n";}
	~Device(){cout<<"Destructor : Device\n";}
};
 
//derived class
class Mobile:public Device{
 
public:
 
	Mobile(){cout<<"Constructor: Mobile\n";}
	~Mobile(){cout<<"Destructor : Mobile\n";}
};
 
//derived class
class Android:public Mobile{
 
public:
 
	Android(){cout<<"Constructor: Android\n";}
	~Android(){cout<<"Destructor : Android\n";}
};
 
//--------------------TEST--------------------------------------
 
int main()
{
	Android _android; // create the object that will call required constructors	
 
	return 0;
}