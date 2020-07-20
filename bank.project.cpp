#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;
// Headers
string toString (double);
int toInt (string);
double toDouble (string);
int main() {
string customerName[5];

customerName[1] = "Robert Brown";
customerName[2] = "Lisa White";
customerName[3] = "Mark Black";
customerName[4] = "Lee Ann Smith";
string username[5];

username[1] = "rbrown";
username[2] = "lwhite";
username[3] = "mblack";
username[4] = "dsmith";
string password[5];

12

password[1] = "blue123";
password[2] = "red456";
password[3] = "green789";
password[4] = "yellow136";
string savingAccountBalance[5];

savingAccountBalance[1] = "Two-thousand five-hundred";
savingAccountBalance[2] = "Five hundred";
savingAccountBalance[3] = "Seven hundred fifty";
savingAccountBalance[4] = "Six hundred";
string checkingAccountBalance[5];

checkingAccountBalance[1] = "Thirty-five";
checkingAccountBalance[2] = "One-thousand-two-hundred-fifty";
checkingAccountBalance[3] = "Two-hundred";
checkingAccountBalance[4] = "Nine-hundred";
string currentBalance[5];

currentBalance[1] = "SavingAccountBalance[1] + CheckingAccountBalance[1]";
currentBalance[2] = "SavingAccountBalance[2] + CheckingAccountBalance[2]";
currentBalance[3] = "SavingAccountBalance[3] + CheckingAccountBalance[3]";
currentBalance[4] = "SavingAccountBalance[4] + CheckingAccountBalance[4]";
cin >> username[1];
cin >> password[1];

13

// if (Conditional) {
cout << "Please select a Banking Account option: " << endl;
AccountSelection[1] = "SavingAccountBalance[1]" || "CheckingAccountBalance[1]";
if ("SavingAccountBalance[1]") {
cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> DepositAmount1;
DepositWithdrawalAmount1 = "SavingAccountBalance[1]+";
cout << "Your Saving Account Balance is now: SavingAccountBalance[1]+ " << endl;
} else {
do {
cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> WithdrawalAmount1;
WithdrawalAmount1 = "CheckingAccountBalance[1]-";
cout << "Your Checking Account Balance is now: CheckingAccountBalance[1]-" <<
endl;
} while ("CheckingAccountBalance[1]");
}
cout << "Your Current Overall Balance is now: SavingAccountBalance[1] +
CheckingAccountBalance[1]";
// } else {
cout << "Wrong Password" << endl;
// }
cin >> username[2];
cin >> password[2];
// if (Conditional) {

14

cout << "Please select a Banking Account option: " << endl;
AccountSelection[2] = "SavingAccountBalance[2]" || "CheckingAccountBalance[2]";
if ("SavingAccountBalance[2]") {
cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> DepositAmount2;
DepositWithdrawalAmount1 = "SavingAccountBalance[2]+";
cout << "Your Saving Account Balance is now: SavingAccountBalance[2]+ " << endl;
} else {
do {
cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> WithdrawalAmount2;
WithdrawalAmount1 = "CheckingAccountBalance[2]-";
cout << "Your Checking Account Balance is now: CheckingAccountBalance[2]-" <<
endl;
} while ("CheckingAccountBalance[2]");
}
cout << "Your Current Overall Balance is now: SavingAccountBalance[2] +
CheckingAccountBalance[2]" << endl;
// } else {
cout << "Wrong Password" << endl;
// }
// if (Conditional) {
cout << "Please select a Banking Account option: " << endl;
AccountSelection[3] = "SavingAccountBalance[3]" || "CheckingAccountBalance[3]";
if ("SavingAccountBalance[3]") {

15

cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> DepositAmount3;
DepositWithdrawalAmount3 = "SavingAccountBalance[3]+";
cout << "Your Saving Account Balance is now: SavingAccountBalance[3]+ " << endl;
} else {
do {
cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> WithdrawalAmount3;
WithdrawalAmount3 = "CheckingAccountBalance[3]-";
cout << "Your Checking Account Balance is now: CheckingAccountBalance[3]-" <<
endl;
} while ("CheckingAccountBalance[3]");
}
cout << "Your Current Overall Balance is now: SavingAccountBalance[3] +
CheckingAccountBalance[3]" << endl;
// } else {
cout << "Wrong Password" << endl;
// }
// if (Conditional) {
cout << "Please select a Banking Account option: " << endl;
AccountSelection[4] = "SavingAccountBalance[4]" || "CheckingAccountBalance[4]";
if ("SavingAccountBalance[4]") {
cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> DepositAmount4;
DepositWithdrawalAmount4 = "SavingAccountBalance[4]+";

16
cout << "Your Saving Account Balance is now: SavingAccountBalance[4]+ " << endl;
} else {
do {
cout << "How much would you like to deposit or withdrawal?" << endl;
cin >> WithdrawalAmount4;
WithdrawalAmount4 = "CheckingAccountBalance[4]-";
cout << "Your Checking Account Balance is now: CheckingAccountBalance[4]-" <<
endl;
} while ("CheckingAccountBalance[4]");
}
cout << "Your Current Overall Balance is now: SavingAccountBalance[4] +
CheckingAccountBalance[4]" << endl;
// } else {
cout << "Wrong Password" << endl;
// }
cout << "Thank You! Have a Nice Day!" << endl;
return 0;
}
// The following implements type conversion functions.
string toString (double value) { //int also
stringstream temp;
temp << value;
return temp.str();
}
int toInt (string text) {

17

return atoi(text.c_str());
}
double toDouble (string text) {
return atof(text.c_str());
}
