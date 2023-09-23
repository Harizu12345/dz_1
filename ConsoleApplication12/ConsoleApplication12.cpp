#include <iostream>
using namespace std;

//1
/*
int main() {
    int number;
    int* ptr = &number;

    cout << "ur num: ";
    cin >> *ptr;

    if (*ptr > 0) {
        cout << "num is +: " << endl;
    }
    else if (*ptr < 0) {
        cout << "num is - " << endl;
    }

    return 0;
}

*/


//2
/*
int main() {
    int x, y;
    char opty;

    cout << "first num: ";
    cin >> x;

    cout << "Second num: ";
    cin >> y;

    cout << "Operation: ";
    cin >> opty;

    int result;

    int* resultPtr = &result;


    switch (opty) {
    case '+':
        *resultPtr = x + y;
        break;
    case '-':
        *resultPtr = x - y;
        break;
    case '*':
        *resultPtr = x * y;
        break;
    case '/':
        *resultPtr = x / y;
        break;
    }

    cout << "result: " << *resultPtr << endl;

    return 0;
}
*/


