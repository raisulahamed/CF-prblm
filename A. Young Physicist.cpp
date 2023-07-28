#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    FIO
    
    int n,sum1=0,sum2=0,sum3=0;  cin>>n;
    int ar[n+1][n+1];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>ar[i][j];
        }
            sum1+=ar[i][0];
            sum2+=ar[i][1];
            sum3+=ar[i][2];
    }
    if(sum1==0 && sum2==0 & sum3==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}
