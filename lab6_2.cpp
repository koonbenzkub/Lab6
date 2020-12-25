#include<iostream>
#include<string>
using namespace std;

int main(){
    string name ,movie ,day ,text;
    int id ,gear;

    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! " << name << " is a really cool name.\nFahsai: I think you are an Engineering student. What is your student ID?\n" << name << ": ";
    cin >> id;
    gear = id/10000000-12;
    cout << "Fahsai: I think you may be GEAR " << gear << ". I have a free movie ticket for you.\nFahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n" << name << ": ";
    cin.ignore();
	getline(cin,movie);
    cout << "Fahsai: So....which day are you free to go with me?\n" << name << ": ";
    getline(cin,day);
    cout << "Fahsai: " << day << "....that is OK!!! I'm looking forward to watching " << movie << " with you.\n" << name << ": ";
    getline(cin,text);
    cout << "Fahsai: 555+ see you "<< day <<". Bye Bye \\(^ ^)/";
    
return 0;
}
