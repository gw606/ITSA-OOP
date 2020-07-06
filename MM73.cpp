#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a;
    while(cin>>a)
    {
        double b,c;
        b=a*((double)9/(double)5)+32;
        c=a+273.15;
        //printf("Fahrenheit = %.2lf\n", b);
        cout<<"Fahrenheit = "<<fixed <<  setprecision(2)<<b<<endl;
        //printf("Absolute temperature = %.2lf\n", c);
        cout<<"Absolute temperature = "<<fixed <<  setprecision(2)<<c<<endl;
    }
    return 0;
}
