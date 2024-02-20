#include <bits/stdc++.h>
using namespace std;

/* ∩――――∩
||     ∧ ﾍ　 ||
||    (* ´ ｰ`) ZZzz
|ﾉ^⌒⌒づ`￣  ＼
(　ノ　　⌒ ヽ ＼
＼　　||￣￣￣￣￣||
　 ＼,ﾉ|| Eat . Sleep . Code */

#define fast               ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define nl                 '\n'
#define ui                 unsigned int
#define ll                 long long int
#define ld                 long double
#define ull                unsigned long long int

template<typename T> T     maxof(T a, T b) { return (a > b) ? a : b; }
template<typename T> T     minof(T a, T b) { return (a < b) ? a : b; }
template<typename T> T     midof(T a, T b, T c) { return maxof(minof(a, b), minof(maxof(a, b), c)); }
#ifndef                    KAITO /* ^._.^ฅ */
#define                    input freopen("input.txt", "r", stdin);
#define                    output freopen("output.txt", "w", stdout);
#define                    error freopen("error.txt", "w", stderr);
#endif
#define sort_arr(arr, n)   sort(arr, arr + n)
#define sort_desc(v)       sort(v.rbegin(), v.rend())
#define is_even(x)         ((x) % 2 == 0)
#define is_odd(x)          ((x) % 2 != 0)
#define length(arr)        (sizeof(arr) / sizeof(arr[0]))
#define vi                 vector<int>



bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int getDaysInMonth(int month, int year) {
    if (month == 2) {
        return isLeapYear(year) ? 29 : 28;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        return 30;
    } else {
        return 31;
    }
}

int getDayOfWeek(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year -= 1;
    }
    int K = year % 100;
    int J = year / 100;
    int h = (day + ((13 * (month + 1)) / 5) + K + (K / 4) + (J / 4) + (5 * J)) % 7;
    return (h + 6) % 7; // 0 for Sunday, 1 for Monday, ..., 6 for Saturday
 }

void printCalendar(int day, int month, int year, const string& dayName) {
    int daysInMonth = getDaysInMonth(month, year);
    int firstDayOfWeek = getDayOfWeek(1, month, year);
    
    vector<string> dayNames = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
    
    // Find the index of the given day name
    int dayIndex = -1;
    for (int i = 0; i < 7; ++i) {
        if (dayNames[i] == dayName) {
            dayIndex = i;
            break;
        }
    }

    cout << "|---------------------------|\n";
    cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
    cout << "|---------------------------|\n";

    // Print empty cells for the 1st week
    for (int i = 0; i < firstDayOfWeek; ++i) {
        cout << "| - ";
    }

    // Print the days of the 1st week
    int currentDay = 1;
    for (int i = firstDayOfWeek; i < 7; ++i) {
        if (i >= dayIndex) {
            cout << "| " << setw(2) << currentDay << " ";
            ++currentDay;
        } else {
            cout << "| - ";
        }
    }
    cout << "|\n";
    cout << "|---------------------------|\n";

    // Print the remaining weeks
    while (currentDay <= daysInMonth) {
        for (int i = 0; i < 7 && currentDay <= daysInMonth; ++i) {
            cout << "| "<< setw(2) << currentDay;
            ++currentDay;
        }
        cout << "|\n";
        cout << "|---------------------------|\n";
    }
}

int main() {
   input;
   output;
   fast;
    int T;
    
    cin >> T;

    for (int t = 0; t < T; ++t) {
        int day, month, year;
        string date, dayName;
       
        cin >> date >> dayName;
        stringstream ss(date);
        char delim;
        ss >> day >> delim >> month >> delim >> year;
        printCalendar(day, month, year, dayName);
    }

    return 0;
}