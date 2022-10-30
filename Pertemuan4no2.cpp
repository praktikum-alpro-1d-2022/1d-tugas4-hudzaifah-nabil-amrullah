#include<iostream>
using namespace std;
int main() {
    string username, password;
    cout << "Masukan Username: ";
    cin >> username;
    cout << "Masukan Password: ";
    cin >> password;

    if(username == "Admin" && password == "Admin123"){
        cout << "Username dan Password sesuai, Login berhasil";
    }else if(username == "Admin" && password != "Admin123"){
        cout << "Username sesuai,password tidak sesuai";
    }else if(username != "Admin" && password == "Admin123"){
        cout << "Username tidak sesuai,password sesuai";
    }else{
        cout << "Username dan password tidak sesuai";
    }
    return 0;
}

