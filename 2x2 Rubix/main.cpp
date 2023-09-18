#include <iostream>
using namespace std;

void play();
void display();
void pass();
int ccwC(int c);

const int Y = 8, X = 12;
char rubix[Y][X] = {
    "   AA      ", 
    "   aA      ", 
    "           ", 
    "Bb cC dD eE", 
    "BB CC DD EE", 
    "           ", 
    "   fF      ", 
    "   FF      " 
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
    int t[3][5][2] = {
        {{3, 3}, {4, 3}, {4, 4}, {3, 4}, {3, 3}},
        {{1, 3}, {4, 1}, {6, 4}, {3, 6}, {1, 3}},
        {{1, 4}, {3, 1}, {6, 3}, {4, 6}, {1, 4}}
    };

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
                for (int i = 0 + ccw; i < 4 + ccw; i++) {
                    for (int j = 0; j < 3; j++)
                        rubix[t[j][i][0]] [t[j][i][1]] = rubix2[t[j][i + ccwC(ccw)][0]] [t[j][i + ccwC(ccw)][1]];
                }
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
    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < X; j++) 
            cout << rubix[i][j] << ' ';
        cout << endl;
    }
}

void pass() {
    for (int i = 0; i < Y; i++) {
        for (int j = 0; j < X; j++) 
            rubix2[i][j] = rubix[i][j];
    }
}

int ccwC(int c) {
    return c ? -1 : 1;
}
