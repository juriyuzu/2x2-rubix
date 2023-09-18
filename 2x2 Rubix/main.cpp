#include <iostream>
using namespace std;

void play();
void display();
void pass();

int face = 2;
const int F = 6, Y = 2, X = 2;
char rubix[F][Y][X] = {
    {{'A', 'A'}, {'a', 'A'}},
    {{'B', 'B'}, {'B', 'B'}},
    {{'c', 'C'}, {'C', 'C'}},
    {{'D', 'D'}, {'D', 'D'}},
    {{'E', 'E'}, {'E', 'E'}},
    {{'F', 'F'}, {'F', 'F'}}
};
char rubix2[F][Y][X];

int main() {
    play();

    return 0;
}

void play() {
    char a;
    int ccw;
    bool d;
    int iFR[5][2] = {{0, 0}, {1, 0}, {1, 1}, {0, 1}, {0, 0}};
    int oFR[5][3][2] = {{{1}, {0, 0}, {1, 0}}, {{-2}, {1, 0}, {1, 1}}, {{-1}, {1, 1}, {0, 1}}, {{2}, {0, 1}, {0, 0}}, {{1}, {0, 0}, {1, 0}}};

    display();

    while(true) {
        pass();
        ccw = 0;
        d = true;
        cout << "> ";
        cin >> a;
        cout << endl << a << endl;

        if (a == '-') {
            ccw = 1;
            cin >> a;
        }

        switch (a) {
            case 'F':
                for (int i = 0 + ccw; i < 4 + ccw; i++) {
                    rubix[face][iFR[i][0]][iFR[i][1]] = rubix2[face][iFR[i + (ccw ? -1 : 1)][0]][iFR[i + (ccw ? -1 : 1)][1]];
                    rubix[face + oFR[i][0][0]][oFR[i][1][0]][oFR[i][1][1]] = rubix2[face + oFR[i + (ccw ? -1 : 1)][0][0]][oFR[i + (ccw ? -1 : 1)][1][0]][oFR[i + (ccw ? -1 : 1)][1][1]];
                    rubix[face + oFR[i][0][0]][oFR[i][2][0]][oFR[i][2][1]] = rubix2[face + oFR[i + (ccw ? -1 : 1)][0][0]][oFR[i + (ccw ? -1 : 1)][2][0]][oFR[i + (ccw ? -1 : 1)][2][1]];
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
    // for (int i = 0; i < 3; i++) {
    //     for (int j = 0; j < 6; j++) {
    //         for (int k = 0; k < 3; k++) 
    //             cout << rubix[j][i][k] << " ";
    //         cout << " | ";
    //     }
    //     cout << endl;
    // }
    cout << endl;
    for (int i = 0; i < Y; i++) {
        cout  << "      ";
        for (int j = 0; j < X; j++) 
            cout << rubix[0][i][j] << ' ';
        cout << endl;
    }
    cout << endl;
    for (int k = 0; k < Y; k++) {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < X; j++) 
                cout << rubix[i + 1][k][j] << ' ';
            cout << "  ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < Y; i++) {
        cout  << "      ";
        for (int j = 0; j < X; j++) 
            cout << rubix[4][i][j] << ' ';
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < Y; i++) {
        cout  << "      ";
        for (int j = 0; j < X; j++) 
            cout << rubix[5][i][j] << ' ';
        cout << endl;
    }
    cout << endl;
}

void pass() {
    for (int i = 0; i < F; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < X; k++) {
                rubix2[i][j][k] = rubix[i][j][k];
            }
        }
    }
}
