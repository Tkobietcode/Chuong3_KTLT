#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

// 8. Chương trình xóa 1 từ cho trước trong chuỗi.
string xoaTu(const string& str, const string& tuXoa) {
    string result = str;
    size_t pos = result.find(tuXoa);
    if (pos != string::npos) {
        result.erase(pos, tuXoa.length() + 1);
    }
    return result;
}

int main() {
    // Test cac ham da viet
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    cout << "Chuoi ban vua nhap la: " << str << endl;

      string tuXoa;
      cout << "Nhap tu can xoa: ";
      cin >> tuXoa;
      string strSauKhiXoa = xoaTu(str, tuXoa);
      cout << "Chuoi sau khi xoa: " << strSauKhiXoa << endl;

   

    return 0;
}