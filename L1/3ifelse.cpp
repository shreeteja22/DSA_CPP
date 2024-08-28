#include <bits/stdc++.h>
using namespace std;

int main() {
   int marks;
   cin >> marks;
   if( marks >= 90 && marks <= 100){
    cout << "O";
   }
   else if( marks >= 80 /*&& marks <= 90*/){
    cout << "A";
   }
   else if( marks >= 70/* && marks <= 80*/){
    cout << "B";
   }
   else if( marks >= 60/* && marks <= 70*/){
    cout << "C";
   }
   else if( marks >= 50/* && marks <= 60*/){
    cout << "D";
   }
   else if( marks >= 40/* && marks <= 50*/){
    cout << "E";
   }
   else if( marks >= 35/* && marks <= 40*/){
    cout << "F";
   }
   else if (marks >= 100){
    cout << "Invalid Input";
   }
    
    return 0;
}

//else statement not found then if will not execute

/*int age;
    cin >> age;
    if(age >= 18){
        cout << "You are an adult!.";
    }
    else{
        cout << "You are not an adult!.";
    }*/


/*int main(){
    int age;
    cin >> age;
    if(age < 18){
        cout << "Not eligible for Job.";
    }
    else if(age >= 18){
        cout << "You are Eligible for Job.";
    }
    else if(age <=60){
        cout << "It's Retirement Time for you.";
    }
    return 0;
}*/