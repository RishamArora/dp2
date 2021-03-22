/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int balancedBTs(int h);
int main() {
    int n;
    cin >> n;
    cout << balancedBTs(n);
}
#include<cmath>	
int balancedBTs(int h) {
    // Write your code here
    long *arr=new long[h+1];
    arr[0]=1;
    arr[1]=1;
    int mod=(int)(pow(10,9)+7);
    for(int i=2;i<=h;i++){
        int a=((long)arr[i-1]*arr[i-1])%mod;
        int b=((long)2*arr[i-1]*arr[i-2])%mod;
        arr[i]=(a+b)%mod;
    }
    return arr[h];
}
