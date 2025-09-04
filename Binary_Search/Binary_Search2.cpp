#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main (){
 int n;
 cin>>n;
 vector<int>v(n);
 for(int i=0;i<n;i++){
   cin>>v[i];
 }
 sort(v.begin(),v.end());
 int srh;
 cin>>srh;
 int low=0,high=n-1;
 int mid;
 while(high-low>1){
   mid=(high+low)/2;
   if(v[mid]<srh) low=mid+1;
   else high=mid;
 }
 if(v[low]==srh){
   cout<<low<<endl;
 }
 else if(v[high]==srh){
   cout<<high<<endl;
 }
 else cout<<"Not Found"<<endl;

}
