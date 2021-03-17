#include<iostream>
#include"Student.h"

using namespace std;

int main() {
    string key;
    cout << "ÇëÊäÈëÃÜÂë" << endl;
    cin >> key;
    Stu st1("ÀîËÄ", "11111111", "ÄĞ", "000000", 18, 520);
    st1.PassKey(key);
    system("pause");
    cout << "³¢ÊÔÔËËã·ûÖØÔØ" << endl;
    system("pause");
    cout << st1;
    system("pause");
    return 0;
}