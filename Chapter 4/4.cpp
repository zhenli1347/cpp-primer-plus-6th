#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first_name;
    string last_name;

    cout<<"Enter your first name:";
    getline(cin,first_name);
    cout<<"Enter your last_name:";
    getline(cin,last_name);

    string single_string=last_name+", "+first_name;
    cout<<"Here's the information in a single string: "<<single_string<<endl;
    return 0;
}