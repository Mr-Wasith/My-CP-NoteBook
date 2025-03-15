#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
#define pb push_back

int main(){
   int n,m;
   cin>>n>>m;
   int GCD=__gcd(n,m);
   int LCM=(n*m)/GCD;
   cout<<"GCD : "<<GCD<<endl;
   cout<<"LCM : "<<LCM<<endl;
   
}