//  1719A Chip Game: games, math
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 16/08/22.
//
 
#include <iostream>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        if(n%2!=m%2)cout<<"Burenka"<<endl;
        else cout<<"Tonya"<<endl;
    }
    return 0;
}
