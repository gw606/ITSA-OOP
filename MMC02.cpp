#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    float c;
    c=(a*b);
    c/=2;
    cout<<fixed <<  setprecision(1)<<c<<endl;
}
