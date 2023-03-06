/*
Imagine that you are creating a class for a Novel in C++. Write a constructor that
initializes the Novel class’s attributes title and author name, Cost (use initializer list).
Write a destructor that prints a message when the Novel object is destroyed.
*/
#include <iostream>
#include <string>
using namespace std;
class Novel {
string title;
string author;
float cost;

public:

Novel(string title, string author, float cost){
        this->title=title;
        this->author=author;
        this->cost=cost;    
} 
void display() const {
cout << "---------------NOVEL DETAILS--------------"<<endl;
cout << "Novel Title :"<<title<< endl;
cout << "Author Name :"<<author<<endl;
cout << "Novel Cost :"<<cost<< endl;
}

~Novel() {
    cout << "Novel object has been destroyed\n";
}

};
int main(){
Novel novel1("HARRY POTTER","JK ROWLING",25.90);
novel1.display();
}
