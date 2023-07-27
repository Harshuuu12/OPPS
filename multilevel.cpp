#include<iostream>
using namespace std;
class A
{
    public:
    	void A1()
    	{
    		cout<<"hello world"<<endl;
		}
};
class B:public A
{
    public:
    	void B1()
    	{
    		cout<<"hello world"<<endl;
		}
	
};class C:public B
{
    public:
    	void C1()
    	{
    		cout<<"hello world"<<endl;
		}
	
};
int main()
{
	class obj;
	obj c1;
	
	return 0;
}
