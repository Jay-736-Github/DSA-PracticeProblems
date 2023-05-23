#include<iostream>
using namespace std;
int main(){
    char ch ;
    cout<< "Enter a character ch "<< endl;
    cin >> ch ;
    if(ch>='a' && ch<='z')
    {
        cout<<"The entered character is a lower case " <<endl;

    }
else if (ch>='A' && ch<='Z')
{
    cout<< "The entered character is a upper case " << endl;


}
else {
    cout<<"The entered character is numeric"<<endl;

}


return 0;
}