//  1715A Crossmarket: constructive algorithms, math 
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 20/08/22.
//
 
#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int ans = (n+m+min(n,m)-2);
        if(n==m&&n==1)ans = 0;
        cout<<ans<<endl;
    }
    return 0;
}
