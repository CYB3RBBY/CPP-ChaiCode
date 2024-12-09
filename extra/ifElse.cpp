#include <bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch (age)
    {
    case 12:
        cout << "you are 12 years old" << endl;
        break;
    case 18: 
        cout << "You are 18 years old" << endl;
        break;

    default:
        cout << "You are neither 12 nor 18 years old" << endl;
        break;
    }



    // if (age >= 18 ){
    //     cout << "You are an adult" << endl;
    // }
    // else if (age < 18 || age < 1){
    //     cout << "You are not a adult" << endl;

    // }
    // else{
    //     cout << "Invalid input" << endl;
    // }
    return 0;

}