#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

// 6. Hàm cắt chuỗi họ tên thành chuỗi họ lót và chuỗi tên.
pair<string, string> catChuoiHoTen(const string& hoTen) {
    string hoLot = "", ten = "";
    istringstream iss(hoTen);
    string temp;
    while (iss >> temp) {
        if (temp != hoTen.substr(hoTen.find_last_of(" ") + 1)) {
            hoLot += temp + " ";
        }
        else {
            ten = temp;
        }
    }
    return make_pair(hoLot, ten);
}

int main() {
    

        string hoTen, tenCanTim;
       cout << "Nhap ho va ten: ";
       getline(cin, hoTen);
       

     pair<string, string> hoVaTen = catChuoiHoTen(hoTen);
     cout << "Ho va lot: " << hoVaTen.first << endl;
     cout << "Ten: " << hoVaTen.second << endl;

     

    return 0;
}