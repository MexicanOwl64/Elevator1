// Elevator3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

struct node
{
	int number;
	node* next;
};

void insertAsFirstElement(node*& head, node*& last, int number);
bool isEmpty(node* head)
{
	if (head == NULL)
		return true;
	else
		return false;
}

char menu()
{
	char choice;
	cout << "===============================\n";
	cout << "Welcome to the Elevator App\n";
	cout << "Menu\n";
	cout << "1. Add an floor to the building.\n";
	cout << "2. Remove a floor to the building.\n";
	cout << "3. See how many floors the building has.\n";
	cout << "4. Go to a floor\n";
	cout << "5. Exit.\n";
	cout << "===============================\n";

	cin >> choice;

	return choice;

}

void insertAsFirstElement(node*& head, node*& last, int number)
{
	node* temp = new node;
	temp->number = number;
	temp->next = NULL;
	head = temp;
	last = temp;
}
void insert(node*& head, node*& last, int number)
{
	if (isEmpty(head))
		insertAsFirstElement(head, last, number);
	else
	{
		node* temp = new node;
		temp->number = number;
		temp->next = NULL;
		last->next = temp;
	}

}

void remove(node*& head, node*& last)
{
	if (isEmpty(head))
		cout << "The building has no floors.\n";
	else if (head == last)
	{
		delete head;
		head == NULL;
		last == NULL;
	}
	else
	{
		node* temp = head;
		head = head->next;
		delete temp;
	}
}

void showList(node* current)
{
	if (isEmpty(current))
		cout << "There are no floors currently\n";
	else
	{

		while (current != NULL)
		{
			cout << "There are only " << current->number << " floors" << endl;

			current = current->next;
		}
	}

}

void GoToFloor(node*& current, int number)
{
	if (isEmpty(current))
		cout << "There are no floors currently\n";
	else
	{

		cout << "You have arrived at floor:  " << number << endl;

	}
}

int main()
{
	node* head = NULL;
	node* last = NULL;
	char choice;
	int number;

	do {
		choice = menu();

		switch (choice)
		{
		case '1': cout << "Please enter a number: ";
			cin >> number;
			insert(head, last, number);
			break;

		case '2': remove(head, last);
			break;

		case '3':
			showList(head);
			break;

		case '4':
			cout << "Pick a floor you want to go to: ";
			cin >> number;
			GoToFloor(head, number);
			break;

		default: cout << "System exit\n";


		}

	} while (choice != '5');

	return 0;
}