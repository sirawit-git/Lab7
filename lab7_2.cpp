#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
        
    int numberid;
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    cin >> numberid;
    cin.ignore();
    do { numberid/=10;
    }
    while (numberid >=100);
       
    
    int Gear= numberid - 12;
    string movie;
    string day;
    cout << "Fahsai: I think you may be GEAR " << Gear<< ". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    cout << name << ": ";
    getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n";
    cout << name << ": ";
    getline(cin,day);
    cout << "Fahsai: "<< day <<"....that is OK!!! I'm looking forward to watching "<< movie <<" with you.\n";
    string e;
    cout << name << ": ";
    getline(cin,e);
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";
} 
    
        
        