#include<bits/stdc++.h>
using namespace std;
void DreamoonandStairs()
{
    int n,m,divide,ans,f=0;
    cin>>n>>m;
    if(n%2==1){
    divide = n/2+1;
    }
    else
    {
        divide=n/2;
    }
    for(int i=0;i<divide;i++)
    {
        if((divide+i)%m==0){
            ans=divide+i;
            f=1;
            break;
        }
    }
    if(n<m && f==0){
    cout<<-1<<endl;
    }
    else if(n==m)
        cout<<m<<endl;
    else if(n>m && f==1)
        cout<<ans<<endl;
}
int main()
{
    DreamoonandStairs();
}
