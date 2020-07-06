#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>31)
        cout<<"Value of more than 31"<<endl;
    else{
        int num=2<<(a-1);
        cout<<num<<endl;
    }
}
