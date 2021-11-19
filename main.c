#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //1 зад. Да се въведе последователност от символи и да се провери дали може да се преобразува в цяло число.
	int count = 0, ok = 1;
	char c;

	printf("Enter symbols: ");
	do{
		c = getchar();
		if(c == 10){
			break;
		}

		if(c < '0' || c > '9'){
            if(c == '+' || c == '-'){
        		if(count >= 1){
        			ok = 0;
        		}
        	}
        	else{
        		ok = 0;
        	}
        }

		count++;
	}
	while(c != 10);


	if(ok){
        printf("YES");
    }
    else{
        printf("NO");
    }
    */
    /*

    //2 зад. Да се въведе последователност от символи и да се преобразува в цяло число, ако това е възможно.

    int count = 0, ok = 1,minus = 0;
	char c;
	int num = 0;

	printf("Enter symbols: ");
	do{
		c = getchar();
		if(c == 10){
			break;
		}

		if(c < '0' || c > '9'){
            if(c == '+' || c == '-'){
        		if(count >= 1){
        			ok = 0;
        		}
        		if(c == '-'){
        			minus = 1;
        		}
        	}
        	else{
        		ok = 0;
        	}
        }
        else if(c >= '0' && c <= '9'){
        	switch(c){
        		case '0':
        			num = 0*10 + num*10;
        			break;
        		case '1':
        			num = 1*10 + num*10;
        			break;
        		case '2':
        			num = 2*10 + num*10;
        			break;
        		case '3':
        			num = 3*10 + num*10;
        			break;
        		case '4':
        			num = 4*10 + num*10;
        			break;
        		case '5':
        			num = 5*10 + num*10;
        			break;
        		case '6':
        			num = 6*10 + num*10;
        			break;
        		case '7':
        			num = 7*10 + num*10;
        			break;
        		case '8':
        			num = 8*10 + num*10;
        			break;
        		case '9':
        			num = 9*10 + num*10;
        			break;
        	}
        }

		count++;
	}
	while(c != 10);

    num = num / 10;


	if(ok){
		if(minus == 1){
			num = 0 - num;
		}
        printf("YES");
        printf("\n%d", num);
    }
    else{
        printf("NO, it's impossible");
    }
    */

    /*

    //3 зад. Да се въведе последователност от символи и да се преобразува в реално число, ако това е възможно.

    int count = 0, ok = 1,plsmin_count = 0,dot_count = 0,afterdot = 0,i,minus = 0;
	char c;
	float num = 0,div = 1;

	printf("Enter symbols: ");
	do{
		c = getchar();
		if(c == 10){
			break;
		}

		if(c < '0' || c > '9'){
            if(c == '+' || c == '-'){
        		if(count >= 1){
        			ok = 0;
        		}
        		plsmin_count = 1;
        		if(c == '-'){
                    minus = 1;
        		}
        	}
        	else if(c == '.'){
                dot_count++;
                if(dot_count > 1){
                    ok = 0;
                }
                if(plsmin_count == 0){
                    if(count < 1){
                        ok = 0;
                    }
                }
                else if(plsmin_count == 1){
                    if(count < 2){
                        ok = 0;
                    }
                }
        	}
        	else{
        		ok = 0;
        	}
        }
        else if(c >= '0' && c <= '9'){
        	switch(c){
        		case '0':
        			num = 0*10 + num*10;
        			break;
        		case '1':
        			num = 1*10 + num*10;
        			break;
        		case '2':
        			num = 2*10 + num*10;
        			break;
        		case '3':
        			num = 3*10 + num*10;
        			break;
        		case '4':
        			num = 4*10 + num*10;
        			break;
        		case '5':
        			num = 5*10 + num*10;
        			break;
        		case '6':
        			num = 6*10 + num*10;
        			break;
        		case '7':
        			num = 7*10 + num*10;
        			break;
        		case '8':
        			num = 8*10 + num*10;
        			break;
        		case '9':
        			num = 9*10 + num*10;
        			break;
        	}
        }
        if(dot_count == 1){
            afterdot++;
        }

		count++;
	}
	while(c != 10);

	for(i = 0; i < afterdot; i++){
        div = div * 10;
	}
    num = num / div;
	if(ok){
        if(minus == 1){
            num = 0 - num;
        }
        printf("YES");
        printf("\n%f", num);
    }
    else{
        printf("NO, it's impossible");
    }
    */
    return 0;
}
