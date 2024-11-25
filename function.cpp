#include <bits/stdc++.h>
using namespace std;

// function
int sum(int a, int b){
    int c ;
    c = a + b;
    return c;
}
int main (){
    int a , b;
    cout << "Enter the first number:" << endl;
    cin >> a;
    cout << "Enter the second number:" << endl;
    cin >> b;
    cout << "The function returned " << sum(a,b) << endl;
    return 0;
}