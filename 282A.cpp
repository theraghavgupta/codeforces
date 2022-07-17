//  282A Bit++: implementation	
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 17/07/22.
//

#include <iostream>
#include <strings.h>
using namespace std;

int main(int argc, const char * argv[]) {
    long long n;
    cin>>n;
    int x=0;
    for(int i=0;i<n;i++){
        string operation;
        cin>>operation;
        if(operation[1]=='-')x--;
        else x++;
    }
    cout<<x<<endl;
    return 0;
}
