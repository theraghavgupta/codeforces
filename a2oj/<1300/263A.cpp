//  263A Beautiful Matrix: implementation
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 13/08/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int i=0,j=0;
    int arr[5][5];
    for(int ii=0;ii<5;ii++){
        for(int ji=0;ji<5;ji++){
            cin>>arr[ii][ji];
            if(arr[ii][ji]==1){
                i=ii;
                j=ji;
            }
        }
    }
    int ans = abs(i-2)+abs(j-2);
    cout<<ans<<endl;
    return 0;
}
