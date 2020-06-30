#include<bits/stdc++.h>

using namespace std;

int main()

{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    int n[3][3],result=0;
    for (int i = 0; i < 3 ;++i)
    {
        for(int j = 0; j < 3;++j )
        {
            inf >> n[i][j];
        }
    }

    for (int i0 = 0; i0 < 3; ++i0)
        for (int i1 = 0; i1 < 3; ++i1)
            if (i0 != i1)
            {
                int i2 = 3 - i0 - i1;
                result = max(result,n[0][i0]*n[0][i0] +n[1][i1]*n[1][i1] +n[2][i2]*n[2][i2] );
            }

    ouf << setprecision(10) << sqrt(result);
    return 0;
}
