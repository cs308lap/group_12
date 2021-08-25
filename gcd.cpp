#include "functions.h"
#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
	int ans;
	
    for(int i=1; i<=min(x,y);i++){
        if((x%i==0) && (y%i)==0){
            ans=i;
        }
    }

	return ans;
}