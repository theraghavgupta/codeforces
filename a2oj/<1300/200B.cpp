//  200B Drinks: implementation, math
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 17/07/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int arr[n];
    double count=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        count+=arr[i];
    }
    cout<<count/n<<endl;
    return 0;
}
