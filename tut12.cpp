#include<iostream>
using namespace std;
int main(){
    int a= 3;
    int*b = &a;
    b=&a;

    cout<<"The address of a is " <<&a<<endl;
    cout<<"The address of a is " <<b<<endl;
    cout<<"The value at address b is "<<*b<<endl;
    // pointer to pointer concept 
    // This is a pointer that stores the address of another pointer itself 
    

return 0;
}