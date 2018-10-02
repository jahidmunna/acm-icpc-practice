#include<bits/stdc++.h>
using namespace std;

int getGCD(int x, int y){
    if(y==0)
        return x;
    else if(x%y==0)
        return y;
    else
        getGCD(y,x%y);

}

int getLCM(int x, int y){
    return (x/getGCD(x,y))*y;
}

int main()
{
    int x=98,y=56;
    if(x<y)
        swap(x,y);
    cout<<getGCD(x,y)<<endl;
     cout<<getLCM(x,y)<<endl;

}
