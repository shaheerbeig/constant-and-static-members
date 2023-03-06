/*
You are developing a car rental booking system in C++. The system should include a
class for car rental reservations that contains basic information about each reservation,
including the renter&#39;s name, reservation number, car model, rental start and end dates, and
rental rate. Write a program that uses a static member variable to keep track of the total
number of reservations in the system, and a const member variable to represent the
maximum number of reservations allowed in the system. The program should use a
constructor to initialize the reservation object with the renter&#39;s name, reservation number,
car model, rental start and end dates, and rental rate, and a destructor to clean up any
resources used by the reservation object.
*/
#include<iostream>
#include<string>

using namespace std;

class rental{
    string name;
    string number;
    string model;
    string startdate;
    string enddate;
    float rate;	
   const int max_reservation=5;
public:
    static int total;
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    string getNumber()
    {
        return number;
    }

    void setNumber(string number)
    {
        this->number = number;
    }

    string getModel()
    {
        return model;
    }

    void setModel(string model)
    {
        this->model = model;
    }

    string getStartdate()
    {
        return startdate;
    }

    void setStartdate(string startdate)
    {
        this->startdate = startdate;
    }

    string getEnddate()
    {
        return enddate;
    }

    void setEnddate(string enddate)
    {
        this->enddate = enddate;
    }

    float getRate()
    {
        return rate;
    }

    void setRate(float rate)
    {
        this->rate = rate;
    }
    rental(string na,string num,string mod,string start,string end ,float rat):name(na),number(num),model(mod),startdate(start),enddate(end),rate(rat){}
    
    static void increment(){
        total++;
    }

    void display(){
        if(total==max_reservation){
            cout<<"ERROR"<<endl;
        }
        else{
        cout<<"--------------------CUSTOMER DETAILS----------------------"<<endl;
        cout<<"NAME:"<<name<<endl;
        cout<<"NUMBER:"<<number<<endl;
        cout<<"RATE:"<<rate<<endl;
        cout<<"START DATE:"<<startdate<<endl;
        cout<<"END DATE:"<<enddate<<endl;
        cout<<"MODEL:"<<model<<endl;
        cout<<"-------------------------------------"<<endl;
    }
}
    ~rental(){
        cout<<"MEMORY DESTROYED SUCCESSFULLY"<<endl;
    }
};
int rental::total=0;
int main(){
    string name,number,model;
    string startdate,enddate,option,i;
    float rate;
    cout<<"ENTER CUSTOMER DETAILS:"<<endl;
    cout<<endl;
    cout<<"ENTER NAME:";
    cin>>name;
    cout<<"ENTER NUMBER:";
    cin>>number;
    cout<<"ENTER MODEL:";
    cin>>model;
    cout<<"ENTER START DATE:";
    cin>>startdate;
    cout<<"ENTER END DATE";
    cin>>enddate;
    cout<<"ENTER RATE:";
    cin>>rate;
    rental r1(name,number,model,startdate,enddate,rate);
r1.display();
}
