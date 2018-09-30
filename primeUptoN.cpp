#include<bits/stdc++.h>
using namespace std;
#define MAX 10000000
vector<bool>prime(MAX,true);

void primeSeave(int n){
    prime[0]=false;
    prime[1] = false;

    for(int i=4;i<=n;i+=2){
        prime[i] = false;
    }

    int limit = sqrt(n);
    for(int i=3;i<=limit;i+=2){
        if(prime[i]){
            for(int j = i*i; j<=n; j = j+2*i){
                prime[j]=false;
            }
        }
    }

}

int main()
{
    int a,b;
    cin>>a>>b;

    if(a>b){
        swap(a,b);
    }
    primeSeave(b);

    cout<<"prime numbers are given below\n";
    for(int i=a;i<=b;i++){
        if(prime[i]){
            cout<<i<<endl;
        }
    }
}
