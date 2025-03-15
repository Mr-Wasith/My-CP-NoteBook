//Time Complexity --> O(2^n)

#include<bits/stdc++.h>
using namespace std;

vector<string> valid;

void generate(string &s,int open, int close){
   if(open==0 && close==0) {
     valid.push_back(s);
     return;
   }
   if(open>0){
     s.push_back('(');
     generate(s,open-1,close);
     s.pop_back(); //Backtracking step
   }
   if(close>0){
     if(close>open){
        s.push_back(')');
        generate(s,open,close-1);
        s.pop_back(); //Backtracking step
     }
   }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    cin>>n;
    string s;
    generate(s,n,n);
    for(auto ele : valid){
       cout<<ele<<endl;
    }

}