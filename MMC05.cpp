#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    float a;
    cin >>a;
    float c;
    c=a*a;
    c=round(c*10);
    c/=10;
    cout<<fixed <<  setprecision(1)<<c<<endl;
}
