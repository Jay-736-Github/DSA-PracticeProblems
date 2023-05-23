#include<iostream>
#include<iomanip>

using namespace std;

int main(){

    int a = 34;
    cout<<"The value of a was:"<<a<<endl;


    a = 45;
    cout<<"The value of a is :"<<a<<endl;

// constants in C++

    const int a = 45;
    cout<<" The value of a was:"<<a<<endl;
    int a = 6;
    cout<<"The value of a is :"<<a<<endl;
    
    // Manipulators in C++

    int a =3, b =467, c =9080;
    cout<<"The value of a is:"<<a<<endl;
    cout<<"The value of b is:"<<b<<endl;
    cout<<"The value of c is:"<<c<<endl;

    cout<<"The value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;


    



return 0;   





}