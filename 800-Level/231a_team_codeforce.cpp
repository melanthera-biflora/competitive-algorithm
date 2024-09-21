// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    // Write C++ code here
    int n;
    int res = 0;
    cin >> n;
    while (n--){
        int sum = 0;
        int t1, t2, t3;
        cin >> t1 >> t2 >>t3;
        sum += t1+t2+t3;
        if (sum >=2){
            res +=1;
        }
        //cout << sum <<  endl;
    }
        
    cout << res << endl;
    return 0;
}