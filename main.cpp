#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct Snake {
    int x, y;
};
const int WIDTH = 40;
const int HEIGHT = 20;
const int INITIAL_SPEED = 50;
Snake snake[1];
int nTail = 1;
int speed;
enum Direction {STOP = 0,LEFT ,RIGHT,UP ,DOWN } dir;
void gotoXY(int x,int y){
 COORD coord;
 coord.X=x;
 coord.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
