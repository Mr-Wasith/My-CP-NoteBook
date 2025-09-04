#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"

int main(){
  cin.tie(0)->sync_with_stdio(0);

  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
   cin>>v[i];
  }
  sort(v.begin(),v.end());
  int element;
  cin>>element;
  int high=v.size()-1;
  int low=0;
  int mid;
  while(high-low>1){
   mid=(low+high)/2;
   if(v[mid]<element){
      low=mid+1;
   }
   else{
      high=mid;
   }

  }
  if(v[low]==element){
   cout<<low+1<<endl;
  }
  else if(v[high]==element){
   cout<<high+1<<endl;
  }
  else{
   cout<<"Not Found"<<endl;
  }
}
