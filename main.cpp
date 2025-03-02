#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

struct Snake {
    int x, y;
};
const int WIDTH=40;
const int HEIGHT=20;
const int INITIAL_SPEED=50;
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
void DrawBorder(){// vẽ khung trò chơi
    for(int i=0;i<HEIGHT+2;i++){
        for(int j=0;j<WIDTH+2;j++){
            if(i==0||i==HEIGHT+1){
                cout<<"-";
            }else if(j==0||j==WIDTH+1){
                cout<<"|";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void Setup(){//thiết lập vị trí ban đầu của rắn nằm ở chính giữa khung hình;
    dir=STOP;
    snake[0].x=WIDTH/2;
    snake[0].y=HEIGHT/2;
    speed=INITIAL_SPEED;
}
void DrawSnake(){
    static int lastX=snake[0].x;
    static int lastY=snake[0].y;
    gotoXY(lastX,lastY){
        cout<<" ";
    }
    gotoXY(snake[0].x, snake[0].y);
    cout << "O";

    lastX=snake[0].x;
    lastY=snake[0].y;
}
