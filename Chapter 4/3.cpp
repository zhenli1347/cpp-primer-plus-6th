#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    const int SIZE=20;
    char first_name[SIZE];
    char last_name[SIZE];
    char name[2*SIZE+2];

    cout<<"Enter your first name:";
    cin.getline(first_name,SIZE);
    cout<<"Enter your last name:";
    cin.get(last_name,SIZE).get();
    strcpy(name,first_name);
    name[strlen(first_name)]=',';
    name[strlen(first_name)+1]=' ';
    name[strlen(first_name)+2]='\0';
    strcat(name,last_name);



    cout<<"Here's the information in a single string: "<<name<<endl;
    return 0;
}