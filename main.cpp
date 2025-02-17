#include <iostream>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;
struct Snake {
 int x, y;
};
const int WIDTH = 40;
const int HEIGHT = 20;
const int INITIAL_SPEED = 50;
const int MAX_LENGTH = 100;

Snake snake[MAX_LENGTH];
int nTail = 1;
int fruitX, fruitY;
int score = 0;
int speed;
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN } dir;
bool gameOver;

using namespace std;
int main() {
    cout<<"Game Over!!!";
    return 0;
}
