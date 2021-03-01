
#include<iostream>
using namespace std;
int c1(int a){
    cout << "a1->" << &a << endl;
    return a;
}

int c2(int &a){
    cout << "a2->" << &a << endl;
    return a;
}

int main(){
    int x; cin >> x;
    cout << "x->" << &x << endl;
    cout << c1(x) << endl;
    cout << c2(x);
    return 0;
}