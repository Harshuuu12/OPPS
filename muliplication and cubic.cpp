#include<iostream>
using namespace std;
class demo
{
     public:
	     int a,b;	


};
int main()
{
	demo d;
	cout<<"ENTER THE VALUE OF A"<<endl;
	cin>>d.a;
	cout<<"ENTER THE VALUE OF B"<<endl;
	cin>>d.b;
	
	cout<<"MULTIPLICATION IS :"<<d.a*d.b<<endl;
	cout<<"CUBIC IS :"<<(d.a*d.b)*(d.a*d.b)<<endl;
	return 0;
}