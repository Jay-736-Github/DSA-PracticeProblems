#include<iostream>
#include<math.h>
using namespace std ;
int main(){
    int ans = 0;
    int n = 0;
    cin>> n;
    
while(n!=0){
    int digit = n % 10;
    
     ans = ((ans*10)+ digit);
    n = n/10;

}
  cout << ans << endl;

}