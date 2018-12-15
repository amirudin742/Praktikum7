#include <iostream>

using namespace std;
void tukar(int &a, int &b){
    a=5;
    b=15;
}
int main()
{
    int a,b;
    a=15;
    b=5;
    cout << "Nilai a = " <<a<< endl;
    cout << "Nilai b = " <<b<< endl;
    cout << "SETELAH DITUKAR"<< endl;
    tukar(a,b);
    cout << "Nilai a = " <<a<< endl;
    cout << "Nilai b = " <<b<< endl;
    return 0;
}
