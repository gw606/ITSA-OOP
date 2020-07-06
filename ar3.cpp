#include <iostream>
using namespace std;
int main(){
    int a[6];
    long long int count=0;
    for(int i=0;i<6;i++)
        cin>>a[i];
    for(int j=5;j>=0;j--){
        count+=(a[j]*a[j]*a[j]);
    }
    cout<<count<<endl;
}
