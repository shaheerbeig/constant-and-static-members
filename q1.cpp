/*
Q1: Imagine that you are creating Inventory system in C++. Write a class for a IMS that
uses private (Inventory name, IDEBIT_AMOUNT, ICREDIT_AMOUNT) and
public(DESC,STATUS) access modifiers to protect sensitive inventory information.
Demonstrate how the total account balance of IMS can only be accessed and modified
through public member functions. Use Constructor to set values.
*/
#include<iostream>
#include<string>

using namespace std;

class IMS{
    string inventory_name;
    float debit_amt;
    float credit_amt;

public:
    string desc;
    bool status;
    
    string getInventory_name()
    {
        return inventory_name;
    }

    void setInventory_name(string inventory_name)
    {
        this-> inventory_name = inventory_name;
    }

    float getDebit_amt()
    {
        return debit_amt;
    }

    void setDebit_amt(float debit_amt)
    {
        this-> debit_amt = debit_amt;
    }

    float getCredit_amt()
    {
        return credit_amt;
    }

    void setCredit_amt(float credit_amt)
    {
        this-> credit_amt = credit_amt;
    }

    IMS(float debit, float credit){
        debit_amt=debit;
        credit_amt=credit;
    }
    void diplay(){
        cout<<"TAKE INPUT OF CREDIT:"<<credit_amt<<endl;
        cout<<"TAKE INPUT OF DEBIT:"<<debit_amt<<endl;
    }
};

int main(){
    int option;
    float debit,credit;
    cout<<"ENTER DEBIT AMOUNT:";
    cin>>debit;
    cout<<"ENTER CREDIT AMOUNT:";
    cin>>credit;
    IMS details(debit,credit);
    cout<<"TOTAL ACCOUNT BALANCE:"<<debit-credit;
    cout<<endl;
    cout<<"CHOOSE YOUR OPTION 1-MODIFY 0-EXIT "<<endl;
    cin>>option;
    while(option!=0){
        cout<<"TAKE INPUT IN DEBIT VALUE:";
        cin>>debit;
        details.setDebit_amt(debit);
        cout<<"TAKE INPUT IN CREDIT VALUE:";
        cin>>credit;
        details.setCredit_amt(credit);
        cout<<"BALANCE:"<<details.getDebit_amt()-details.getCredit_amt()<<endl;
        cout<<"CHOOSE YOUR OPTION 1-MODIFY 0-EXIT "<<endl;
        cin>>option;
    }
}
