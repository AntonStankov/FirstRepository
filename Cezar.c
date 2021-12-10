#include <stdio.h>
#include <stdlib.h>

int main() {
    char input_text;
    char cripted;
    clock_t start, end;
    start = clock();
    printf("Enter text(without special symbols): ");
    do{
        
        input_text = getchar();
        if(input_text >= 'a' && input_text <= 'z'){
            if(input_text == 'x'){
                cripted = 'a';
            }
            if(input_text == 'y'){
                cripted = 'b';
            }
            if(input_text == 'z'){
                cripted = 'c';
            }
            else cripted = input_text + 3;
            printf("%c", cripted);
        }
        else if(input_text >= 'A' && input_text <= 'Z'){
            if(input_text == 'X'){
                cripted = 'A';
            }
            if(input_text == 'Y'){
                cripted = 'B';
            }
            if(input_text == 'Z'){
                cripted = 'C';
            }
            else cripted = input_text + 3;
            printf("%c", cripted);
        }
        else if(input_text == '\n'){
            break;
        }
        else if(input_text == ' '){
            cripted = ' '; printf("%c", cripted);
        }
        else{
            printf("\nYou can write onli letters from latin alfabeth!");
            break;
        }
    }while(input_text != '\n');
    return 0;
}