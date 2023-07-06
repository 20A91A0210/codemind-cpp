#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int count=0;
        while(n){
            if(n&1==1){
                count++;
            }
            n=n>>1;
        }
        cout<<count;
        cout<<endl;
    }
}