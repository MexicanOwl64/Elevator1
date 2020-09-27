#include <iostream>
using namespace std;

int main()
{
    // Integers needed
    int numberOfFloors;
    int endingFloor;
    bool end = true;
    int ending;

    
    // loops until user wants to exit the program
    while (end == true)
    {
        //ask how many floors the user wants to implement
        cout << "Enter the number of floors that you want: ";
        cin >> numberOfFloors;

        for (int i = 1; i <= numberOfFloors; ++i)
        {
            cout << i << " ";

        }

        //ask what floor the user wants to go to
        cout << "\nWhat floor do you want to go to: ";
        cin >> endingFloor;

        //if the user ask for a floor number that is not in the building it will print this
        if (endingFloor > numberOfFloors)
        {
            cout << "\nThe building only has " << numberOfFloors << " floors";
        }

        else 
        {
            // to simulate going from floor to floor to the desired floor
            for (int i = 1; i <= endingFloor; ++i)
            {
                cout << "\nYou are currently on floor " << i;
            }

            cout << "\n ";

            cout << "\nYou have arrived at floor " << endingFloor;                  
        }

        //ask the user if they want to keep using the program or not
        cout << "\nDo you want to exit out of the program?";

        cout << "\nPress 1 to exit";
        cout << "\nPress 2 to continue using the elevator: ";
        cin >> ending;
        if (ending == 1)
        {
            // exits out of the program
            end = false;
        }
        
    }
    return 0;
}