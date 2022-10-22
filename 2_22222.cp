
#include <iostream>
using namespace std;

int main()

{
    int a;
    int b;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;


    for (int i = 0; i <a; i++) {
        for (int q = 0; q < b; q++) {
            cout << "*" ;
        }
        cout << endl;

    }
    cout << "obwód wynosi:" << 2 * a + 2 * b << endl;

}
