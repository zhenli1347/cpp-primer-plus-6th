#include<iostream>
#include<string>
using namespace std;
struct Pizza{
    string coperation;
    double diameter;
    double weight;
};
int 
main()
{
    struct Pizza pisa;
    cout<<"Enter pizza's coperation:";
    getline(cin,pisa.coperation);
    cout<<"Enter pizza's diameter";
    cin>>pisa.diameter;
    cout<<"Enter pizza's weight: ";
    cin>>pisa.weight;

    cout<<"Pizza's coperation: "<<pisa.coperation<<endl;
    cout<<"Pizza's diameter: "<<pisa.diameter<<endl;
    cout<<"Pizza's weight: "<<pisa.weight<<endl;
    
    return 0;
}