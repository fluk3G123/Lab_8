#include <iostream>
#include <string>
#include<sstream>

using namespace std;

int main(){
    string name,movie,day,qoute;
    int id,gear = id-12000000;
    string x=to_string(gear);
    

    cout<<"Fahsai: Sawadee ka...Can you tell me your name?";
    cin>>name;
    cout<<endl<<"Fahsai: " <<name<<"is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?";
    cin>>id;
    cout<<"\nFahsai: I think you may be GEAR"<<gear<< "I have a free movie ticket for you.";
    cout<<"Fahsai: Let's go to the cinema together!!!\nFahsai: What movie do you want to watch?\n";
    cin>>movie;
    cout<<"\nFahsai: So....which day are you free to go with me?";
    cin>>day;
    cout<<endl<<day<<"....that is OK!!! I'm looking forward to watching"<<movie<<"with you.\n";
    cin>>qoute;
    cout<<"555+ see you"<<day<<". Bye Bye \(^ ^)/";


}
