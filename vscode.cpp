#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main(){
    int t,n,a,b;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>a>>b;
        int mid=n/2; 
        // cout<<mid;
        int max1=n-b+a-1;
          cout<<max1<<endl;  
        if(a>mid+1 || b<mid ){
            cout<<-1<<endl;
        }
        
        else if(a==mid+1 && b==mid){
            for(int u=1;u<=n;u++){
                cout<<u<<" ";
            }
            cout<<endl;
        }
        else{
            
            for(int j=b+1;j<=n;j++){
                cout<<j<<" ";
            }
            
            for(int k=a;k<=b;k++){
                cout<<k<<" ";
            }
            for(int c=1;c<a;c++){
                cout<<c<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}