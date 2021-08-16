#include "functions.h"

// function to calculate factorial of a number
int factorial(int n){

    // if a negative number is entered, the user is asked to re-enter a positive number
    if (n<0){
        int x;
        cout<<"enter a positive number:\n";
        cin>>x;
        return factorial(x);
    }

    if(n!=1){
	return(n * factorial(n-1)); //recursively calling the factorial function.
    }
    else return 1;
}
