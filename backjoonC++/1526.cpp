#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool panbyel(int x){
    string a=to_string(x);
    for(char b:a){
        if(b=='4'||b=='7'){
            continue;
        }else{
            return false;
        }
    }
    return true;
}
int main(void){
    int x;
    cin>>x;
    for(int i=x;i>=4;i--){
        if(panbyel(i)){
            cout<<i;
            break;
        }
    }
}
