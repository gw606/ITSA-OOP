#include <iostream>
using namespace std;
int main(){
    int a,b,total=0;
    for(int i=0;i<3;i++){
        cin>>a>>b;
        total+=a*b;
    }
    //printf("%d\n",total );
    cout<<total<<endl;
}
