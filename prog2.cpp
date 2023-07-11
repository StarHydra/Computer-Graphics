#include <iostream>
#include <graphics.h>

using namespace std;
int xCentre;
int yCentre;
void drawPoint(int x, int y)
{
    putpixel(x + xCentre, y + yCentre, WHITE);
    putpixel(y + yCentre, x + xCentre, WHITE);
    putpixel(-x + xCentre, y + yCentre, WHITE);
    putpixel(y + yCentre, -x + xCentre, WHITE);
    putpixel(x + xCentre, -y + yCentre, WHITE);
    putpixel(-y + yCentre, x + xCentre, WHITE);
    putpixel(-x + xCentre, -y + yCentre, WHITE);
    putpixel(-y + yCentre, -x + xCentre, WHITE);
}
int main()
{
    initwindow(960, 540);
    int radius;
    cout << "Enter Radius of the Circle : ";
    cin >> radius;
    cout << "Enter X Co-ordinate : ";
    cin >> xCentre;
    cout << "Enter Y Co-ordinate : ";
    cin >> yCentre;
    float d = float(5 / 4) - radius;
    int x = 0;
    int y = radius;
    drawPoint(x, y);
    while (y > x)
    {
        if (d < 0)
        {
            d = d + 2 * x + 3;
            x++;
        }
        else
        {
            d = d + 2 * x - 2 * y + 5;
            x++;
            y--;
        }
        drawPoint(x, y);
    }
    getch();
    closegraph();
    return 0;
}