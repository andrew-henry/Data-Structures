#include <iostream>

using namespace std;

int main(){

    float monthsArray[6] = {100, 200, 330, 20, 250, 200};

    float total = monthsArray[0] + monthsArray[1] + monthsArray[2] + monthsArray[3] + monthsArray[4] + monthsArray[5];

    float average = total / 6;
    float inTwoYears = average * 24;

    cout << "total = " << total << endl;
    cout << "average = " << average << endl;
    cout << "In two years = " << inTwoYears << endl;
    
}


