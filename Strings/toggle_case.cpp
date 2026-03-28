#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    for(int i = 0; i < str.length(); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // to uppercase
        }
        else if(str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; // to lowercase
        }
    }

    cout << "Toggled string: " << str << endl;

    return 0;
}