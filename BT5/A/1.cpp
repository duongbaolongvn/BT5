#include <iostream>
using namespace std;
int main(){
    int a1=1;
    int arr[1000];
    int a2=2;
    char b[1000];
    for(int i=0;i<3;i++){
        cout << "a->" << &arr[i] << endl;
    }
    for(int i=0;i<3;i++){
        cout << "b->" << (void*)&b[i] << endl;
    }
    cout << "a1->" << &a1 << endl;
    cout << "a2->" << &a2 << endl;
    return 0;
}