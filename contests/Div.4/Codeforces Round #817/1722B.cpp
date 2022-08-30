//  1722B Colourblindness: implementation
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 30/08/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        for(int i=0;i<n;i++){
            if(a[i]=='G')a[i]='B';
            if(b[i]=='G')b[i]='B';
        }
        (a==b)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        
    }
    return 0;
}
