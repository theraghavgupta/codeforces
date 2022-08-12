//  318A Even Odds: math
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 17/07/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    long long n,k;
    cin>>n>>k;
    
    if(k<=(n+1)/2)cout<<(2*k-1);
    else{
        (n%2==0)?cout<<(2*k-n):cout<<(2*k-n-1);
    }
    cout<<endl;
    return 0;
}
