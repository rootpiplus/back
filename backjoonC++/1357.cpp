#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int Rev(int x){
    string a = to_string(x);
    reverse(a.begin(),a.end());
    return stoi(a);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<(Rev(Rev(a)+Rev(b)));
}
