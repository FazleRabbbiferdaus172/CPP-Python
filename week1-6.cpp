#include<bits/stdc++.h>

using namespace std;

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");

    int a,b,c;

    inf >> a >> b >> c;
    ouf << setprecision(8)<<(a+b+c)/6.0 << "\n";

    return 0;

}
