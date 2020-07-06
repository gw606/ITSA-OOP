#include <iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    char a[1000];
    while(cin >> a )
    {
        int i;
        for(i=0; i<strlen(a); i++){
            if(isalpha(a[i])){
                if((a[i]>='A' && a[i]+13<='Z') || (a[i]>='a' && a[i]+13<='z'))
                    cout<<(a[i]+13);
                else
                    cout<<(a[i]-13);
            }
            else
                cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
