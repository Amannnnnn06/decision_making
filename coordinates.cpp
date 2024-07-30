// Aman prajapati 23070123017
// number positive or negative
#include <iostream>
using namespace std;

int main() {
    int x,y;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    if (x> 0 and y>0 ) {
        cout << "first quadrant" << endl;
    }
     else if (x< 0 and y>0 ) {
        cout << "second  quadrant" << endl;
    }
     else if (x< 0 and y<0 ) {
        cout << "third  quadrant" << endl;
    }
    else if (x>0 and y<0){
        cout << "fourth quadrant" << endl;
    }
    return 0;
}
//output
//Enter x coordinate: 6
//Enter y coordinate: 8
//first quadrant