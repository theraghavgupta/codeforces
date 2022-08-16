//  1709A Three Doors: brute force, dfs and similar, math	
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
    int t;
    cin>>t;
    while(t--){
        int key1;
        cin>>key1;
        int check[3] = {1,1,1};
        check[key1-1]--;
        int arr[3];
        for(int i=0;i<3;i++)cin>>arr[i];
        int key2 = arr[key1-1];
        check[key2-1]--;
        int key3 = arr[key2-1];
        check[key3-1]--;
        int count = 0;
        for(int i=0;i<3;i++){
            if(check[i]==0)count++;
        }
        if(count==3)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
        
    return 0;
}
