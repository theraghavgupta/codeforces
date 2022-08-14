//  58A Chat Room: greedy, strings
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 14/08/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin>>s;
    int arr[5] = {'h','e','l','l','o'};
    int index = 0;
    for(int i=0;i<s.length();i++){
        if(index==5)break;
        if(s[i]==arr[index]){
            index++;
        }
    }
    if(index!=5)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}
