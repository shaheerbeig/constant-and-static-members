/*
You are a software engineer at an event management company and you are tasked
with creating an Event management system in C++. The system should include an event
class that contains basic information about each event, including the event&#39;s name, event
ID, date, time, venue, and category. You need to ensure that the total number of events in
the system does not exceed a certain maximum limit, and that this limit cannot be
changed once the program is running. The program should use a constructor to initialize
the event object with the event&#39;s name, event ID, date, time, venue, and category, and a
destructor to clean up any resources used by the event object.
*/
#include<iostream>
#include<string>
using namespace std;
class Event{
string name,venue,time,date,category;
int event_ID;
static int totalevents;
const int max_events;

    public:
        Event(string name, int event_ID, string venue, string time, string date,string category): max_events(1){
        this -> event_ID = event_ID;
        this -> name = name;
        this -> venue = venue;
        this -> time = time;
        this -> date = date;
        this -> category = category;
        }
static void increment(){
    totalevents++;
}
void display(){
    
        if(totalevents > max_events){
        
        cout << "Error"<<endl;
    }
        else {
            cout<<"----------------------------EVENT DETAILS--------------------------"<<endl;
        cout << "Event Name : " << name << endl;
        cout << "Event ID : " << event_ID << endl;
        cout << "Event Venue : " << venue << endl;
        cout << "Event Time : " << time << endl;
        cout << "Event Date : " << date << endl;
        cout << "Event Category : " << category << endl;
        cout << "Number of Events : " << totalevents << endl;
        cout << "Maximum Events : " << max_events << endl;
        }
    }
    ~Event(){
        cout << "Event Object Destroyed\n";
    }
};

int Event::totalevents=0;

int main(){
Event e1("PROCOM",224321,"NUCES KARACHI","07:00 AM","10/03/2023","OLYMPIAD");
Event::increment();
e1.display();
}

