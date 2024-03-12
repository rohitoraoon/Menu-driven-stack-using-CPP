#include<iostream.h>
#include<conio.h>
#include "pop.h"
void display()
{
        clrscr();
        screen();
        gotoxy(12,5);cout<<"    ";
        gotoxy(15,6);cout<<"C. DISPLAY STACK";
        int f=0;
        if(TOP==-1)
        {
                gotoxy(21,8);cout<<"STACK is empty";
        }
        else
        {
                for(int i=TOP;i>=0;i--)
                {
                        gotoxy(22,8+f);cout<<STACK[i];
                        f++;
                }
        }
        gotoxy(18,8);cout<<"-->";
        gotoxy(30,20);cout<<"Press any key...";
        gotoxy(47,20);getch();
        return;
}