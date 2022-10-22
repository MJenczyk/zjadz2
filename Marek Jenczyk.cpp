
#include <iostream>
using namespace std;

int main()

{
    int ip;
    int ig;
    cout << "podaj liczbe kawalkow pizzy:" << endl;
    cin >> ip;
    cout << "podaj liczbe gosci:" << endl;
    cin >> ig;

    int dzi;
    int kekw;
    dzi = ip / ig;
    kekw = ip % ig;
    

    if (kekw == 0) {
        cout << "Kazdy dostal po " << dzi << "kawalkow" << endl;
    }
    else if (kekw != 0) {
        cout << "zostalo "<< kekw << " dla organizatora" << endl;
    }

}
