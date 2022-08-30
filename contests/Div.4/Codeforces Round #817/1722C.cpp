//  1722C Word Game: data structures, implementation
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 30/08/22.
//

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<unordered_set<string>> sets(3);
        for(int j=0;j<3;j++){
            for(int i=0;i<n;i++){
                string el;
                cin>>el;
                sets[j].insert(el);
            }
        }
        int a=0,b=0,c=0;
        for(auto x:sets[0]){
            int cur = 3;
            if(sets[1].find(x)!=sets[1].end())cur-=2;
            if(sets[2].find(x)!=sets[2].end())cur-=2;
            if(sets[1].find(x)!=sets[1].end()&&sets[2].find(x)!=sets[2].end()){
                sets[1].erase(x);
                sets[2].erase(x);
            }
            a += max(0,cur);
        }
        for(auto x:sets[1]){
            int cur = 3;
            if(sets[0].find(x)!=sets[0].end())cur-=2;
            if(sets[2].find(x)!=sets[2].end())cur-=2;
            if(sets[0].find(x)!=sets[0].end()&&sets[2].find(x)!=sets[2].end()){
                sets[0].erase(x);
                sets[2].erase(x);
            }
            b += max(0,cur);
        }
        for(auto x:sets[2]){
            int cur = 3;
            if(sets[1].find(x)!=sets[1].end())cur-=2;
            if(sets[0].find(x)!=sets[0].end())cur-=2;
            if(sets[1].find(x)!=sets[1].end()&&sets[0].find(x)!=sets[0].end()){
                sets[1].erase(x);
                sets[0].erase(x);
            }
            c += max(0,cur);
        }
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
    return 0;
}
