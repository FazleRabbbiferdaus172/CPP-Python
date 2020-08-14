#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

int main()
{
    string a,b="anik";
    int f=-1;
    cin>>a;
    f=a.find(b);
    if(f<a.size())
    {
        cout<<"he did it again"<<endl;
    }
    else
    {
        cout<<"not this time"<<endl;
    }
    return 0;
}
