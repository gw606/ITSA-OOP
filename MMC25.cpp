#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,i=0,num=0;
    while(cin>>a){
        for(int i=0;i<=a;i++){
            if((i%3)==0)
                num+=i;
        }
        //printf("%d\n",num );
        cout<<num<<endl;
        num=0;
    }
    return 0;
}
