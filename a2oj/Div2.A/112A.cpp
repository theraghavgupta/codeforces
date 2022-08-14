//  112A Petya and Strings: implementation, strings
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 14/08/22.
//

#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char * argv[]) {
    string a,b;
    cin>>a>>b;
    int i=0;
    while(i<a.length()){
        if(a[i]<97)a[i] = a[i]+32;
        if(b[i]<97)b[i] = b[i]+32;
        i++;
    }
    if(a==b)cout<<0<<endl;
    else if(a>b)cout<<1<<endl;
    else cout<<-1<<endl;
    return 0;
}
