#include <bits/stdc++.h>

using namespace std;

/*int a,b,c,d;

int tri (int d)
{
    if (d == 0)
    {
        return a;
    }
    if(d==1)
    {
        return b;
    }

    if(d==2)
    {
        return c;
    }

    return tri(d-1)+tri(d-2)-tri(d-3);
}

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    inf >> a >> b >> c >> d;
    int ans = tri(d);
    ouf << ans;
    return 0;

}*/

/*int cache[100001],n;
bool done[100001] = {true,true,true};

int tri(int n)
{
    if(!done[n])
    {
        cache[n] = tri(n-1)+tri(n-2)-tri(n-3);
        done[n] = true;
    }

    return cache[n];
}

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    inf >> cache[0] >> cache[1] >> cache[2] >> n;
    ouf << tri(n);
    return 0;
}*/


int main()
{
    int a,b,c,d,n;
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    inf >> a >> b >> c >> n;
    while (--n >= 0)
    {
        d = c+b-a;
        a = b;
        b = c;
        c = d;
    }
    ouf << a ;
    return 0;
}
