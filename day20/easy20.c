/*
problem statement : 
create a structure person having attributes as age and weight. Access its structure variables using pointers.
*/
#include<stdio.h>
#include<string.h>

typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tiar;
        char name[15];
    }pokemon;

int main()
{
    pokemon pikachu;
    pokemon* x = &pikachu; 
    (*x).hp = 60;
    (*x).attack = 70;
    (*x).speed = 100;
    (*x).tiar = 'A';
    strcpy((*x).name,"pikcachu");
}
