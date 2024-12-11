#include<iostream>
#include<vector>
using namespace std;

int main(){
    long n, x;
    cout << "input n: ";
    cin >> n;
    cout << "input x: ";
    cin >> x;

    long binForm = n;
    if(n<0){
        x = 1/x;
        binForm = -binForm;
    }
    
    cout << "first";

    double ans=1;
    while(n>0){
        if(binForm%2==1){
            ans *= x;
            x *= x;
            binForm /= 2;
        }
    }

    cout << "second";
    cout << x << "^" << n << " = " << ans << endl;

    return 0;
}
