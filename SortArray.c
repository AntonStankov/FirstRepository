#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define max 10


//define varible with value 10 for max of N 
int third(){
    clock_t start, end;//start time execution
    start = clock();//start time execution
    long long int n, count = 0, i,index, change;

    do{//enter number of nums in array (n)
        printf("Enter number of simbols: ");
        n = rand();
    }
    while(n < 1);

    long long int arr[n];
    for(i = 0; i < n; i++){//enter nums in array
        arr[i] = rand();
    }
    while(count <= n){
        index = 0;//
        for(i = 0; i < n - 1; i++){
            if(arr[index] > arr[index + 1]){//if index element is bigger than thre next
                //swap arr[index + 1] and arr[index] (index element and the next element)
                change = arr[index];
                arr[index] = arr[index + 1];
                arr[index + 1] = change;
            }
            //index + 1 because
            index++;
        }
        count++;
    }
    for(i = 0; i < n; i++){//print sorted array
        printf("\n%d", arr[i]);
    }
    end = clock();//end of time execution
    printf("\n\n\n");
    double duration = ((double)end - start)/CLOCKS_PER_SEC;//duration = time(program)
     
    printf("Time taken to execute in seconds : %f", duration);
}

int main(double duration) {
    printf("%lf", duration);
    return 0;
}
