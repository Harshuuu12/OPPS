#include<iostream>
using namespace std;
class lecture
{
	private:
	string name;
    string subject;
    string course;
    int number;
    public:lecture(string name,string subject,string course)
    {
    	name=name;
    	subject=subject;
    	course=course;
    	number=number;
	}
    void display()
    {
    	cout<<"NAME OF LECTURE IS :"<<name<<endl;
    	cout<<"SUBJECT :"<<subject<<endl;
		cout<<"COURSE"<<course<<endl;
		cout<<"NUMBER OF LECTURE "<<number<<endl; 
    	cout<<"LECTURE DETAILS "<<endl;
	}
	
	
};
int main()
{
	lecture obj("harsh","bhvbehvbeh","hbghabjb");
	obj.display();
	return 0;
}