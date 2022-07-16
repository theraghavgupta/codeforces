//  #71A Way Too Long Words: strings
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
    string arr;
    while(n--){
        cin>>arr;
        int len = arr.length() - 2;
        if(len+2>10)
            cout<<arr[0]<<len<<arr[len+1]<<endl;
        else
            cout<<arr<<endl;
    }
    return 0;
}
