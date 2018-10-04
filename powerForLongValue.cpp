#include<bits/stdc++.h>
using namespace std;

#define ll long long int

 ll power(ll x, ll y)
{
    if(y==0)
        return 1;
    else if(y==1)
        return x;
    else{
        if(y%2!=0)
            return x*power(x,y-1);
        else{
            ll temp = power(x,y/2);
            return temp*temp;
        }
    }
}

int main()
{
    ll x,y;

    while(cin>>x>>y){
        cout<<"Manual result = "<<power(x,y)<<endl;
        cout<<"Default result = "<<pow(x,y)<<endl;
        cout<<endl;
    }

}
