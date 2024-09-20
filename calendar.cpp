#include <iostream>
#include <iomanip>

using namespace std;

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Function to get the number of days in a month
int getDaysInMonth(int month, int year) {
    switch (month) {
        case 1:  return 31; // January
        case 2:  return isLeapYear(year) ? 29 : 28; // February
        case 3:  return 31; // March
        case 4:  return 30; // April
        case 5:  return 31; // May
        case 6:  return 30; // June
        case 7:  return 31; // July
        case 8:  return 31; // August
        case 9:  return 30; // September
        case 10: return 31; // October
        case 11: return 30; // November
        case 12: return 31; // December
        default: return 0;
    }
}

// Function to get the day of the week for the first day of a month
int getFirstDayOfMonth(int month, int year) {
    int d = 1, m = month, y = year;
    if (m < 3) {
        m += 12;
        y -= 1;
    }
    int k = y % 100;
    int j = y / 100;
    int f = d + (13 * (m + 1)) / 5 + k + k / 4 + j / 4 + 5 * j;
    return (f % 7); // 0 is Saturday, 1 is Sunday, ..., 6 is Friday
}

// Function to print the calendar for a given month and year
void printCalendar(int month, int year) {
    const string months[] = {"January", "February", "March", "April", "May", "June",
                             "July", "August", "September", "October", "November", "December"};
    const string days[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    
    cout << "   " << months[month - 1] << " " << year << endl;
    for (const auto& day : days) {
        cout << setw(4) << day;
    }
    cout << endl;

    int daysInMonth = getDaysInMonth(month, year);
    int firstDay = getFirstDayOfMonth(month, year);

    // Print spaces for the days before the first day of the month
    for (int i = 0; i < firstDay; ++i) {
        cout << setw(4) << " ";
    }

    // Print the days of the month
    for (int day = 1; day <= daysInMonth; ++day) {
        cout << setw(4) << day;
        if ((day + firstDay) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;
}

int main() {
    int month, year;

    cout << "Enter month (1-12): ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    if (month < 1 || month > 12) {
        cout << "Invalid month!" << endl;
        return 1;
    }

    printCalendar(month, year);

    return 0;
}
