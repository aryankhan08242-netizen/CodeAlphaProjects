#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number of Course :";
    cin >> n;
    float grades;
    int Credit;
    float totalgrades = 0;
    float totalcredit = 0;
    float totalgradepoints = 0;
    string CourseName;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Course Name : ";
        cin >> CourseName, "\n";

        cout << "Enter Grades :";
        cin >> grades, "\n";

        cout << "Enter Credit Hours :";
        cin >> Credit, "\n";

        totalgrades += grades;
        totalcredit += Credit;
        totalgradepoints += (grades * Credit);
    }
    cout << "Total Grade points = " << totalgradepoints << endl;
    cout << "Total Grades = " << totalgrades << endl;

    cout << "Total Credit = " << totalcredit << endl;

    float CGPA;
    CGPA = (totalgradepoints) / totalcredit;
    cout << "Total CGPA = " << CGPA;
}