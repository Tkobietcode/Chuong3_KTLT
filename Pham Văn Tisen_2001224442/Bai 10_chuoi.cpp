#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

// 10. Tìm kiếm ký tự xuất hiện nhiều nhất trong chuỗi.
char kyTuXuatHienNhieuNhat(const string& str) {
    int maxCount = 0;
    char kyTuNhieuNhat = '\0';
    for (int i = 0; i < str.length(); i++) {
        int count = 0;
        for (int j = 0; j < str.length(); j++) {
            if (str[i] == str[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            kyTuNhieuNhat = str[i];
        }
    }
    return kyTuNhieuNhat;
}

int main() {
    // Test cac ham da viet
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    cout << "Chuoi ban vua nhap la: " << str << endl;


    char kyTuNhieuNhat = kyTuXuatHienNhieuNhat(str);
    cout << "Ky tu xuat hien nhieu nhat: " << kyTuNhieuNhat << endl;

    return 0;
}