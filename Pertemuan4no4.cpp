#include<iostream>
using namespace std;
int main (){
    char menu;

    cout << "       Menu Restaurant Mc'Yahud         " << endl;
    cout << "========================================" << endl;
    cout << "1. Nasi Goreng Informatika   Rp. 5.000,-" << endl;
    cout << "2. Nasi Soto Ayam Internet   Rp. 7.000,-" << endl;
    cout << "3. Gado-Gado Disket          Rp. 4.500,-" << endl;
    cout << "4. Bubur Ayam LAN            Rp. 4.000,-" << endl;
    cout << "========================================" << endl;

    cout << "Masukan no pilihan (1,2,3,4): ";
    cin >> menu;

    switch (menu) {
        case '1':
            cout << "1. Nasi Goreng Informatika   Rp. 5.000,-" << endl;
            break;
        case '2':
            cout << "2. Nasi Soto Ayam Internet   Rp. 7.000,-" << endl;
            break;
        case '3':
            cout << "3. Gado-Gado Disket          Rp. 4.500,-" << endl;
            break;
        case '4':
            cout << "4. Bubur Ayam LAN            Rp. 4.000,-" << endl;
            break;
    }

    return 0;
}
