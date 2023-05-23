#include<iostream>
using namespace std;
int main(){
// ARRAY EXAMPLES
    int marks[4] = {23,43,45,67};
    int mathmarks[5];
    marks[2]=455;

    mathmarks[1]=23;
    mathmarks[2]=34;
    mathmarks[3]=45;
    mathmarks[4]=43;
    mathmarks[5]=456;
    cout<<"These are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;
    cout<<mathmarks[4]<<endl;

    cout<<"These are marks"<<endl;

    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    
    int*p = marks;
    cout<<"The value of marks[o] is " <<*p<<endl;
    cout<<"The value of marks[1] is " <<*(p+1)<<endl;
    cout<<"The value of marks[2] is " <<*(p+2)<<endl;
    cout<<"The value of marks[3] is " <<*(p+3)<<endl;

    for (int i = 0; i < 4; i++)
    {
       cout<<"The values of marks "<<i<<" is" <<marks[i]<<endl;

    }
    


return 0;
}
