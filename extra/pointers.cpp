#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 34;
    int *ptrA;
    ptrA = &a;
    cout << "The value of a is "<< a << endl;
    cout << "The value of a is "<< *ptrA << endl;
    cout << "The address of a is "<< &a << endl;
    cout << "The address of a is "<< ptrA << endl;
    return 0;
}