#include<bits/stdc++.h>

using namespace std;

int main()
{
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    long long a,b;
    inf >> a >> b;
    ouf << a+b*b;
    return 0;
}
