#include<bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pb push_back
int main(){
    FIO
    
    int a,b,c;   cin>>a>>b>>c;
    int k = (a*b*c),l = (a+b+c), m = (a+b)*c,n = (c+b)*a,o = (a*b)+c,p = (b*c)+a;
    vector<int>v(6);
    v.pb(k);
    v.pb(l);
    v.pb(m);
    v.pb(n);
    v.pb(o);
    v.pb(p);
    cout<<*max_element(v.begin(), v.end());
}
