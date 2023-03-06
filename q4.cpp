/*
Create a C++ Program to implement Mini Order Booking System.
? Create Customer class with member functions for creating and updating customer
accounts.
? create a MenuItem class with a constructor that takes parameters for the item name,
description, and price, and a destructor that frees memory used by the MenuItem
object.
? After the initial invocation of the constructor, prompt the user for input, and
in the event that the input value is 9, the program will display a distinct menu
item.
*/
#include<iostream>
#include<string>

using namespace std;

class customer{
    string name;
    int age;

public:
    string getName()
    {
        return name;
    }

    void setName(string name)
    {
        this->name = name;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int age)
    {
        this->age = age;
    }

    customer(string name,int age){
        this->name=name;
        this->age=age;
    }

    void display(){
        cout<<"CUSTOMER NAME::"<<name<<endl;
        cout<<"CUSTOMER AGE::"<<age<<endl;
    }
};

class menu{
    string description;
    string dishname;
    int price;

public:
    string getDescription()
    {
        return description;
    }

    void setDescription(string description)
    {
        this->description = description;
    }

    string getName()
    {
        return dishname;
    }

    void setName(string dishname)
    {
        this-> dishname = dishname;
    }

    int getPrice()
    {
        return price;
    }

    void setPrice(int price)
    {
        this-> price = price;
    }

    menu(string dishname, string description, int price){
        this->description=description;
        this->price=price;
        this->dishname=dishname;
    }

    void displaymenu(){
         cout<<"DESCRIPTION::"<<description<<endl;
        cout<<"DISH NAME::"<<dishname<<endl;
        cout<<"PRICE::"<<price<<endl;
    }
    void specialmenu(){
        cout<<"INDIAN"<<endl;
        
    }
    ~menu(){
          cout<<"FREE MEMORY TO DESTROY:"<<endl;
            cout<<"FREE MEMORY TO DESTROY:"<<endl;
    }
};

int main(){
    int age,price,option;
    string name,dishname,description;
    cout<<"ENTER NAME:";
    cin>>name;
    cout<<"ENTER AGE:";
    cin>>age;
    customer detail(name,age);
    cout<<"ENTER DISH NAME:";
    cin>>dishname;
    cout<<"ENTER DISH PRICE:";
    cin>>price;
    cout<<"ENTER DISH DESCRIPTION:";
    cin>>description;
    menu details(dishname,description,price);
    cout<<"IF YOU WANT TO DISPLAY SPECIAL MENU PRESS 9"<<endl;
    cin>>option;
    if(option==9){
        cout<<"WHAT TYPE OF DISH WOULD YOU LIKE TO EAT:";
        cin>>dishname;
        cout<<"WHAT IS THE PRICE OF THE DISH:";
        cin>>price;
        description="Indian";
        details.setDescription(description);
        details.setPrice(price);
        details.setName(dishname);
        details.displaymenu();
    }
    else{
        return 0;
    }
}
