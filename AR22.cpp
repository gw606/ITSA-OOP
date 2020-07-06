#include <iostream>
using namespace std;
int main(){
    char a[100];
    cin>>a;
    for(int i=0;a[i]!='\0';i++){
        a[i]-=3;
    }
    cout<<a<<endl;
    return 0;
}
