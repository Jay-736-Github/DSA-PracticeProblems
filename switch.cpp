#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    char op;

    cout<< "Enter the value of a" << endl;
    cin>>a;
    cout<< "Enter the value of b" << endl;
    cin>>b;
    cout<< "Enter the operation needed to be performed" << endl;
    cin>>op;
     
    switch(op)
    {
        case '+': cout<< (a+b) << endl;
        break;
        case '-': cout<< (a-b) << endl;
        break;
        case '*': cout<< (a*b) << endl;
        break;
        case '%': cout<< (a%b) << endl;
        break;
        case '/': cout<< (a/b) << endl;
        break;
        default : cout<< "Please enter a valid operation " << endl;
        break;
    }

return 0;
}