#include <iostream>
#include <string>

using namespace std;

int main() {

// int time = 18;
// if( time < 10){
//     cout << "good moring" << "\n";
// }
// else if (time < 20)
// {
//     cout << "good day" << "\n";
// }else{
//     cout << "good evening" << "\n";

// }
// cout << "*****************";
// int Grade;
// cout << "plase enter Grade number ";
// cin>> Grade;
// if(Grade >= 90){
//     cout << "A" << "\n";
// }
// else if (Grade >= 80)
// {
//     cout << "B" << "\n";
// }

// else if (Grade >= 70)
// {
//     cout << "C" << "\n";
// }

// else if (Grade >= 60)
// {
//     cout << "D" << "\n";
// }

// else if (Grade >= 50){
//     cout << "E" << "\n";
// }
// else{
//     cout << "F" << "\n";
// }

// Problem:
// Write a program to ask the user to enter: • Grade
// Then print the grade as follows: • 90 – 100 Print A
// • 80 – 89 Print B
// • 70 – 79 Print C
// • 60 – 69 Print D
// • 50 – 59 Print E
// • Otherwise Print F
// Example Inputs:
// 95
// Outputs
// A
// 33
// cout << "*****************";
// Problem:
// Write a program to ask the user to enter: • TotalSales
// The commission is calculated as one percentage * the total sales amount, all you need is to decide which percentage to use of the following: • > 1000,000  Percentage is 1%
// • > 500K to 1M  Percentage is 2%
// • > 100K – 500K  Percentage is 3%
// • > 50K to 100K  Percentage is 5%
// • Otherwise  Percentage is 0%
// Example Inputs:
// 110,000
// Outputs
// 3,300
// int totalsales;
// double percentage;
// cout << "enter totalsales \n ";
// cin>> totalsales;
// if(totalsales >= 1000000){
//     percentage = 0.01;
// }
// else if (totalsales >= 500000){
//     percentage = 0.02;
// }
// else if(totalsales >= 100000){
//     percentage = 0.03;
// }
//  else if(totalsales >= 50000){
//     percentage = 0.05;
// }
// else{
//     percentage = 0;
// }
// int totalcomission = percentage * totalsales;
// cout << "totalcomission " <<totalcomission << "\n";
//34
// cout << "*****************";
// int num1;
// cout << "num1 ";
// cin >> num1;
// char op;
// cout << " op ";
// cin >> op;
// int num2;
// cout << "num2 ";
// cin >> num2;

// if(op == '+'){
//  cout << num1+num2 << "\n";
// }
// else if (op =='-')
// {
//     cout << num1-num2 << "\n";
// }
// else if (op == '/')
// {
//     cout <<  num1/num2 << "\n";
// }
// else if (op == '*')
// {
//     cout <<  num1*num2 << "\n";
// }
// else{
//     cout << " wrong operation" << "\n";
// }
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
//36
*/
// cout << "*****************";
// Problem:
// Write a program to ask the user to enter: • Day
// Then print the day as follows: • 1 Print Sunday
// • 2 Print Monday
// • 3 Print Tuesday
// • 4 Print Wednesday
// • 5 Print Thursday
// • 6 Print Friday
// • 7 Print Saturday
// • Otherwise print “Wrong Day” and ask the use to enter the day again. 
// Example Inputs:
// 6
// Outputs
// Its Friday
//44
// int Day;
// cout << "Read Day";
// cin>> Day;
// if(Day ==1){
//     cout << "Saturday " << "\n";
// }
// if(Day == 2){
//     cout << "Sunday" << "\n";
// }
// else if(Day == 3){
//     cout << "Monday" << "\n";
// }
// else if(Day == 4){
//     cout << " Tuesday" << "\n";
// }
// else if(Day == 5){
//     cout << " Wednesday" << "\n";
// }
// else if(Day == 6){
//     cout << " Thursday" << "\n";
// }
// else if(Day == 7){
//     cout << " Friday" << "\n";
// }
// else{
//     cout << "Wrong Day" << "\n";
// }
// cout << "*****************";
/*
problem:
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
// 45
*/
int m;
cout << "plase enter month \n";
cin >> m;
if(m==1){
    cout << "January" << "\n";
}

else if(m==2){
    cout << "February" << "\n";
}
else if(m==3){
    cout << "March " << "\n";
}
else if(m==4){
    cout << "April " << "\n";
}
else if(m==5){
    cout << "May" << "\n";
}
else if(m==6){
    cout << "June" << "\n";
}
else if(m==7){
    cout << "July" << "\n";
}
else if(m==8){
    cout << "August" << "\n";
}
else if(m==9){
    cout << "September " << "\n";
}
else if(m==10){
    cout << "October " << "\n";
}
else if(m==11){
    cout << "November " << "\n";
}
else if(m==12){
    cout << "December " << "\n";
}
else {
    cout << "wrong month" << "\n";
}
    return 0;

}

