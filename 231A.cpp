//  #231A Team: brute force, greedy	
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 16/07/22.
//

#include <iostream>
#include <strings.h>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int arr[3];
    int count = 0;
    while(n--){
        cin>>arr[0]>>arr[1]>>arr[2];
        int check = arr[0]+arr[1]+arr[2];
        if(check>=2)count++;
    }
    cout<<count<<endl;
    return 0;
}
