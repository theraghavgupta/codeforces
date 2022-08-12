//  1714B Remove Prefix: data structures, greedy, implementation
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 01/08/22.
//
 
#include <iostream>
#include <unordered_map>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        unordered_map<int,bool> map;
        int i;
        for(i=n-1;i>=0;i--){
            if(map[arr[i]])break;
            map[arr[i]] = 1;
        }
        cout<<i+1<<endl;
    }
    return 0;
}
