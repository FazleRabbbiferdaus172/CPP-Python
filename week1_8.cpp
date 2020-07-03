#include<bits/stdc++.h>
using namespace std;

int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19 };
int prime_count = 8;

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");

    int n,c = 0,bc=-1,bd=0,limit;
    inf >> n;
    /*for (int i = 2 ; i <=n ; i++)
    {
        c = 0;
        limit = (int)(sqrt(i));
        for (int j = 1; j <= limit; j++)
        {
            c += !(i % j);
        }
        c *= 2;
        if(i == limit*limit)
        {
            --c;
        }
        cout << c << "\n";
        if(c>bc)
        {
            bc = c;
            bd = i;
        }
    }
    cout << bd;*/
    for(int i = 2 ; i <=n ; ++i)
    {
        int value = i;
        c = 1;
        for(int j = 0 ; j < prime_count && value >= primes[j]; ++j)
        {
            int count_p=0;
            while (value % primes[j] == 0)
            {
                value /= primes[j];
                count_p += 1;
            }
            c *= (count_p+1);
        }
        if(bc < c)
        {
            bc = c;
            bd = i;
        }
    }
    ouf << n-bd+1 << "\n";

    return 0;
}
