#include<iostream>
using namespace std;

class weeding
{ 
       private:
	   string eventname;
	   string name;
	   int numberofguests;
       int numberofminutes;
       int totalfoodcost;
       int perpersoncost;
       int totalcost;
       int deposit;
       
       public:
        void getevent()
        {
        	cout<<"ENTER THE NAME OF EVENT :"<<endl;
            cin>>eventname;
        	cout<<"ENTER THE FIRST NAME AND LAST NAME :"<<endl;
        	cin>>name;
        	cout<<"ENTER THE NUMBER OF GUEST :"<<endl;
        	cin>>numberofguests;
        	cout<<"ENTER THE  NUMBER OF MINUTES :"<<endl;
        	cin>>numberofminutes;
        	cout<<"DEPOSIT"<<endl;
        	cin>>deposit;
		}
	    void price()
        {
        double costperhour = 18.50;
        double costperminute = 0.40;
        double costofdinner = 20.70;

        double cost1 = (numberofminutes / 60) * costperhour;
        double cost2 = (numberofminutes % 60) * costperminute;
        totalcost = cost1 + cost2;

        totalfoodcost = numberofguests * costofdinner;
        perpersoncost = totalfoodcost / numberofguests;

        deposit = totalcost * 0.25;
    }
		void display()
		{
	     cout<<"-----------EVENT DETAILS----------"<<endl;
	     cout<<"----------------------------------"<<endl;
	     cout<<"EVENT NAME :"<<eventname<<endl;
	     cout<<"ENTER THE FIRST NAME AND LAST NAME :"<<name<<endl;
	     cout<<"NUMBER OF GUEST :"<<numberofguests<<endl;
	     cout<<"NUMBER OF MINUTES :"<<numberofminutes<<endl;
	     cout<<"TOTAL FOOD RS: "<<totalfoodcost<<endl;
	     cout<<"PER PERSON FOOD COST :"<<perpersoncost<<endl;
	     cout<<"TOTAL EVENT COST :"<<totalcost<<endl;
         cout<<"DEPOSIT"<<deposit<<endl;    
		}
	
};
int main()
{
	weeding obj;
	obj.price();
	obj.getevent();
	obj.display();
	
	
	return 0;
}