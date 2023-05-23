#include<iostream>
using namespace std;

int sum(int a , int b )
{
    int c = a+b;
    return c;
}

// void swapPointer(int* a , int* b){
//     int temp = *a;
//     *a=*b;
//     *b=temp;
  
// }
// int main(){
//     int a = 4 , b = 5 ;
   
//     swapPointer(&a, &b);

//      cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

//     cout<<"The sum of 4 and 5 is " <<sum(a,b)<<endl;

// return 0;
// }


void swapReferenceVar(int &a , int &b){
    int temp = a;
    a=b;
    b=temp;
  
}
int main(){
    int a = 4 , b = 5 ;
    cout<<"The value of a is "<<a<<" and The value of b is "<<b<<endl;

   
    swapReferenceVar(a, b);

    cout<<"After swapping the value of a is "<<a<<" and the value of b is "<<b<<endl;

    cout<<"The sum of 4 and 5 is " <<sum(a,b)<<endl;

return 0;
}