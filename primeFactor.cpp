#include<bits/stdc++.h>
using namespace std;
#define MAX  100000
vector<bool>primesForN(MAX,true);
vector<int>prime;
vector<int>factors;

void primeSeave(){
    primesForN[0] = false;
    primesForN[1] = false;
    for(int i=4;i<MAX;i+=2){
        primesForN[i] = false;
    }

    int limit = sqrt(MAX);
    for(int i=3;i<=limit;i+=2){
        if(primesForN[i]){
            for(int j= i*i;j<MAX;j +=2*i){
                primesForN[j] = false;
            }
        }
    }

    prime.push_back(2);
    for(int i=3;i<MAX;i+=2){
        if(primesForN[i]){
            prime.push_back(i);
        }
    }
}


void factorize( int n ) {
    int sqrtn = sqrt ( n );
    for ( int i = 0; i < prime.size() && prime[i] <= sqrtn; i++ ) {
        if ( n % prime[i] == 0 ) { // Found a prime that divides n
            while ( n % prime[i] == 0 ) { // Check how many times it divides n
                n /= prime[i];
                factors.push_back(prime[i]);
            }
            sqrtn = sqrt ( n );
        }
    }
    if ( n != 1 ) {
        factors.push_back(n); // The only prime factor > sqrt(n)
    }
}

int main()
{
    int n;
    primeSeave();
    while(true){
        cin>>n;
        if(n==0)
            break;
        else if(n==1){
            cout<<n<<" = "<<1<<endl;
        }
        else {
            if (n>1){
                factorize(n);
                cout<<n<<" =";
            }
            else {
                factorize(-n);
                cout<<n<<" = -1 x";
            }

            int limit = factors.size();
            for(int i=0;i<limit-1;i++){
                printf(" %d x",factors[i]);
            }
            printf(" %d\n",factors[limit-1]);
            factors.clear();
        }
    }

}
