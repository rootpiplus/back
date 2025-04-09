#include<iostream>
using namespace std;

int main(){
    string a, b, answer = "";
    cin >> a >> b;

    if (a.length() < b.length()) a = string(b.length() - a.length(), '0') + a;
    else if (b.length() < a.length()) b = string(a.length() - b.length(), '0') + b;

    int carry = 0;
    for (int i = a.length() - 1; i >= 0; i--) {
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        answer = char((sum % 2) + '0') + answer;
        carry = sum / 2;
    }

    if (carry) answer = '1' + answer;
    answer.erase(0, answer.find_first_not_of('0'));
    if (answer.empty()) answer = "0";
    cout << answer;
}
