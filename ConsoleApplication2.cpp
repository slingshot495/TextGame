// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cstdlib>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv) {

	int sel;
	char name[50];

	printf("Welecome to ________.\n1) Begin your Journey \n2) Continue your Journey \n3) Options \n0) Exit\n");

	scanf_s("%d", &sel);

	if (sel == 1)
	{
		cout << "What is your name?\n";
		cin >> name;

		/*cout << "\n" << name << " begins his Journey in a small town known as Cedar.\n"
			"You are 19 years old and you are currently enrolled in university life.\n"
			"When you are not at school you live with your wealthy parents "
			"in their Pent house.\n";

		cout << "\nYou wake up on a warm gloomy day with excitement in your eyes\n"
			"as you have plans to explore the city with your friends.";

		cout << "\nAfter you get ready to go out you look around your room and decide on what you are going to take with you.";
		*/
	}
	else if (sel == 2)
	{
		printf("Enter a file name to load: ");

	}
	else if (sel == 3)
	{

	}
	else if (sel == 0)
	{

		printf("Closing Application.");

	}

	cout << "\n" << name << " begins his Journey in a small town known as Cedar.\n"
		"You are 19 years old and you are currently enrolled in university life.\n"
		"When you are not at school you live with your wealthy parents "
		"in their Pent house.\n";

	cout << "\nYou wake up on a warm gloomy day with excitement in your eyes\n"
		"as you have plans to explore the city with your friends.\n";

	cout << "\nAfter you get ready to go out you look around your room and decide on what you are going to take with you.\n"
			 "1) Bookbag\n2) Draw String Bag\n3) Nothing\n";
	
	scanf_s("%d", &sel);

	if (sel == 1)
	{
		cout << "\nYou choose to take the Book Bag\n";
	}
	else if (sel == 2)
	{
		cout << "\nYou choose to take the Draw String Bag\n";
	}
	else if (sel == 3)
	{
		cout << "\nYou choose to take nothing\n";
	}


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


