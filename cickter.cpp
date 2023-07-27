#include <iostream>
using namespace std;

class Area
{
public:
      void displayc1(int l, int b)
    {
    	cout<<"**********************"<<endl;
    	cout<<"FIND AREA OF RECTANGLE "<<endl;
        cout<<"**********************"<<endl;
        cout<<"ENTER THE LENGTH"<<endl;
        cin>>l;
        cout<<"ENTER THE BREADTH"<<endl;
        cin>>b;
        cout<<"-----------------"<<endl;
        cout<<"RECTANGLE IS :"<<l*b<<endl;
        cout<<"_________________"<<endl;
        cout<<"_________________"<<endl;
    }

    void displayc2(int s)
    {
    	cout<<"**********************"<<endl;
    	cout<<"FIND AREA OF SQUARE "<<endl;
        cout<<"**********************"<<endl;
    	cout<<"ENETR THE SIDE "<<endl;
    	cin>>s;
    	cout<<"-----------------"<<endl;
        cout << s*s << endl;
    }
};

int main()
{
    Area obj;
    obj.displayc1(10,20);
    obj.displayc2(10);
    return 0;
}                                 