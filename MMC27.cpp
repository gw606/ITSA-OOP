#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int count=0;
    for(int i=a;i<=b;i++)
        count+=i;
    cout<<count<<endl;
}
