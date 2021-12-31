#include <bits/stdc++.h>
using namespace std;
int main() {
    int testcase;
    cin >> testcase;
    while(testcase--){
        int a1,b1,a2,b2;
        cin >> a1 >> b1 >> a2 >> b2;
        int sum = a1*b1 + a2*b2;
        if(a1 == b1 || a2 == b2){
            cout << "No" << endl;
            continue;
        }
        bool printed = false;
        for(int i = 1;i <= sqrt(sum);i++){
            if(i*i == sum){
                int fn = i;              //square found(i*i == sum).
                if((fn-a1 == a2 && b1 == b2) || (fn-a1 == b2 && a2 == b1) || (fn-b1 == a2 && b2 == a1) || (fn-b1 == b2 && a1 == a2)){
               //checking if sum of length or breadth is equal to side and the other parameter should be                                                                  //           //equal 
               cout << "Yes" << endl;
                printed = true;
                break;
                }
            }
        }
        if(!printed)
        cout << "No" << endl;
    }
}