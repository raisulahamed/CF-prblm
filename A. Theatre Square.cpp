//                              Assalamu Alaykom Wa'rahmatullah


#include<bits/stdc++.h>
#define ll long long
using namespace std;
void TheatreSquare()
{
    ll n,m,a;
    cin>>m>>n>>a;
    ll k=m/a;
    if(m%a!=0){
        k++;
    }
    ll l=n/a;
    if(n%a!=0){
        l++;
    }
    cout<<k*l<<endl;
}
int main()
{
    TheatreSquare();
    return 0;
}


//                      Allah Hafeez
