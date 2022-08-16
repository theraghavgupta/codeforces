//  1712A Wonderful Permutation: greedy, implemetation
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 13/08/22.
//
 
#include <iostream>
#include <string>
using namespace std;
 
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n],count=0;
        for(int i=0;i<n;i++)cin>>arr[i];
        for(int i=0;i<k;i++){
            if(arr[i]>k)count++;
        }
//        int min_sum = k*(k+1)/2;
        cout<<count<<endl;
    }
    return 0;
}
