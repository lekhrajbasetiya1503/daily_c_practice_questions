/*
problem statement : 
create a structure person having attributes as age and weight. Access its structure variables using pointers.
and change the value by the pointers using pass by refrance in functions.
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

void change(pokemon* x)
{
    (*x).hp = 80;
    (*x).attack = 60;
    (*x).speed = 90;
    (*x).tiar = 'B';
    strcpy((*x).name,"pikcachu");

}

int main()
{
    pokemon pikachu;
    pokemon* x = &pikachu; 
    pikachu.hp = 60;
    pikachu.attack = 70;
    pikachu.speed = 100;
    pikachu.tiar = 'A';
    strcpy(pikachu.name,"pikcachu");

    printf("name : %s\n",pikachu.name);
    printf("hp : %d\n",pikachu.hp);
    printf("attack : %d\n",pikachu.attack);
    printf("speed : %d\n",pikachu.speed);
    printf("tiar : %c\n",pikachu.tiar);

    change(&pikachu);
    printf("\nafter the change\n\n");

    printf("name : %s\n",pikachu.name);
    printf("hp : %d\n",pikachu.hp);
    printf("attack : %d\n",pikachu.attack);
    printf("speed : %d\n",pikachu.speed);
    printf("tiar : %c\n",pikachu.tiar);


}
