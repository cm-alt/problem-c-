#include <iostream>
#include <string>

using namespace std;

// enum enscreancolor {red=1, blue=2, green=3, yellow=4};
enum encountry {egypt=1, lraq=2, oman=3, morocco =4 , others =5};

int main() {
// cout << "*************\n";
// cout << "plase enter your color\n";
// cout << " Red [1]\n";
// cout << " Green [2]\n";
// cout << " bule [3]\n";
// cout << " Green [4]\n";
// cout << "*************\n";
//     cout << "Your choice\n";
// int c;
// enscreancolor color;
// cin >> c;
// color = (enscreancolor)c;
// if(color == enscreancolor::red){
//     system("color 4f");
// }
// else if(color == enscreancolor::blue){
//     system("color 1f");
// }
// else if(color == enscreancolor::green){
//     system("color 2f");
// }
// else if(color == enscreancolor::yellow){
//     system("color 6f");
// }
// else{
//     system("color 4f");

// }

cout << "*************\n";
cout << "plase enter your country\n";
cout << " Egypt [1]\n";
cout << " Lraq [2]\n";
cout << " Oman [3]\n";
cout << " Morocco [4]\n";
cout << "*************\n";
    cout << "Your choice\n";
int c;
encountry country;
cin >> c;
country = (encountry)c;
if(country == encountry::egypt){
    cout << "welcome to in egypt\n";
}
else if(country == encountry::lraq){
    cout << "welcome to in lraq\n";
}
else if(country == encountry::morocco){
    cout << "welcome to in morocco\n";
}

else if(country == encountry::oman){
cout << "welcome to in oman";
}
else {
    cout << "others countries\n";
}
    return 0;

}
