#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <stdlib.h>
#include "FirstWindow.h"

using namespace std;

string username, color; // Global variables
char pass[32]; // in order to store password

bool isNumeric(string username) {
	for (int i = 0; i < username.length(); i++)
		if (isdigit(username[i]) == false)
			return false; // returns false when one non numeric value is found
	return true;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void registration()
{
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Registration °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
start_again:
	cout << "Username: ";
	cin >> username;
	if (isNumeric(username)) {  // cheking whether the input is consisted of only numbers or not
		cout << "Please, write your name!" << endl; // if the input is consisted of only numbers then gives a chance to re-enter the username
		goto start_again;
	}
try_again:
	cout << "Password: ";
	int i = 0;
	char a; // a Temp char
	for (i = 0; ; ) // an infinite loop
	{
		a = _getch(); // stores char typed a
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z') || (a >= '0' && a <= '9')) // check if a is  numeric or alphabet
		{
			pass[i] = a; // to store a in pass
			++i;
			cout << "*";
		}
		if (a == '\b' && i >= 1) // if user typed backspace; i should be greater than 1
		{
			cout << "\b \b"; // rub the character behind the cursor
			--i;
		}
		if (a == '\r') // if enter is pressed 
		{
			pass[i] = '\0';  // null means end of string
			break; // break the loop
		}
	}
	if (i <= 5) // Check for minimum characters needed
	{
		cout << "\nMinimum 6 characters needed. \nEnter again..." << endl; // password should consist at least 6 characters
		_getch(); // to pause
		goto try_again;
	}
	cout << "\nPlease enter your favorite color : "; cin >> color; // In case a user forgets his/her data then he/she will be able to see their data by entering their favourite color's name
	cout << "In case you forget your username or password, you can see your data by entering your favorite color" << endl;
	cout << "\nThe account has been successfully created!" << endl << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° PLEASE PRESS ENTER TO LOG IN °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
	system("pause>0");
	system("cls");
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void login()
{	
	string p, g, name, chance, col, anch; 
	string choice, operation;
	int balance = 1000000, payment;
	string password, a, b, receiver;
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Log in °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
againn:
	cout << "Username: ";
	cin >> name;
	if (name == username) { // if entered name is the same as the username(previously registered name), then do the followings:
	againnn:
		cout << "\nPassword: ";
		char p[32]; // in order to store password
		int n = 0;
		char s; // a Temp char
		for (n = 0; ; ) // an infinite loop
		{
			s = _getch(); // stores char typed a
			if ((s >= 'a' && s <= 'z') || (s >= 'A' && s <= 'Z') || (s >= '0' && s <= '9')) // check if a is  numeric or alphabet
			{
				p[n] = s; // to store a in pass
				++n;
				cout << "*";
			}
			if (s == '\b' && n >= 1) // if user typed backspace; i should be greater than 1
			{
				cout << "\b \b"; // rub the character behind the cursor
				--n;
			}
			if (s == '\r') // if enter is pressed 
			{
				p[n] = '\0';  // null means end of string
				break; // break the loop
			}
		}
		if (string(p) == string(pass)) { // if the password entered here is the same as the password registered go further ...
			cout << endl;
			cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
			cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° PLEASE PRESS ENTER TO CONTINUE °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
			cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
			system("pause>0");
			system("cls");


			cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
			cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Welcome " << username << " to your private account! °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
			cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
		operations:
			cout << "1 - Balance" << endl;
			cout << "2 - Payment" << endl;
			cout << "3 - Transaction" << endl;
			cout << "4 - Log out" << endl;
			cin >> operation;
			if (operation == "1") {  // if a user wants to check his/her balance =>
				cout << "$" << balance << endl << endl;
				goto operations;
			}
			else if (operation == "2") { // if a user wants to make a payment for smth =>

				cout << "How much money you want to spend?" << endl;
				cout << "$";           // user enters the amount of money he/she wants to spend
				cin >> payment;
				if (payment > balance) // if the amount of expenditure is bigger than balance, then show the following to express that he/she can't afford 
				{
					cout << "You can not afford to pay" << endl;
					cout << "Your current balance : $" << balance << endl;
					goto operations;
				}
				else {  // if the amount of expenditure is NOT bigger than balance => 
					cout << "\n$" << payment << " has been deducted from your account" << endl;
					balance = balance - payment;
					cout << "Your current balance : $" << balance << endl;
				}


			again:
				cout << "1 - Balance" << endl;
				cout << "2 - Pay" << endl;
				cout << "3 - Transaction" << endl;
				cout << "4 - Log out" << endl;
				cin >> operation;
				if (operation > "0" && operation < "5") {
					if (operation == "1") {
						cout << balance << endl << endl;
						goto again;
					}
					else if (operation == "2") {
						while (balance > 0) {
							cout << "How much money you want to spend?" << endl;
							cout << "$";
							cin >> payment;
							if (balance > payment) {
								cout << "\n$" << payment << " has been deducted from your account" << endl;
								balance = balance - payment;
								cout << "Your current balance : $" << balance << endl;
								goto again;
								break;
							}
							else {
								cout << "You can not afford to pay " << endl;
								cout << "Your current balance : $" << balance << endl;
								goto again;
								break;
							}
							balance--;
						}
					}
					else if (operation == "3") {

						while (balance > 0) {
						recusename:
							cout << "Please enter the receiver's username : ";
							cin >> receiver;
							if (isNumeric(receiver)) {
								cout << "\nPlease, enter existing username!" << endl;
								goto recusename;
							}
							else if (receiver == username)
							{
								cout << "\nSorry, you cannot transfer money to yourself" << endl;
								cout << "Try again!" << endl;
								goto recusename;
							}
							else {
								cout << "Please enter the sum of money you want to send : $";
								cin >> payment;
								if (balance > payment) {
									cout << "The transaction operation has been successfully done!" << endl;
									cout << "The user " << receiver << " received $" << payment << endl;
									balance = balance - payment;
									cout << "Your current balance : $" << balance << endl << endl;
									goto again;
									break;
								}
								else {
									cout << "The transaction operation failed " << endl;
									cout << "Your current balance : $" << balance << endl;
									goto again;
									break;
								}
								balance--;
							}

						}

					}
					else if (operation == "4") {
						re:
						cout << "Press 0 to re-register" << endl;
						cout << "Press 1 to exit" << endl;
						cin >> g;
						if (g == "0") {
							system("cls");
							registration();
						}
						else if (g == "1") {
							system("cls");
						}
						else {
							cout << "You are required to enter either 0 or 1" << endl;
							goto re;
						}
					}
				}
				else {
					cout << "Invalid... Try again" << endl;
					goto again;
				}
			}
			else if (operation == "3") {
			recusername:
				cout << "Please enter the receiver's username : ";  // The receiver's name
				cin >> receiver;
				if (isNumeric(receiver)) { // if isNumeric(receiver) is true then ask for a real one, that doesn't contain only numbers
					cout << "Please, enter existing username!" << endl;
					goto recusername;
				}
				else if (receiver == username) // If the receiver's name is the same as the user's username then explain that it's impossible
				{
					cout << "\nSorry, you cannot transfer money to yourself" << endl;
					cout << "Try again!" << endl; 
					goto recusername; // give a chance to re-enter
				}
				else {
					cout << "Please enter the sum of money you want to send : $"; //Clarify the amount of money to be sent to
					cin >> payment;
					if (balance > payment) { // If the amount of money to be sent is less than balance =>
						cout << "The transaction operation has been successfully done!" << endl;
						cout << "The user " << receiver << " received $" << payment << endl;
						balance = balance - payment;
						cout << "Your current balance : $" << balance << endl << endl;
					}
					else { // Otherwise, if the amount of money that the user want to send is greater than the user's balance then explain that he/she can't do it
						cout << "The transaction operation failed " << endl;
						cout << "Your current balance : $" << balance << endl; // Show his/her balance to make him/her to understand it clearly
						goto operations; // give a chance to re-enter the amount of money to be sent
					}
				}		
				

			third:
				cout << "1 - Balance" << endl;
				cout << "2 - Pay" << endl;
				cout << "3 - Transaction" << endl;
				cout << "4 - Log out" << endl;
				cin >> operation;
				if (operation > "0" && operation < "5") { // if the input is 1, 2, 3, 4
					if (operation == "1") { // Show balance
						cout << balance << endl << endl;
						goto third;
					}
					else if (operation == "2") {
						while (balance > 0) { // As long as the balnce is greater than 0
							cout << "How much money you want to spend?" << endl;
							cout << "$";
							cin >> payment;
							if (balance > payment) { // if the user's balance is greater than the expenditure =>
								cout << "\n$" << payment << " has been deducted from your account" << endl;
								balance = balance - payment;
								cout << "Your current balance : $" << balance << endl;
								goto third;
								break; // stop and exit the loop
							}
							else { // Otherwise, =>
								cout << "You can not afford to pay " << endl;
								cout << "Your current balance : $" << balance << endl;
								goto third;
								break;
							}
							balance--; // decriment
						}
					}
					else if (operation == "3") {

						while (balance > 0) {
						receivername:
							cout << "Please enter the receiver's username : ";
							cin >> receiver;
							if (isNumeric(receiver)) {
								cout << "Please, enter existing username!" << endl;
								goto receivername;
								break;
							}
							else if (receiver == username) // If the user enters his/her own username=>
							{
								cout << "\nSorry, you cannot transfer money to yourself" << endl;
								cout << "Try again!" << endl;
								goto receivername; // Give a chance to re-enter the receiver's username
							}
							else {
								cout << "Please enter the sum of money you want to send : $";
								cin >> payment;
								if (balance > payment) { // If the user can afford =>
									cout << "The transaction operation has been successfully done!" << endl;
									cout << "The user " << receiver << " received $" << payment << endl;
									balance = balance - payment;
									cout << "Your current balance : $" << balance << endl << endl;
									goto third;
									break;
								}
								else { // If the user's balance is not enough to make a payment =>
									cout << "You can not afford to pay " << endl;
									cout << "Your current balance : $" << balance << endl;
									goto third;
								}
								balance--; // decriment
							}
							
						}

					}
					else if (operation == "4") {
					ree:
						cout << "Press 0 to re-register" << endl; // if the user want to re-open the registrantion window
						cout << "Press 1 to exit" << endl; // if the user wants to exit the program
						cin >> g;
						if (g == "0") {
							system("cls");
							registration(); // if user enters 0, then close the window and open registration window
						}
						else if (g == "1") {
							system("cls");  // if user enters 1, then close the window 
						}
						else {
							cout << "You are required to enter either 0 or 1" << endl; // in case the user enters non-required input
							goto ree;
						}
					}
				}
				else {
					cout << "Invalid... Try again" << endl; // if the input is not 1, 2, 3, 4
					goto third;
				}
			}
			else if (operation == "4") {
				cout << " " << endl;
				system("cls");
			reee:
				cout << "Press 0 to re-register" << endl;
				cout << "Press 1 to exit" << endl;
				cin >> g;
				if (g == "0") {
					system("cls");
					registration();
					login();
				}
				else if (g == "1") {
					system("cls");
				}
				else {
					cout << "You are required to enter either 0 or 1" << endl;
					goto reee;
				}
			}
			else {
				cout << "\nInvalid... \nTry again" << endl;
				goto operations;
			}
		}
		else {
			cout << "\nWrong password" << endl; // in case the user enters wrong password to log in
			ch:
			cout << "Press 0 to exit" << endl;
			cout << "Press 1 to see your password" << endl;
			cout << "Press 2 to try again" << endl;
			cin >> chance;
			if (chance == "0") {
				system("cls"); // if the user entered 0, then close the system
			}
			else if (chance == "1") // If the user entered 1, then ask for his favourit color's name
			{
			quest:
				cout << "What is your favorite color?" << endl;
				cin >> col;
				if (col == color) {     // if the name of color is the same as the user's favourite color then show him/her the password
					system("cls");
					cout << "Your password : " << pass << endl;
					cout << "Press any key to log in" << endl;
					system("pause>0");
					system("cls");
					login(); // to go back to log in window
				}
				else {      // if the name of color is NOT the same as the user's favourite color then give a chance to  re-try, to exit, and to go back
					cout << "\nWrong!" << endl;
				opti:
					cout << "Press 0 to exit" << endl;
					cout << "Press 1 to try again" << endl;
					cout << "Press 2 to go back" << endl;
					cin >> anch;
					if (anch == "0") {
						system("cls");
					}
					else if (anch == "1") {
						goto quest;
					}
					else if (anch == "2") {
						system("cls");
						goto ch;
					}
					else {
						cout << "\nYou are required to press 0, 1 or 2 " << endl;
						goto opti;

					}
				}
			}
			else if (chance == "2")
			{
				goto againnn;
				system("cls");
			}
			else { // In case the user entered non-required input
				cout << "\nYou are required to press 0, 1 or 2 " << endl;
				goto ch; // Give a chance to re-try
			}
		}
	}
	else { // in case the user enters wrong username to log in
		cout << "\nWrong username" << endl;
		cha:
		cout << "Press 0 to exit" << endl;
		cout << "Press 1 to see your username" << endl;
		cout << "Press 2 to try again" << endl;
		cin >> chance;
		if (chance == "0") {
			system("cls");  // if the user entered 0, then close the system
		}
		else if (chance == "1") // If the user entered 1, then ask for his favourit color's name
		{
		ques:
			cout << "What is your favorite color?" << endl;
			cin >> col;
			if (col == color) {  // if the name of color is the same as the user's favourite color then show him/her the username
				system("cls");
				cout << "Your username : " << username << endl;
				cout << "Press any key to log in" << endl;
				system("pause>0");
				system("cls");
				login(); // to go back to log in window
			}
			else {
				cout << "\nWrong!" << endl;  // if the name of color is NOT the same as the user's favourite color then give a chance to  re-try, to exit, and to go back
			opt:
				cout << "Press 0 to exit" << endl;
				cout << "Press 1 to try again" << endl;
				cout << "Press 2 to go back" << endl;
				cin >> anch;
				if (anch == "0") {
					system("cls");
				}
				else if (anch == "1") {
					goto ques;
				}
				else if (anch == "2")
				{
					system("cls");
					goto cha;
				}
				else {
					cout << "\nYou are required to press either 0, 1 or 2 " << endl;
					goto opt;

				}
			}
		}
		else if (chance == "2")
		{
			goto againn;
			system("cls");
		}
		else {  // In case the user entered non-required input
			cout << "\nYou are required to press 0, 1 or 2 " << endl;
			goto cha; // Give a chance to re-try
		}
	}

}
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	fwindow(); // First of all, open the First Window
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° Cyber Management System welcomes you! °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°° As a first - time user, you are required to register °°°°°°°°°°°°°°°°°°°°°°°°°" << endl; // Ask for a registration
	cout << "                                       " << endl;
	registration(); // call registration function 
	login(); // if the registration has been successfully passed, then call login function

	system("pause");
	return 0;
}