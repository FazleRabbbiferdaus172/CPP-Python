#include<bits/stdc++.h>

using namespace std;

/*int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    int n,p[1000],t[1000];
    inf >> n;
    for (int i = 0; i < n; i++)
    {
        inf >> p[i];
    }

     for (int i = 0; i < n; i++)
    {
        inf >> t[i];
    }

    int local = 0, answer = 0;

    for(int ti = 0; ti < n; ti++)
    {
        for(int pi = 0;pi < n; pi++)
        {
            if (ti == pi)
                continue;
            local = t[ti] + p[pi];
            for(int i = 0 ; i < n; i++ )
            {
                if (ti != i && pi != i)
                {
                    local += max(t[i],p[i]);
                }
            }
            answer = max(answer,local);
        }
    }
    ouf << answer;
    return 0;
}*/

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    int n,p[1000],t[1000];
    inf >> n;
    for (int i = 0; i < n; i++)
    {
        inf >> p[i];
    }

     for (int i = 0; i < n; i++)
    {
        inf >> t[i];
    }

    int mindiff = 1000000,result = 0,p_used = 0,t_used = 0,diff;

    for (int i = 0; i < n; i++)
    {
        if(t[i] > p[i])
        {
            result += t[i];
            t_used += 1;
            diff = t[i] - p[i];
        }
        else
        {
            result += p[i];
            p_used += 1;
            diff = p[i] - t[i];
        }

        mindiff = min(mindiff,diff);
    }

    if(p_used == n || t_used == n)
    {
        ouf << result - mindiff;
    }
    else
    {
        ouf << result;
    }

    return 0;

}


