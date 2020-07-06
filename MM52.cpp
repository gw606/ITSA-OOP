#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=2;i<a;i++){
        int num=0;
        for(int j=1;j<i-1;j++){
            if(i%j==0)
                num+=j;
        }

        if(num==i)
            //printf("%d\n",i );
            cout<<i<<endl;
    }
    return 0;
}
