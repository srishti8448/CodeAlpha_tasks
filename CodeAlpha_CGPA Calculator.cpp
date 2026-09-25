#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float grade, credit;
    float totalCredits = 0, totalPoints = 0;

    cout << "Enter number of courses: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nCourse " << i << endl;

        cout << "Enter grade: ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> credit;

        totalCredits += credit;
        totalPoints += grade * credit;

        cout << "Grade = " << grade << endl;
        cout << "Credit Hours = " << credit << endl;
    }

    float GPA = totalPoints / totalCredits;
    float CGPA = GPA;   // For one semester

    cout << fixed << setprecision(2);
    cout << "\nTotal Credits = " << totalCredits;
    cout << "\nTotal Grade Points = " << totalPoints;
    cout << "\nSemester GPA = " << GPA;
    cout << "\nOverall CGPA = " << CGPA << endl;

    return 0;
}