#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char string1[1000];
    int i, length;
    int flag = 0;

    cin >> string1;

    length = strlen(string1);

    for(i=0;i < length ;i++){
        if(string1[i] != string1[length-i-1]){
            flag = 1;
            break;
   }
}

    if (flag) {
        cout <<  "no" << endl;
    }
    else {
        cout << "yes" << endl;
    }
    return 0;
}
