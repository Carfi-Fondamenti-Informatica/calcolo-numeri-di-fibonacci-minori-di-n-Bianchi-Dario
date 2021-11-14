#include <iostream>
using namespace std;

int main () {
    int i, n, primo=1, secondo=1, terzo=0;
    cin>>n;
    for(i=1;i<n;i++){
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
        cout<<terzo<<endl;
    }
    return 0;
}
