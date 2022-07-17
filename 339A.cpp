//  339A Helpful Maths: greedy, implementation, sortings, strings
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 17/07/22.
//

#include <iostream>
#include <strings.h>
#include <algorithm>
using namespace std;

int main(int argc, const char * argv[]) {
    string n;
    cin>>n;
    int low = 0;
    int mid = 0, high = n.length()-1;
    while(mid<=high){
        if(n[mid]=='1'){
            swap(n[low],n[mid]);
            mid = mid+2;
            low = low+2;
        }else if(n[mid]=='2')mid = mid+2;
        else{
            swap(n[high],n[mid]);
            high = high-2;
        }
    }
    cout<<n<<endl;
    return 0;
}
