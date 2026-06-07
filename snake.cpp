
#include <iostream>;
#include <ctime>;
#include <windows.h>;
#include <conio.h>;
using namespace std;
int szer= 15;
int wys= 30;
int x= 7;
int y= 16;
int owocx= 4;
int owocy= 17;
int wynik=0;

void mapa(){

for(int i=0;i<30;i++)
  {
    for(int j=0;j<15;j++){
        if(i==0 || i==29 || j==0 || j==14)
            cout<<"#";
        else if(i==y && j==x)
            cout<<"%";
        else if(i==owocy && j==owocx)
            cout<<"O";
        else
            cout<<" ";


    }


  }

}
char kierunek='w';
void input (){

 if(_kbhit())
    {
        kierunek = _getch();
    }
}

void zwrot (){
if(kierunek=='w') y--;
if(kierunek=='s') y++;
if(kierunek=='a') x--;
if(kierunek=='d') x++;
if(x==0 || x==14 || y==0 || y==29){ return 0;}

if(x==owocx && y==owocy) {
        wynik++;
        owocx= (rand() % 28)+1
        owocy= (rand() % 13)+1


}


}












int main(){}
