#include<iostream>
using namespace std;
int main()
{
    const int SIZE=20;
     char first_name[SIZE];
     char last_name[SIZE];
     char grade;
     int age;

    cout<<"What is your first name? ";
    cin.getline(first_name,SIZE);
    cout<<"What is your last name? ";
    cin.getline(last_name,SIZE);
    cout<<"What letter grade do you deserve? ";
    cin>>grade;
    cout<<"What is your age? ";
    cin>>age;

     cout<<"Name: "<<last_name<<", "<<first_name<<endl;
     cout<<"Grade: "<<char(grade+1)<<endl;
     cout<<"Age: "<<age<<endl;
    return 0;
}