#include <iostream.h>
#include <conio.h>
#include "frame.h"
#include "hstack.h"
void push_display(int);
void push(int size)
{
        char ch='y';
        int n;
        while(ch=='y' || ch== 'Y')
        {
                clrscr();
                screen();
                scpart();
                gotoxy(56,5);cout<<"    STACK";
                gotoxy(56,21);cout<<"     ";
                push_display(0);
                gotoxy(12,5);cout<<"    ";
                gotoxy(15,6);cout<<"A. PUSH OPERATION";
                gotoxy(18,8);cout<<"Enter the item:  ";
                gotoxy(34,8);cin>>n;
                if(cin.fail())
                {
                        cin.clear();
                        cin.sync();
                        //cin.ignore(3);
                        gotoxy(20,13);cout<<"Please Enter a number!!!";
                        gotoxy(18,20);cout<<"Do you want to re-insert(y/n): ";
                        gotoxy(49,20);cin>>ch;
                }
                else
                {
                        if(TOP==size-1)
                        {
                                gotoxy(25,13);cout<<"STACK OVERFLOW!!!";
                                gotoxy(25,20);cout<<"Press any key...";
                                gotoxy(42,20);getch();
                                return;
                        }
                        else
                        {
                            hpush(n);
                            push_display(1);
                            gotoxy(18,20);cout<<"Do you want to re-insert(y/n): ";
                            gotoxy(49,20);cin>>ch;
                        }
                }
        }
        return;
}

void push_display(int f)
{
        int i=0;
        for(i=0;i<=TOP;i++)
        {
                gotoxy(62,20-i);cout<<STACK[i];
        }
        if(f==0)
        {
                gotoxy(57,21-i);cout<<"-->";

        }
        else
        {
                gotoxy(57,21-i+1);cout<<"    ";
                gotoxy(57,21-i);cout<<"-->";
        }
}