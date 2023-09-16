#include <iostream>
using namespace std;

void play();
void display();

int face = 2;
const int F = 6, Y = 2, X = 2;
char rubix[F][Y][X] = {
    {{'A', 'A'}, {'A', 'A'}},
    {{'B', 'B'}, {'B', 'B'}},
    {{'C', 'C'}, {'C', 'C'}},
    {{'D', 'D'}, {'D', 'D'}},
    {{'E', 'E'}, {'E', 'E'}},
    {{'F', 'F'}, {'F', 'F'}}
};

int main() {
    play();

    return 0;
}

void play() {
    char a;
    bool ccw;
    char hold[2];

    while(true) {
        ccw = false;
        cout << "> ";
        cin >> a;

        if (a == '-') {
            ccw == true;
            cin >> a;
        }

        switch (a) {
            case 'F':
                hold[0] = rubix[face][0][0];
                rubix[face][0][0] = rubix[face][1][0];
                rubix[face][1][0] = rubix[face][1][1];
                rubix[face][1][1] = rubix[face][0][1];
                rubix[face][0][1] = hold[0];
                hold[0] = rubix[face - 2][1][0];
                hold[1] = rubix[face  -2][1][1];
                rubix[face - 2][1][0] = rubix[face - 1][1][1];
                rubix[face - 2][1][1] = rubix[face - 1][0][1];
                rubix[face - 1][1][1] = rubix[]
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
        }

        display();
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