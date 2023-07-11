#include<graphics.h> 
#include<iostream> 
#include<conio.h> 
using namespace std;
int gd,gm,x1,y1,x2,y2,dep,ch; 
int main() 
{ 
cout<<"\n Enter top-left and bottom-right corner:"; 
cin>>x1>>y1>>x2>>y2; 
cout<<"\n Enter the depth along z axis:"; 
cin>>dep; 
do 
{ 
cout<<"Choose any one projection:\n\t1.Parallel Projection\n\t2.Perspective Projection\nEnter your choice:"; 
cin>>ch; 
initgraph(&gd,&gm,NULL); 
switch(ch) 
{ 
case 1: 
rectangle(x2+100,y1,x2+100+dep,y2); 
outtextxy(x2+100,y1-10,NULL); 
rectangle(x1,y1,x2,y2); 
outtextxy(x1,y1-10,NULL); 
rectangle(x1,y1-(y2-y1),x2,x1+dep-(y2-y1)); 
outtextxy(x1,y1-(y2-y1)-10,NULL); 
getch(); 
closegraph();
break; 
case 2: 
bar3d(x1,y1,x2,y2,dep,1); 
getch(); 
closegraph(); 
break; 
} 
}while(ch<3); 
return 0;
}