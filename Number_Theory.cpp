// Find all prime from 1 to n

#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<bool> mark(n+1,true);
  mark[0]=mark[1]=false;
  for(int d=2;d<=n;d++){
    if(mark[d]){
      cout<<d<<" ";
    }
    for(int a=2*d;a<=n;a+=d){
      mark[a]=false;
    }
  }
}