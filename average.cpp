// Aman prajapati 23070123017
// average
#include <iostream>
using namespace std;

int main() {
    int phy, chem, bio, math, eng, avg;

    cout << "Enter maths marks: ";
    cin >> math;
    cout << "Enter physics marks: ";
    cin >> phy;
    cout << "Enter chemistry marks: ";
    cin >> chem;
    cout << "Enter biology marks: ";
    cin >> bio;
    cout << "Enter English marks: ";
    cin >> eng;

    avg = (phy + math + bio + chem + eng) / 5;

    if (avg >= 90) {
        cout << "Grade O" << endl;
    } else if (avg >= 80) {
        cout << "Grade A" << endl;
    } else if (avg >= 70) {
        cout << "Grade B" << endl;
    } else if (avg >= 50) {
        cout << "Grade C" << endl;
    } else {
        cout << "Fail" << endl;
    }

    return 0;
}
//output
//Enter maths marks: 76
//Enter physics marks: 79
//Enter chemistry marks: 54
//Enter biology marks: 70
//Enter English marks: 90
//Grade B