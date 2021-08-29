#include "functions.h"
#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
	if(x==0){
        return y;

    }
    if(y>x){
        return gcd(x,y%x);
    }
    return gcd(y,x%y);
}