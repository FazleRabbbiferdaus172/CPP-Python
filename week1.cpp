#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a,b,sum;
    cin >> a >> b;
    sum = a + b;
    cout << sum << "\n";*/
    ifstream inf("input.txt");
    ofstream ouf("output.txt");
    int a,b;
    inf >> a >>b;
    ouf << a+b;
    return 0;

}
