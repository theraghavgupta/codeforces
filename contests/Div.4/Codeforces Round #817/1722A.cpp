//
//  main.cpp
//  codeForces
//  1722A Spell Check: implementation
//  Created by Raghav Gupta on 30/08/22.
//

#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        unordered_map<char,int> map1{{'T',1},{'i',1},{'m',1},{'u',1},{'r',1}};
        if(n!=5){
            cout<<"NO"<<endl;
            continue;
        }
        bool check = 0;
        for(int i=0;i<n;i++){
            if(!map1[s[i]]){
                check = 1;
                break;
            }
            map1[s[i]]--;
        }
        check?cout<<"NO"<<endl:cout<<"YES"<<endl;
        
    }
    return 0;
}
