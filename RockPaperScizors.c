#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    srand(time(0));
    char user_choise;
    char comp_choise;
    int comp;
    int user;
    int win = 0, lose = 0, draw = 0,exit = 0;
    do{
            printf("\n\n\n1) rock\n");
            printf("2) paper\n");
            printf("3) sciscors\n");
            printf("Press E to exit!\n");
        do{
            
            user_choise = getchar();
            if(user_choise == '1'){
                user = 1;
                printf("You: rock");
            }
            if(user_choise == '2'){
                user = 2;
                printf("You: paper");
            }
            if(user_choise == '3'){
                user = 3;
                printf("You: sciscors");
            }
            if(user_choise == 'e'){
                printf("\n%d wins", win);
                printf("\n%d draws", draw);
                printf("\n%d loses", lose);
                exit = 1;
                break;
            }
        }while(user_choise != '1' && user_choise != '2' && user_choise != '3');

        if(exit == 1){
            break;
        }

        do{
            comp_choise = rand();
            if(comp_choise == '1'){
                comp = 1;
                printf("\nComputer: rock");
            }
            if(comp_choise == '2'){
                comp = 2;
                printf("\nComputer: paper");
            }
            if(comp_choise == '3'){
                comp = 3;
                printf("\nComputer: sciscors");
            }
            
        }while(comp_choise != '1' && comp_choise != '2' && comp_choise != '3');
        if(user == 1 && comp == 3){
            win++;
        }
        else if(user == 3 & comp == 2){
            win++;
        }
        else if(user == 2 && comp == 1){
            win++;
        }
        else if( user == 3 && comp == 1){
            lose++;
        }
        else if(user == 2 && comp == 3){
            lose++;
        }
        else if(user == 1 && comp == 2){
            lose++;
        }
        else if(user == comp){
            draw++;
        }
    }
    while(1);
    return 0;
}


