//  160A Twins: greedy, sorting
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 14/08/22.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    int sum_new = 0;
    for(int i=n-1;i>=0;i--){
        sum -= arr[i];
        sum_new += arr[i];
        if(sum<sum_new){
            cout<<n-i<<endl;
            break;
        }
    }
    
    return 0;
}
