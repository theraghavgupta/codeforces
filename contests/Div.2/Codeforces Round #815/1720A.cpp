//  1720A Burenka Plays with Fractions: math, number theory
//
//  main.cpp
//  codeForces
//
//  Created by Raghav Gupta on 18/08/22.
//
// C++17
#include <iostream>
#include <cmath>
#include <numeric>
using namespace std;

int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    while(t--){
        int n1,d1,n2,d2;
        cin>>n1>>d1>>n2>>d2;
        if(n1==n2&&n1==0){
            cout<<0<<endl;
            continue;
        }
        if(n1==0||n2==0){
            cout<<1<<endl;
            continue;
        }
        int gcd1=gcd(n1,d1), gcd2=gcd(n2,d2);
        n1/= gcd1;
        d1/= gcd1;
        n2/= gcd2;
        d2/= gcd2;
        int gcd3=gcd(n1,n2), gcd4=gcd(d1,d2);
        n1/= gcd3;
        d1/= gcd4;
        n2/= gcd3;
        d2/= gcd4;
//        cout<<n1<<n2<<d1<<d2<<endl;
        long long check1 = (n1*d2),check2 = (n2*d1);
        long long checkgcd = gcd(check1,check2);
        check1/=checkgcd;
        check2/=checkgcd;
//        cout<<check1<<" "<<check2<<endl;
        if(check1==check2)cout<<0<<endl;
        else if(check1==1||check2==1)cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
