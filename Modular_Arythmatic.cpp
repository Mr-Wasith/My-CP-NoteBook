// (a + b) % c = ((a % c) + (b % c)) % c
// (a - b) % c = ((a % c) - (b % c) + c) % c
// (a * b) % c = ((a % c) * (b % c)) % c
// (a / b) % c = ((a % c) * ((1/b) % c)) % c

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a = 70;
    int b = 7;
    int c = 3;
    int ans = ((a % c) * (() % c)) % c;
    cout<<ans<<endl;
}