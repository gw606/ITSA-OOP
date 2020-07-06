#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,count=0;
    cin>>a;
    for(int i=5;i<=a;i++){
        int b=i;
        while((b%5)==0){
            b/=5;
            count++;
        }
    }
    //printf("%d\n",count );
    cout<<count<<endl;
}
