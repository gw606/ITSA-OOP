#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    while(cin>>a){
        for(int i=1;i<=a;i++){
            if((a%i)==0&&(i!=1)){
                //printf(" %d",i );
                cout<<" "<<i;
            }
            if(i==1){
                //printf("%d",i );
                cout<<i;
            }
        }
        //printf("\n" );
        cout<<endl;
    }
}
