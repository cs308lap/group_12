#include <iostream>
#include "functions.h"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    cout<<"This is master"<<endl;
    int x=56;
    int y=98;
    cout<<"GCD of 56 & 98: "<<gcd(x,y)<<endl;
    return 0;
}
