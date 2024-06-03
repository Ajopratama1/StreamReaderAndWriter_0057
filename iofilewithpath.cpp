#include <fstream> 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;
    ofstream outfile;
    outfile.open(NamaFile + ".txt", ios::out);

    while(true) {
        cout << "-";
        getline(cin, baris);
        if(baris == "q")break;
        outfile << baris << endl;
    }

    