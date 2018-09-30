#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2)
        return false;
    else if(n%2==0)
        return false;
    else {
        int lim = sqrt(n);
        for(int i=3;i<=lim; i+=2){
            if(n%i==0)
                return false;
        }

        return true;
    }
}

bool isPrimeAnother(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}

int main()
{
    int n = 2147483647;
    if(isPrime(n))
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime"<<endl;

}
