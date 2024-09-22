// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int res = 0;
    cin >> n;
    while(n--){
        string k;
        cin>>k;
        if ((k.at(0) == '+')||(k.at(1) == '+')){
            res++;
        }else{
            res--;
        }
    }
    cout << res << endl;
}

