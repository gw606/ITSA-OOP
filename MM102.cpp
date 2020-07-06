#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num[100], a,temp, i, j;
    cin>>a;
    for(int i=0;i<a;i++)
        cin>>num[i];
        for(i=0; i<a-1; i++)
        {
            for(j=i+1; j<a; j++)
            {
                if(num[i]<num[j]){
                    temp = num[i];
                    num[i] = num[j];
                    num[j] = temp;
                }
            }
        }
        for(i=0; i<a; i++)
            //printf("%d %d\n", i+1, num[i]);
            cout<<(i+1)<<" "<<num[i]<<endl;
        return 0;
    }
