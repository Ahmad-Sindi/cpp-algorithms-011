// Algorithm Challenge
// 11 — Average Pass/Fail

#include <iostream>
using namespace std;

int main()
{
    int mark1, mark2, mark3;

    // Ask the user to enter three marks
    cout << "Please enter 3 marks:\n";
    cin >> mark1 >> mark2 >> mark3;

    // Calculate the average
    int avg = (mark1 + mark2 + mark3) / 3;

    // Display pass/fail result based on average
    if (avg >= 50)
    {
        cout << "You passed the exam!\n";
    }
    else
    {
        cout << "You failed the exam.\n";
    }

    // Display the marks and calculated average
    cout << "Your Marks: " << mark1 << " + " << mark2 << " + " << mark3
         << " = " << (mark1 + mark2 + mark3)
         << " / 3 = " << avg << endl;

    cout << "Passing mark is 50." << endl;
    cout << "Your Average: " << avg << endl;

    return 0;
}
