#include<iostream>
using namespace std;
int main () {
    int kode;
    char ukuran;
    float jmlh, b_1,k_1,s_1,b_2,s_2,k_2,b_3,s_3,k_3;
    b_1 = 10000; s_1 = 4250; k_1 = 2100; b_2 = 8500; k_2 =4000; b_3 =17000; k_3 = 8.300; s_3 =
    14500;

    cout << "===================================================" << endl;
    cout << " Kode Susu | Nama Produk | Ukuran    | Harga       " << endl;
    cout << "===================================================" << endl;
    cout << " 1         | Dancow      | B = Besar | Rp. 10.000,-" << endl;
    cout << "           |             | S = Sedang| Rp.  4.250,-" << endl;
    cout << "           |             | K = Kecil | Rp.  2.100,-" << endl;
    cout << "===================================================" << endl;
    cout << " 2         | Indomilk    | B = Besar | Rp.  8.500,-" << endl;
    cout << "           |             | S = Sedang| Rp.  4.000,-" << endl;
    cout << "           |             | K = Kecil | Rp.  2.025,-" << endl;
    cout << "===================================================" << endl;
    cout << " 3         | Sustacal    | B = Besar | Rp. 17.000,-" << endl;
    cout << "           |             | S = Sedang| Rp. 14.500,-" << endl;
    cout << "           |             | K = Kecil | Rp.  8.300,-" << endl;
    cout << "===================================================" << endl;

    cout << "Masukan kode susu: ";
    cin >> kode;
    cout<<"Masukan ukuran susu :";
    cin>>ukuran;
    cout<<"Masukan jumlah pembelian :";
    cin>> jmlh;

   if (kode == 1 && ukuran == 'b')
        cout << "susu dancow \nharga susu Rp"<<jmlh * b_1;

    else if (kode == 1 && ukuran == 's')
        cout << "susu dancow \nharga susu Rp"<<jmlh * s_1;

    else if (kode == 1 & ukuran == 'k')
        cout << "susu dancow \nharga susu Rp"<<jmlh * k_1;

    else if (kode == 2 && ukuran == 'b')
        cout << "susu indomilk \nharga susu Rp"<<jmlh * b_2;

    else if (kode == 2 && ukuran == 's')
        cout << "susu indomilk \nharga susu Rp"<<jmlh * s_2;

    else if (kode == 2 & ukuran == 'k')
        cout << "susu indomilk \nharga susu Rp"<<jmlh * k_2;

    else if (kode == 3 && ukuran == 'b')
        cout << "susu sustacal \nharga susu Rp"<<jmlh * b_3;

    else if (kode == 3 && ukuran == 's')
        cout << "susu sustacal \nharga susu Rp"<<jmlh * s_3;

    else if (kode == 3 & ukuran == 'k')
        cout << "susu sustacal \nharga susu Rp"<<jmlh * k_3;
    else
        cout<<"input yang anda masukan salah"<<endl;

        return 0;
}
