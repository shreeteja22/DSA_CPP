#include <bits/stdc++.h>
using namespace std;

int sum(int num1,int num2){
    int num3 = num1 + num2; // 5 + 4 = 9
    return num3; //result function 
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int result = sum(num1 , num2 );
    cout << result;
    return 0;
}

// types of functions 
// void --> does not return anything
// return --> 
// parameterised
// non parameterised

/*
void function is written outside the int main();
and if there is something written in paranthesis then it is called parameter for eg:

    void printName(string name){
        cout << "Hey " << name;
    }
    int main(){
        string name;
        cin >> name;
        printName(name);
        return 0;
    }

*/

/* {this code is for summation of two numbers using functions}
int sum(int num1,int num2){
    int num3 = num1 + num2; // 5 + 4 = 9
    return num3; //result function 
}
int main(){
    int num1,num2;
    cin >> num1 >> num2;
    int result = sum(num1 , num2 );
    cout << result;
    return 0;
}
*/

//There are builtins like max min to find the minimum and maxiumum value between any numbers


// NOTE:
// Pass by Value: A copy of the actual parameter is passed to the function, so changes made to the parameter inside the function do not affect the original argument.

// Pass by Reference: A reference to the actual parameter is passed to the function, so changes made to the parameter inside the function affect the original argument.