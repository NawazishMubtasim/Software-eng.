#include <iostream>
using namespace std;


bool isNumericConstant(string input) {
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] < 48 || input[i] > 57) {
            return false;
        }
    }
    return true;
}


void findOperators(string input) {
    for (int i = 0; input[i] != '\0'; i++) {
        char ch = input[i];
        if (ch == 43 || ch == 45 || ch == 42 ||
            ch == 47 || ch == 37 || ch == 61) {
            cout << "operator: " << ch << endl;
        }
    }
}


int main() {
    string input;
    cout << "Enter input: ";
    cin >> input;


    if (isNumericConstant(input)) {
        cout << "numeric constant" << endl;
    } else {
        cout << "not numeric" << endl;
    }

    findOperators(input);

    return 0;
}
