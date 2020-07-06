#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        for(int i=6;i<=a;i++){
            if(i>8128)
                break;
            int num=0;
            for(int j=1;j<i-1;j++){
                if(i%j==0)
                    num+=j;
            }
                if(i==6){
                    //printf("%d" ,num);
                    cout<<num;
                }
                if(num==i&&(num!=6)){
                    //printf(" %d" ,num);
                    cout<<" "<<num;
                }
        }
        if(a>=33550336)
            cout<<" "<<33550336;
        //printf("\n" );
        cout<<endl;
    }
    return 0;
}
