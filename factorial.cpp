#include "functions.h"

int factorial(int n){
	if(n<0){
		int x;
		cout<<"Please enter valid non-negative integer: ";
		cin>>x;
		return factorial(x);
	}
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
