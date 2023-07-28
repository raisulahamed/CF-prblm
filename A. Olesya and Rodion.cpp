//              Assalamu Alaykum Wa'rahmatullah

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
    if(n==1 && m==10){
        cout<<"-1"<<endl;
    }
    else if(m<10){
        for(int i=0;i<n;i++){
            cout<<m;
        }
        cout<<endl;
    }
    else if(m==10){
        cout<<"1";
        for(int i=0;i<n-1;i++){
            cout<<"0";
        }
        cout<<endl;
    }
}
int main()
{
    solve();
}

//                 Allah Hafeez
