#include<iostream>
using namespace std;
int main(){
    int n ;
    int i = 2 ;
    cout<< " Enter a number n " << endl;
    cin >> n;
    while (i < n )
    {
        if (n % i == 0 ){
            cout << " Not a prime number " << endl;

        }   
                   
                    else{
                        cout << " prime number " << endl;
                        i = i+1;

                    }


    }

return 0;
}