#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    // Checking the number is Even or Odd
    if(n&1){
        cout<<"Odd"<<endl;
    }
    else{
        cout<<"Even"<<endl;
    }

    //Dividing by 2 using right shift
    cout<< (n>>1) <<endl;

    //Multiplying by 2 using left shift
    cout<< (n<<1) <<endl;

    //Converting uppercase to lowercase
    cout<< char('A' |' ') <<endl;

    //Converting lowercase to uppercase
    cout<< char('a' & '_') <<endl;

    //Check power of 2 or not
    if(n & (n-1)){
        cout<<"Not a power of 2"<<endl;
    }
    else{
        cout<<"Power of 2"<<endl;
    }


}
