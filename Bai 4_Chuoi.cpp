#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

// 4. Hàm đổi chữ cái đầu mỗi từ thành chữ in hoa, các chữ còn lại in thường.
string chuanHoaChuoi(string str) {
    str[0] = toupper(str[0]);
    for (int i = 1; i < str.length(); i++) {
        if (isspace(str[i - 1])) {
            str[i] = toupper(str[i]);
        }
        else {
            str[i] = tolower(str[i]);
        }
    }
    return str;
}

int main() {
    // Test cac ham da viet
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);

    cout << "Chuoi ban vua nhap la: " << str << endl;

    

     string strChuanHoa = chuanHoaChuoi(str);
     cout << "Chuoi sau khi chuan hoa: " << strChuanHoa << endl;

    
    return 0;
}