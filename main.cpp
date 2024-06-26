#include <iostream>
#include "Vehicle.h"
#include "Customer.h"
using namespace std;

int displayMenu();


void DisplaySales(int salesDay, int salesWeek, int salesMonth);


//Input: Vehicle and custmer data read from file. User input to navigate menus to search. MD
//Process: Files are read and vectors of vehicles and customers are made. The user navitages menus to search for vehicles and customers based on specific data values. Sales data can also be searched. MD
//Output: The program outputs the result of the user's search. MD
int main() {
    int salesDay, salesWeek, salesMonth = 0;
    DisplaySales(salesDay, salesWeek, salesMonth);

  
}//end main

void DisplaySales(int salesDay, int salesWeek, int salesMonth) {
    cout << "Sales today: $" << salesDay << endl;
    cout << "Sales this week: $" << salesWeek << endl;
    cout << "Sales this month: $" << salesMonth << endl;

} 

int displayMenu() {

//I: User inputs number corresponding to the 3 different choices; searchInventory, displaySales, or customerList
//P: Validate input
//O: Output user choice

int userChoice = 0;
   
   cout << "Welcome to the Front Range Community Car Lot Database!" << endl; 
   cout << "| Would you like to search:                          |" << endl;
   cout << "| 1. Inventory                                       |" << endl;
   cout << "| 2. Sales Data                                      |" << endl;
   cout << "| 3. List of Customers                               |" << endl << endl;
   cout << "Enter Choice: ";
   
   cin >> userChoice;
    
   if (userChoice < 1 || userChoice  > 3) {
      cout << endl << "Please input a valid number" << endl;
   }else{
      return userChoice;
   }//end if-else
   
   return 0;
   
}//end displayMenu

