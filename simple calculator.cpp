#include<iostream>
#include<string>
using namespace std;
class calculator {
	public:
		int a,b;
		char ch;

};
int main() {
	calculator c;
	c.a;
	c.b;
	cout<<"ENTER THE OPERATOR"<<endl;
	cout<<"------------------"<<endl;
	cin>>c.ch;

	switch(c.ch) {
		case '+':
			cout<<"ENTER THE VALUE OF A"<<endl;
			cin>>c.a;
			cout<<"ENTER THE VALUE OF B"<<endl;
			cin>>c.b;
			cout<<"ADDTION IS :"<<c.a+c.b<<endl;
			break;
		case '-':
			cout<<"ENTER THE VALUE OF A"<<endl;
			cin>>c.a;
			cout<<"ENTER THE VALUE OF B"<<endl;
			cin>>c.b;
			cout<<"SUNSTRACTION IS :"<<c.a-c.b<<endl;
			break;
		case '*':
			cout<<"ENTER THE VALUE OF A"<<endl;
			cin>>c.a;
			cout<<"ENTER THE VALUE OF B"<<endl;
			cin>>c.b;
			cout<<"MULTIPLICATION IS :"<<c.a*c.b<<endl;
			break;
		case '/':
			cout<<"ENTER THE VALUE OF A"<<endl;
			cin>>c.a;
			cout<<"ENTER THE VALUE OF B"<<endl;
			cin>>c.b;
			cout<<"DIVSION IS :"<<c.a/c.b<<endl;
			break;
		case '%':
			cout<<"ENTER THE VALUE OF A"<<endl;
			cin>>c.a;
			cout<<"ENTER THE VALUE OF B"<<endl;
			cin>>c.b;
			cout<<"MODULO IS :"<<c.a%c.b<<endl;
			break;
		default:
			cout<<"ENTER THE OPERATOR(+,_,*,/)"<<endl;
			break;
	}
}