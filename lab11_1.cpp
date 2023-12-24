#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
    srand(time(0));

    cout << "Press Enter 3 times to reveal your future." << endl;

    for (int i = 0; i < 3; ++i) {
        cin.get(); 
    }

    string grades[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"};
    int index = rand() % 9;

    cout << "You will get"<< grades[index]<<"in this 261102."<< endl;

    return 0;
}
