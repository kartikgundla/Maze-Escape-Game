#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

#define bool int
#define true 1
#define false 0

void draw_maze(){
    line(20,60,20,420);
    line(30,60,380,60);
    line(20,420,360,420);
    line(380,60,380,420);
    line(40,80,40,100);
    line(40,100,80,100);
    line(20,120,60,120);
    line(20,160,40,160);
    line(20,260,120,260);
    line(20,340,60,340);
    line(40,180,40,240);
    line(40,280,40,320);
    line(40,360,40,400);
    line(40,140,100,140);
    line(40,400,60,400);
    line(60,140,60,200);
    line(60,340,60,360);
    line(60,380,60,400);
    line(60,200,100,200);
    line(60,380,100,380);
    line(80,400,80,420);
    line(60,80,140,80);
    line(80,100,80,180);
    line(100,100,100,140);
    line(100,160,100,200);
    line(100,380,100,400);
    line(120,80,120,140);
    line(140,80,140,120);
    line(100,160,140,160);
    line(100,400,140,400);
    line(40,220,120,220);
    line(80,220,80,240);
    line(80,240,100,240);
    line(120,180,120,260);
    line(40,320,80,320);
    line(80,280,80,380);
    line(100,300,100,360);
    line(80,280,160,280);
    line(100,300,140,300);
    line(120,320,120,340);
    line(60,240,60,300);
    line(100,360,120,360);
    line(120,360,120,380);
    line(160,400,160,420);
    line(120,140,160,140);
    line(140,260,140,280);
    line(160,60,160,200);
    line(160,280,160,320);
    line(140,300,140,340);
    line(120,340,180,340);
    line(160,120,180,120);
    line(180,60,180,100);
    line(200,60,200,80);
    line(180,100,300,100);
    line(200,100,200,140);
    line(180,140,180,220);
    line(140,220,180,220);
    line(120,240,220,240);
    line(160,240,160,260);
    line(220,80,260,80);
    line(140,160,140,220);
    line(180,140,200,140);
    line(200,160,220,160);
    line(220,120,220,180);
    line(200,160,200,240);
    line(200,200,240,200);
    line(240,140,240,200);
    line(260,120,260,220);
    line(280,120,280,240);
    line(300,120,300,160);
    line(300,200,300,260);
    line(300,280,300,320);
    line(300,340,300,360);
    line(280,60,280,80);
    line(300,80,300,100);
    line(320,60,320,100);
    line(340,80,340,120);
    line(360,80,360,140);
    line(320,140,360,140);
    line(320,140,320,280);
    line(320,300,320,340);
    line(320,380,320,420);
    line(260,80,260,100);
    line(260,240,260,300);
    line(260,320,260,340);
    line(260,380,260,420);
    line(240,220,240,280);
    line(240,300,240,320);
    line(240,360,240,380);
    line(280,120,340,120);
    line(320,140,360,140);
    line(340,160,380,160);
    line(280,180,360,180);
    line(320,220,360,220);
    line(360,260,380,260);
    line(340,280,360,280);
    line(360,300,380,300);
    line(340,320,360,320);
    line(320,340,360,340);
    line(340,360,360,360);
    line(300,380,340,380);
    line(340,400,360,400);
    line(360,180,360,200);
    line(340,200,360,200);
    line(220,120,260,120);
    line(220,220,260,220);
    line(260,240,280,240);
    line(260,260,300,260);
    line(280,280,320,280);
    line(120,380,180,380);
    line(180,380,180,400);
    line(140,360,220,360);
    line(200,340,200,380);
    line(220,360,220,320);
    line(220,340,280,340);
    line(180,300,180,280);
    line(180,280,240,280);
    line(200,280,200,260);
    line(180,260,200,260);
    line(200,420,200,400);
    line(220,240,220,260);
    line(180,340,180,320);
    line(180,320,200,320);
    line(200,320,200,300);
    line(200,300,280,300);
    line(200,400,220,400);
    line(220,400,220,380);
    line(220,380,240,380);
    line(240,400,260,400);
    line(360,220,360,260);
    line(340,240,340,300);
    line(320,300,340,300);
    line(360,300,360,320);
    line(360,340,360,360);
    line(340,360,340,380);
    line(380,380,360,380);
    line(360,400,360,380);
    line(240,360,320,360);
    line(280,360,280,400);
    line(280,400,300,400);
    line(160,300,180,300);
    line(280,340,280,320);
    line(280,320,300,320);
}

int main(){
    int gd = DETECT, gm;
    int hitWall, exitX = 370, exitY = 410;
    int x = 30, y = 70;
    int newX, newY;
    int radius = 5;
    int ch;
    int wallColor = WHITE;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    draw_maze();
    outtextxy(140, 20, "Maze Escape Game");

    setcolor(YELLOW);
    setfillstyle(SOLID_FILL, YELLOW);
    fillellipse(x, y, radius, radius);

    while (1) {
        ch = getch();
        if (ch == 27) break; // ESC exits

        // arrow keys send a 0/224 prefix byte, then the real scan code
        if (ch == 0 || ch == 224) ch = getch();

        newX = x; newY = y;
        if (ch == 72) newY -= 5;      // Up
        else if (ch == 80) newY += 5; // Down
        else if (ch == 75) newX -= 5; // Left
        else if (ch == 77) newX += 5; // Right
        else continue;

        // check all four sides of the ball before moving
        hitWall = 0;
        if (getpixel(newX + radius, newY) == wallColor) hitWall = 1;
        if (getpixel(newX - radius, newY) == wallColor) hitWall = 1;
        if (getpixel(newX, newY + radius) == wallColor) hitWall = 1;
        if (getpixel(newX, newY - radius) == wallColor) hitWall = 1;

        if (hitWall) {
            outtextxy(400, 100, "Wall Ahead!");
            delay(200);
            setcolor(BLACK);
            outtextxy(400, 100, "Wall Ahead!"); // erase message
            setcolor(YELLOW);
            continue; // block movement, don't update position
        }

        // erase old ball
        setcolor(BLACK);
        setfillstyle(SOLID_FILL, BLACK);
        fillellipse(x, y, radius, radius);

        // update position
        x = newX;
        y = newY;

        // draw new ball
        setcolor(YELLOW);
        setfillstyle(SOLID_FILL, YELLOW);
        fillellipse(x, y, radius, radius);

        if (abs(x - exitX) < 10 && abs(y - exitY) < 10) {
            outtextxy(400, 120, "Successfully Escaped!");
            delay(200);
            break;
        }
    }

    getch();
    closegraph();
    return 0;
}
