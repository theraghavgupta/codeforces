//  122A Lucky Division: brute force, number theory
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 14/08/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int keys[] = {4,7,44,47,77,74,444,447,477,474};
    for(auto key:keys){
        if(n%key==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    while(n!=0){
        if(n%10==4||n%10==7){
            n = n/10;
        }else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}
