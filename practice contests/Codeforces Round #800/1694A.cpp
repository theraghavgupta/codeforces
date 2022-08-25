//  1694A Creep: greedy, implementation
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 25/08/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        string ans = "";

        while(a>0&&b>0){
            ans = "10"+ans;
            a--,b--;
        }
        while(a>0)ans += '0', a--;
        while(b>0)ans += '1',b--;

        cout<<ans<<endl;
    }
    return 0;
}
