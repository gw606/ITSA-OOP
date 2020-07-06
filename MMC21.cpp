#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    long long int num=1;
    while (cin>>a) {
        for(int i=a;i>0;i--){
            num*=i;
        }
        cout<<num<<endl;
        num=1;
    }
}
