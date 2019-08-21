#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
 clrscr();
 int n[15],m[15],x;
 char word[6][7];
 word[1][1]='A';word[1][2]='F';word[1][3]='K';word[1][4]='P';word[1][5]='U';
 word[2][1]='B';word[2][2]='G';word[2][3]='L';word[2][4]='Q';word[2][5]='V';
 word[3][1]='C';word[3][2]='H';word[3][3]='M';word[3][4]='R';word[3][5]='W';
 word[3][6]='Z';
 word[4][1]='D';word[4][2]='I';word[4][3]='N';word[4][4]='S';word[4][5]='X';
 word[5][1]='E';word[5][2]='J';word[5][3]='O';word[5][4]='T';word[5][5]='Y';
 cout<<"\t\t\tWELCOME TO THE WORD GUESSING GAME\n";
 cout<<"\n\n=====================================================================";
 cout<<"\n\t\t\t\t\tRULES\n";
 cout<<"1.  Think of a word between 1 to 15 characters\n";
 cout<<"2.  Select the line in which desired letter of your word exists\n";
 cout<<"\n=====================================================================\n" ;
 gotoxy(25,11);
 cprintf("Line : | 1 | 2 | 3 | 4 | 5 |");
 gotoxy(32,12);
 cprintf("|   |   |   |   |   |");
 gotoxy(32,13);
 cprintf("| A | B | C | D | E |");
 gotoxy(32,14);
 cprintf("| F | G | H | I | J |");
 gotoxy(32,15);
 cprintf("| K | L | M | N | O |");
 gotoxy(32,16);
 cprintf("| P | Q | R | S | T |");
 gotoxy(32,17);
 cprintf("| U | V | W | X | Y |");
 gotoxy(32,18);
 cprintf("        | Z |        ");
 again:;
 cout<<"\n\nThink of a word and enter the number of letters in your word : ";
 cin>>x;
 if(x>15)
  {
   cout<<"\nYour word must contain less than 15 letters enter again";
   goto again;
  }
 cout<<"\n\n";
 for(int i=0;i<x;i++)
  {
   switch(i)
   {
    case 0: cout<<"First";break;
    case 1: cout<<"Second";break;
    case 2: cout<<"Third";break;
    case 3: cout<<"Fourth";break;
    case 4: cout<<"Fifth";break;
    case 5: cout<<"Sixth";break;
    case 6: cout<<"Seventh";break;
    case 7: cout<<"Eighth";break;
    case 8: cout<<"Nineth";break;
    case 9: cout<<"Tenth";break;
    case 10: cout<<"Eleventh";break;
    case 11: cout<<"Twelveth";break;
    case 12: cout<<"Thirteenth";break;
    case 13: cout<<"Fourteenth";break;
    case 14: cout<<"Fifteenth";break;
   }
   cout<<" letter of your word is in which line : ";
   cin>>n[i];
  }
 cout<<"\n\n\t\t\tLine : | 1 | 2 | 3 | 4 | 5 | 6 |\n";
 cout<<"\t\t\t       |   |   |   |   |   |   |\n";
 cout<<"\t\t\t       | A | F | K | P | U |   |\n";
 cout<<"\t\t\t       | B | G | L | Q | V |   |\n";
 cout<<"\t\t\t       | C | H | M | R | W | Z |\n";
 cout<<"\t\t\t       | D | I | N | S | X |   |\n";
 cout<<"\t\t\t       | E | J | O | T | Y |   |\n";
 cout<<"\n\n";
 for(int k=0;k<x;k++)
  {
   switch(k)
   {
    case 0: cout<<"First";break;
    case 1: cout<<"Second";break;
    case 2: cout<<"Third";break;
    case 3: cout<<"Fourth";break;
    case 4: cout<<"Fifth";break;
    case 5: cout<<"Sixth";break;
    case 6: cout<<"Seventh";break;
    case 7: cout<<"Eighth";break;
    case 8: cout<<"Nineth";break;
    case 9: cout<<"Tenth";break;
    case 10: cout<<"Eleventh";break;
    case 11: cout<<"Twelveth";break;
    case 12: cout<<"Thirteenth";break;
    case 13: cout<<"Fourteenth";break;
    case 14: cout<<"Fifteenth";break;
   }
   cout<<" letter of your word is in which line : ";
   cin>>m[k];
  }
  cout<<"\n\nLet me guess your word..................";
  cout<<"\n\nI think your word is : ";
  for(int l=0,o=0;l<x;l++,o++)
   {
    cout<<word[n[o]][m[o]];
   }
 getch();
}
