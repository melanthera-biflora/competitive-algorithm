// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main() {
    int w;
    string res;
    cin >>w;
    if ((w%2==0)&&(w!=2)){
        res = "YES";
    } else{
        res = "NO";
    }
    cout << res << endl;
    return 0;
}