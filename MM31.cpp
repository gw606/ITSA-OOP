#include <iostream>
using namespace std;
int main()
{
    int a,num;
    cin>>a;
    int fac = 1;
    int out[a];
    for(int i = 0;i<a;i++)
    {
        cin>>num ;
        for(int j=1;j<=num;j++)
            fac*=j;
        out[i] = fac;
        fac = 1;
    }

    for(int i = 0;i<a;i++)
        cout<<out[i]<<endl;

    return 0;
}
