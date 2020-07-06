#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b;
    for(int i=0;i<a;i++){
        cin>>b;
        int count=0;
        if(b==1)
            count=1;
        while(b!=1){
            if((b%2)==0){
                b/=2;
                count++;
            }
            else{
                b=3*b+1;
                count++;
            }
        }
        //printf("%d\n",count );
        cout<<count<<endl;
    }
    return 0;
}
