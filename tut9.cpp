#include<iostream>

using namespace std;

int main(){

    // cout<<"This is tutuorial 9"<<endl;

    int age;

    cout<<"Tell me your age"<<endl;

    cin>>age;

    if(age<18){

    // Switch control structure : if-else-if-else 

     cout<<"You cannot come to the party"<<endl;

    }

    else if (age == 18){
        
    cout<<"You are a kid and you will have a kid pass"<<endl;

    }

    if(age>18){
        
    cout<<"You are welcomed in the party with the full access"<<endl;

    }

    // Selection control strucutures : Switch case statements 
   
    //  /* constant-expression */:
    //     /* code */
    switch (age)
    {
    case 18:
    cout<<"You are 18"<<endl;
        break;
        
    case 22:
    cout<<"You are 22"<<endl;
     break;

    case 2:
    cout<<"You are 2"<<endl;
    break;
     
    default:
    cout<<"No special case"<<endl;
    break;

    }

    cout<<"Done with switch case"<<endl;
    
    return 0;



}