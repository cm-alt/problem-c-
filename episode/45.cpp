#include <iostream>
#include <string>

using namespace std;
// enum enColors {red=1, blue=2, Green=3, Gray=4};

int main(){
    // cout << "**************************\n";
    // cout << "(1) red\n";
    // cout << "(2) Green\n";
    // cout << "(3) blue\n";
    // cout << "(4) Gray\n";
    // cout << "**************************\n";
    
    // int c;
    // cout << "please enter c: ";
    // cin >> c;

    // enColors color = static_cast<enColors>(c);

    // switch(color){
    //     case enColors::red:
    //         system("color 4f"); // red background, white text
    //         break;
    //     case enColors::Green:
    //         system("color 2f"); // green background, white text
    //         break;
    //     case enColors::blue:
    //         system("color 1f"); // blue background, white text
    //         break;
    //     case enColors::Gray:
    //         system("color 8f"); // gray background, white text
    //         break;
    //     default:
    //         system("color 4f"); // default to red background, white text
    // }
// cout << "************\n";
/*
Problem:
Write a program to ask the user to enter: • Number1
• Number 2
• OperationType
Then perform the calculation according to the Operation Type as follows: • “+” : add the two numbers. • “-” : Subtract the two numbers. • “*” : Multiply the two numbers. • “/” : Divide the two numbers.
Example Inputs:
10
20
*
Outputs
200
proplem 36
*/
// int num1;
// int num2;
// char op;
// cout << "enter num1\n";
// cin >> num1;
// cout << "enter num2\n";
// cin >> num2;
// cout << "enter op\n";
// cin >> op;


// switch (op){
//     case '+':
//         cout << num1 + num2;
//         break;
//     case '-':
//         cout << num1 - num2;
//         break;
//     case '*':
//         cout << num1 * num2;
//         break;
//     case '/':
//         cout << num1 / num2;
//         break;
//     default:
//         cout << "invalid op";
//         break;
// }
// cout << "************\n";
/*
Problem:
Write a program to ask the user to enter: • Day
Then print the day as follows: • 1 Print Sunday
• 2 Print Monday
• 3 Print Tuesday
• 4 Print Wednesday
• 5 Print Thursday
• 6 Print Friday
• 7 Print Saturday
• Otherwise print “Wrong Day” and ask the use to enter the day again. 
Example Inputs:
6
Outputs
Its Friday
proplem 44
*/
// int day;
// cout << "enter day\n";
// cin >> day;
// switch (day){
//     case 1:
//     cout << "sat\n";
//     break;
//     case 2:
//     cout << "sun\n";
//     break;
//     case 3:
//     cout << "mon\n";
//     break;
//     case 4:
//     cout << "tue\n";
//     break;
//     case 5:
//     cout << "wed\n";
//     break;
//     case 6:
//     cout << "thu\n";
//     break;
//     case 7:
//     cout << "fri\n";
//     break;
//     default:
//     cout << "wrong day";
// }
// cout << "************\n";
/*
Problem:
Write a program to ask the user to enter: • Month
Then print the day as follows: • 1 Print January
• 2 Print February
• 3 Print March
• 4 Print April • 5 Print May
• 6 Print June
• 7 Print July
• 8 Print August
• 9 Print September
• 10 Print October
• 11 Print November
• 12 December
• Otherwise print “Wrong Month” and ask the use to enter the Month again.
Example Inputs:
11
Outputs
November
proplem 45

*/
int m;
cout << "Enter M\n";
cin>> m;
switch(m){
case 1:
    cout << "jan\n";
    break;
case 2:
    cout << "feb\n";
    break;
    case 3:
    cout << "mar\n";
    break;
    case 4:
    cout << "apr\n";
    break;
    case 5:
    cout << "may\n";
    break;
    case 6:
    cout << "jun\n";
break;
case 7:
cout << "jul\n";
break;
case 8:
    cout << "aug\n";
    break;
    case 9:
    cout << "sep\n";
    break;
    case 10:
    cout << "oct\n";
    break;
    case 11:
    cout << "nov\n";
    break;
    case 12:
    cout << "dec\n";
    break;
    default:
    cout << "wrong day\n";
}
   return 0;
}
