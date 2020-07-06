#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a!=1){
        if((a%2)==0){
            a/=2;
        }
        else if((a%3)==0){
            a/=3;
        }
        else if((a%5)==0){
            a/=5;
        }
        else{
            //printf("Irregular number!\n" );
            cout<<"Irregular number!"<<endl;
            return 0;
        }
    }
    //printf("Regular number!\n" );
    cout<<"Regular number!"<<endl;
    return 0;
}
