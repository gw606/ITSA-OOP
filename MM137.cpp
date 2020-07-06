#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    //scanf("%d ",&a );
    for(int i=0;i<a;i++){
        int b;
        //scanf("%d",&b);
        cin>>b;
        int c=pow(2,b);
        //printf("%d\n", c);
        cout<<c<<endl;
    }
    return 0;
}
