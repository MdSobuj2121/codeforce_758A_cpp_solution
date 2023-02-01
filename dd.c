#include<iostream>
using namespace std;
int main()
{
    int n, i, c=0;
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int maxs = a[0];
    for(i=0; i<n; i++)
    {
        if(maxs<a[i])
        {
            maxs = a[i];
        }
    }
    for(i=0; i<n; i++)
    {
        c = c + (maxs-a[i]);
    }
    cout<<c<<endl;
}
