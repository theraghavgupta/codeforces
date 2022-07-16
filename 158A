//  158A Next Round: *special problem, implementation
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 17/07/22.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=arr[k-1]&&arr[i]>0)count++;
    }

    cout<<count<<endl;


    return 0;
}
