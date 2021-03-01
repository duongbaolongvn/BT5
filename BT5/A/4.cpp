#include<iostream>
using namespace std;
string s(string x){
    cout << &x << endl;
    return x;
}

int main(){
    string f="qhj";
    cout << &f << endl;
    cout << s(f);
    return 0;
}
