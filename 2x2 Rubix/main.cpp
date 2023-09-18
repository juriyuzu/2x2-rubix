#include <iostream>
using namespace std;

void play();
void display();
void pass();

int face = 2;
const int X = 11;
char rubix[X][X] = {
    {'0', '0', '0', 'A', 'A', '0', '0', '0', '0', '0', '0'}, 
    {'0', '0', '0', 'A', 'A', '0', '0', '0', '0', '0', '0'}, 
    {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}, 
    {'B', 'B', '0', 'C', 'C', '0', 'D', 'D', '0', 'F', 'F'}, 
    {'B', 'B', '0', 'C', 'C', '0', 'D', 'D', '0', 'F', 'F'}, 
    {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}, 
    {'0', '0', '0', 'E', 'E', '0', '0', '0', '0', '0', '0'}, 
    {'0', '0', '0', 'E', 'E', '0', '0', '0', '0', '0', '0'}, 
    {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0', '0'}, 
    {'0', '0', '0', 'F', 'F', '0', '0', '0', '0', '0', '0'}, 
    {'0', '0', '0', 'F', 'F', '0', '0', '0', '0', '0', '0'}, 
};
char rubix2[X][X];

int main() {
    play();

    return 0;
}

void play() {
    char a;
    int ccw;
    bool d;

    display();

    while(true) {
        pass();
        ccw = 0;
        d = true;
        cout << endl << "> ";
        cin >> a;

        if (a == '-') {
            ccw = 1;
            cin >> a;
        }

        switch (a) {
            case 'F':
                break;
            case 'B':
                break;
            case 'R':
                break;
            case 'L':
                break;
            case 'U':
                break;
            case 'D':
                break;
            case 'x':
                break;
            case 'y':
                break;
            case 'z':
                break;
            default:
                d = false;
        }

        if (d) display();
    }
}

void display() {
    cout << endl;
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) 
            cout << (rubix[i][j] != '0' ? rubix[i][j] : ' ') << ' ';
        cout << endl;
    }
}

void pass() {
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < X; j++) 
            rubix2[i][j] = rubix[i][j];
    }
}
