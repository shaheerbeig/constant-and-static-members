/*
Create ATM class which could be used to represent various attributes in ATM, such
as the screen, keypad, cash dispenser, and card reader. Initialize these attributes using
Constructor. Write a destructor that prints a message when the ATM object is destroyed.
*/
#include<iostream>
#include<string>

using namespace std;

class ATM{
string screen,keypad,cash_dispenser;
int cash_reader;
public:
ATM(string screen,string keypad,string cash_dispenser,int cash_reader){
this->cash_dispenser=cash_dispenser;
this->screen=screen;
this->keypad=keypad;
this->cash_reader=cash_reader;
}
    string getscreenname(){
        return screen;
    }
    string getkeypad(){
        return keypad;
    }
    string getdispenser(){
        return cash_dispenser;
    }
    int getcash(){
        return cash_reader;
    }
    void setscreen(string screen){
        this->screen=screen;
    }
    void setkeypad(string keypad){
        this->keypad=keypad;
    }
    void setdispenser(){
        this->cash_dispenser=cash_dispenser;
    }
    void setcashr(int cash_reader){
        this->cash_reader=cash_reader;
    }
    
void display(){
    cout<<"Screen:"<<screen<<endl;
    cout<<"Keypad:"<<keypad<<endl;
    cout<<"Cash Dispenser:"<<cash_dispenser<<endl;
    cout<<"Cash Reader:"<<cash_reader<<endl;
}
~ATM(){
cout<<"OBJECT HAS BEEN DESTROYED"<<endl;
}

};
int main(){
string screen,keypad,cash_dispenser;
    int cash_reader;
        cout<<"ENTER SCREEN NAME:";
        cin>>screen;
        cout<<"ENTER KEYPAD:";
        cin>>keypad;
        cout<<"ENTER Cash Dispenser:";
        cin>>cash_dispenser;
        cout<<"ENTER CASH READER AMOUNT:";
        cin>>cash_reader;   
        ATM obj1(screen,keypad,cash_dispenser,cash_reader);
        obj1.display();
}
