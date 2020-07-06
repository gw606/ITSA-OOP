#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int number[70005];
    int b;
    while(!cin.eof()){
         cin>>b;
         number[b]=1;
    }
    for(int i=1;i<a;i++){
        if(number[i]==0){
            cout<<i<<endl;
        }
    }
    return 0;
}
