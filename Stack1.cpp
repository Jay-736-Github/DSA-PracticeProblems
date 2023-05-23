#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;

s.push(2);
s.push(4);
s.push(6);
s.push(5);
cout<<"The size of stack is "<< s.size()<<endl;



s.pop();
cout<<"The top element is " << s.top() << endl;

if(s.empty()){
    cout<<"The stack is empty" << endl;
}
    else{
        cout<<"The stack is not empty"<< endl;

    }



return 0;
}
