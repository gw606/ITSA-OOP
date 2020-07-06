#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b){
        if((a<=100)&&(b<=100)){
            //printf("inside\n" );
            cout<<"inside"<<endl;
        }
        else{
            //printf("outside\n" );
            cout<<"outside"<<endl;
        }
    }
    return 0;
}
