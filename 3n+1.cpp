#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,mc,c=1,x;
    while(scanf("%lld%lld",&i,&j)==2){
    mc=0;
    cout << i <<" "<< j<< " ";
    if (i>j)
    {
        swap(i,j);
    }
    for (int y = i; y <= j; y++)
    {
        c = 1;
        x =y;
        while(x!=1)
        {
            c++;
            if(x%2==0){
                x /= 2;}
            else{
                x = 3*x +1;}
        }
        mc = max(mc,c);
    }
    cout<< mc << "\n";}
    return 0;
}
