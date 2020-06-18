#include<bits/stdc++.h>

using namespace std;

vector<int>permutation;

bool chosen[20];

void search(int n){
    if(permutation.size() == n)
    {
        for(int i =0;i<permutation.size();i++)
        {
            cout<<permutation[i]<<",";
        }
        cout<<" ";
    }

    for(int i=1;i<=n;i++)
    {
        if(chosen[i]) continue;
        chosen[i] = true;
        permutation.push_back(i);
        search(n);
        chosen[i]=false;
        permutation.pop_back();
    }

}

int main()
{
    search(3);
}
