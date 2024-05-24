#include <iostream>
#include <string>

using namespace std;
enum enWeekDay { Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7 };
void ShowWekksDayMube(){
    cout << "**************\n";
    cout << "week day\n";
    cout << "**************\n";
cout << "[1] sunday\n";
    cout << "[2] monday\n";
    cout << "[3] tuesday\n";
    cout << "[4] wednesday\n";
    cout << "[5] thursday\n";
    cout << "[6] friday\n";
    cout << "[7] saturday\n";
    cout << "**************\n";
    cout << "plase enter your day\n";
}
enWeekDay ReadWeekDay(){
    int wd;
    cin >> wd;
    return (enWeekDay)wd;
}
string GetWeekDay(enWeekDay WeekDay){
    switch(WeekDay){
        case enWeekDay::Sun:
        return "sunday";
        break;
        case enWeekDay::Fri:
        return "friday";
        break;
        case enWeekDay::Mon:
        return "monday";
        break;
        case enWeekDay::Tue:
        return "tuesday";
        break;
        case enWeekDay::Wed:
        return "wednesday";
        break;
        case enWeekDay::Thu:
        return "thursday";
        break;
        case enWeekDay::Sat:
        return "saturday";
            break;
default:
return" wrong day";
    }
}
int main(){
    ShowWekksDayMube();
    cout << "today is " << GetWeekDay(ReadWeekDay());

return 0;
}