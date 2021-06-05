#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    const int SIZE=20;
    char first_name[SIZE];
    char last_name[SIZE];
    char* name;

    cout<<"Enter your first name:";
    cin.getline(first_name,SIZE);
    cout<<"Enter your last name:";
    cin.get(last_name,SIZE).get();
    name=new char[strlen(first_name)+strlen(last_name)+2];
    
    strcpy(name,first_name);
    



    cout<<"Here's the information in a single string: "<<name<<endl;
    return 0;
}