//  #1A Theatre Square: math	
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 16/07/22.
//
 
#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int m,n,a;
    long long l,b;
    cin>>m>>n>>a;
    
    l = m%a?m/a +1: m/a;
    b = n%a?n/a +1: n/a;
    cout<<l*b<<endl;
    
    return 0;
}
