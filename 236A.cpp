//  236A Boy or Girl: brute force, implementation, strings
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 24/08/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cin>>s;
    int count[26]={0};
    int n=0;
    for(int i=0;i<s.length();i++)count[s[i]-'a']=1;
    for(int i=0;i<26;i++){
        if(count[i]>0)n++;
    }
    if(n%2==0)cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    return 0;
}
