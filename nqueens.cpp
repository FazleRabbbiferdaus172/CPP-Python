#include<bits/stdc++.h>
using namespace std;

int queen[20];
int col[20], digl[40], digr[40];
int c =0;
void nqueen(int at, int n)
{
    if(at == n+1)
    {
        /*cout << "(row, column) = ";
        for(int i=1; i<=n ; i++)
            cout <<i<<","<<queen[i]<<" ";
        cout<<"\n";*/
        c++;

    }

    for(int i =1; i<=n;i++)
    {
        if(col[i]||digl[i+at]||digr[n+i-at]) continue;

        queen[at] = i;
        col[i] = digl[i+at] = digr[n+i-at] = 1;
        nqueen(at+1,n);
        col[i] = digl[i+at] = digr[n+i-at] = 0;
    }
}

int main()
{
    nqueen(1,8);
    cout<<c;
    return 0;
}
