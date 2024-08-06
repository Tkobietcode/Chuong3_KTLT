#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

// 2. Hàm đếm số khoảng trắng trong chuỗi.
int demKhoangTrang(const string& str) {
    int count = 0;
    for (char c : str) {
        if (isspace(c)) {
            count++;
        }
    }
    return count;
}

int main() {
    // Test cac ham da viet
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    cout << "Chuoi ban vua nhap la: " << str << endl;

    int soKhoangTrang = demKhoangTrang(str);
    cout << "So khoang trang trong chuoi: " << soKhoangTrang << endl;

    
    return 0;
}