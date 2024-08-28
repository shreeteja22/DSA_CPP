#include <bits/stdc++.h>
using namespace std;

int main() {
    int day = 4;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Invalid";
    }

    return 0;
}

/* for example if we type 3 and the output will be wednesday,thursday,friday,saturday,sunday   so to prevent this use break in every statement (after the statement) 
Default is the keyword in which none of the values from 1 to 7 is in input then the default will execute uit it will print what ever the output we need to put*/