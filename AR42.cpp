#include <iostream>
using namespace std;
int main()
{
    int num, max=-1, min=999;
    for(int i=0; i<10; i++){
        cin>>num;
        if(num>max)
            max=num;
        if(num<min)
            min=num;
    }
    //printf("Largest number = %d\n", max);
    cout<<"Largest number = "<<max<<endl;
    //printf("Smallest number = %d\n", min);
    cout<<"Smallest number = "<<min<<endl;
    return 0;
}
