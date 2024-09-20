// Online C++ compiler to run C++ program online
#include <iostream>
#include <stdio.h>
#include <string> 
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--){
        string word, res;
        int len;
        cin >> word;
        len = word.length();
        if (len > 10){
            res = word[0] + to_string(word.substr(1,len-2).length()) + word[len-1];
        } else{
            res = word;
        }
        cout << res << endl;
    }
}