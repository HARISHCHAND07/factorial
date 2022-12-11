#include<iostream>
using namespace std;
fact(int n){
    if(n<=1)
    return 1;
    return n*fact(n-1);
}
int main(){int n,ans;
    cout<<"enter the no =";
    cin>>n;
    ans=fact(n);
    cout<<"factirial of "<<n<<" is "<<ans;
    return 0;
}