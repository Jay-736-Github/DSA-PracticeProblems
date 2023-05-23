#include<iostream>
using namespace std;
int main(){
float ferenheit , celsius ;
cout << "Enter temperature in ferenheit" << endl;
cin >>  celsius ;
ferenheit = (celsius * 9.0) / 5.0 + 32;
cout<<  "The temperature in celsius is "<< celsius << endl;
cout<< " After conversion the degree in ferenheit is "<< ferenheit << endl;


 

return 0;
}