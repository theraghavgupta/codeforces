//  50A Domino piling: greedy, math
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 17/07/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int m,n;
    cin>>m>>n;
    int ans=0;
    ans = ((m*n)%2==0)?(m*n)/2:(m*n-1)/2;
    
    cout<<ans<<endl;
    
    return 0;
}
