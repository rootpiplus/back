#include <iostream>
#include <string>
using namespace std;

int main() {
    string input, output;
    const char* bin[8] = {"000","001","010","011","100","101","110","111"};
    cin >> input;
    if (input == "0") {
        cout << "0";
        return 0;
    }
    int first = input[0] - '0';
    output += bin[first];
    while (output[0] == '0') output.erase(0, 1);
    for (int i = 1; i < input.size(); ++i) {
        output += bin[input[i] - '0'];
    }
    cout << output;
    return 0;
}
