//  118A String Task: implementation, strings
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
    string s;
    cin>>s;
    int i=0;
    while(i<s.length()){
        if(s[i]<97)s[i] = s[i]+32;
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')s.erase(i,1);
        else{
            s.insert(i, ".");
            i+=2;
        }
    }
    cout<<s<<endl;
    return 0;
}
