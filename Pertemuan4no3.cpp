#include<iostream>
using namespace std;
int main (){
    int tahun;
    cout << "Masukan Tahun Anda: ";
    cin >> tahun;

    if(tahun%4==0){
        cout << "Tahun tersebut merupakan tahun kabisat";
    }else if(tahun%400==0){
        cout << "Tahun tersebut merupakan tahun kabisat";
    }else if(tahun%100==0){
        cout << "Tahun tersebut bukan merupakan tahun kabisat";
    }else{
        cout << "Tahun tersebut bukan merupakan tahun kabisat";
    }
    return 0;


}
