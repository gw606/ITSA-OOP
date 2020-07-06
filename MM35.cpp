#include <iostream>
using namespace std;
int main(){
	int x,y=2,i=0;
    int a;
    cin>>a;
    for(int k=0;k<a;k++){
    	cin>>x;
    	while(x!=1){
    		if(x%y==0){
    			x=x/y;
    			i++;
    			if((x%y)!=0){
                    if((i!=1)&&(x!=1))
    				    //printf("%d^%d*",y,i);
                        cout<<y<<"^"<<i<<"*";
                    else if((i!=1)&&(x==1))
                        //printf("%d^%d\n",y,i);
                        cout<<y<<"^"<<i<<endl;
                    if((i==1)&&(x!=1))
                        //printf("%d*",y );
                        cout<<y<<"*";
                    else if((i==1)&&(x==1))
                        //printf("%d\n",y);
                        cout<<y<<endl;
    			}
                else{
                    continue;
                }
                i=0;
    		}
    		else
    		y++;
	   }
       y=2;
    }
    return 0;
}
