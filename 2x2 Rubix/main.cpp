#include <iostream>
#include <limits>
using namespace std;

void play();

char rubix[6][3][3] = {
    {{'A', 'A', 'A'}, {'A', 'A', 'A'}, {'A', 'A', 'A'}},
    {{'B', 'B', 'B'}, {'B', 'B', 'B'}, {'B', 'B', 'B'}},
    {{'C', 'C', 'C'}, {'C', 'C', 'C'}, {'C', 'C', 'C'}},
    {{'D', 'D', 'D'}, {'D', 'D', 'D'}, {'D', 'D', 'D'}},
    {{'E', 'E', 'E'}, {'E', 'E', 'E'}, {'E', 'E', 'E'}},
    {{'F', 'F', 'F'}, {'F', 'F', 'F'}, {'F', 'F', 'F'}}
};

int main() {
    play();

    return 0;
}

void play() {
    while(true) {
        char a = getchar();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << a;
    }
}