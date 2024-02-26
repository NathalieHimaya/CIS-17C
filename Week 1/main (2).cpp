// Nathalie Himaya
// CIS 17 C
// Assignment 0, Part A

#include <iomanip>
#include <iostream>
using namespace std;

// Constant Variable of 12
const int SIZE = 12;

// Function Prototypes
double totalAmount(double arr[SIZE], int SIZE);
double averageAmount(double arr[SIZE], int SIZE);
double largestMonth(double arr[SIZE], int SIZE);
double smallestMonth(double arr[SIZE], int SIZE);

// Main Function
int main() {
  // Variables
  double credit[SIZE];

  string months[SIZE] = {"January",   "February", "March",    "April",
                         "May",       "June",     "July",     "August",
                         "September", "October",  "November", "December"};

  cout << "Enter credit total for each month: " << endl;
  for (int i = 0; i < SIZE; i++) { // Iterates through the array
    cout << months[i] << ": ";     // Prints the Months
    cin >> credit[i];              // User Input of Credits Used in Each Month
    if (credit[i] < 0) {           // If user inserts a negative number
      credit[i] = 0;               // sets the value to be zero
    }
  }
  
  cout << endl;
  cout << "Here are the credit card totals for each month: \n";

  for (int i = 0; i < SIZE; i++) {
    cout << left << setw(9) << months[i] << right <<": $" << fixed << setprecision(2) << credit[i] << endl;
  }

  cout << endl;
  cout << "The total amount of money spent was $" << fixed << setprecision(2)
       << totalAmount(credit, SIZE) << "\n";
  cout << "The average amount of money spent per month was $" << fixed
       << setprecision(2) << averageAmount(credit, SIZE) << "\n";
  cout << "The most amount of money spent in a month was $" << fixed
       << setprecision(2) << largestMonth(credit, SIZE) << "\n";
  cout << "The least amount of money spent in a month was $" << fixed
       << setprecision(2) << smallestMonth(credit, SIZE) << "\n";
}

// Function Definitions
double totalAmount(double arr[SIZE], int arraySize) {
  double sum = 0.0;
  for (int i = 0; i < arraySize; i++) {
    sum += arr[i];
  }
  return sum;
}

double averageAmount(double arr[SIZE], int SIZE) {
  double totalSum = totalAmount(arr, SIZE);
  double avg = totalSum / SIZE;
  return avg;
}

double largestMonth(double arr[SIZE], int SIZE) {
  double largestSum = arr[0];
  for (int i = 0; i < SIZE; i++) {
    if (largestSum < arr[i])
      largestSum = arr[i];
  }
  return largestSum;
}

double smallestMonth(double arr[SIZE], int SIZE) {
  double smallestSum = arr[0];
  for (int i = 0; i < SIZE; i++) {
    if (smallestSum > arr[i])
      smallestSum = arr[i];
  }
  return smallestSum;
}
