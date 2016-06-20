#include <stdio.h>
#include <time.h>
int go(int level);

int main(void){
    int level = 10; // 10 levels hh
    int result;
    // welcome !
	printf("welcome to \"guess me\" game !\n");
    printf("all you have to do is guess a number from 0 to 100 \n");
    printf("if you try more than 10 times you loose ;) \n");
    // or true
	while(1){
        // print the level
        printf("--------------------------------------------\n");
        printf("LAVEL %d UNLOCKED\n",10-level);
        // if number of tries > lavel
        result = go(level);
        if(result==0){
            printf("you lost !\n");
        }else{
            // logic hhh
            printf("YOU WIN!\n");
            printf("you tried %d times\n",result);
            // next level
            if(level>1)level--;
        }
	}
}
int go(int level){
    int r = 0; // random number
	int v = 0; // variable
	int x = 0; // n tries
	time_t t;
    // generate a number 1 > 100
    srand((unsigned) time(&t));
	r = rand() % 100;

	// game start
	while(v!=r){
        if(x==level)return 0;
        x++;
        printf("the number is : ");
        scanf("%d",&v);
        if(v>r){
            printf("the number you entered %d is greater\n",v);
        }
        if(v<r){
            printf("the number you entered %d is fewer\n",v);
        }

	}
    printf("ooops  you got me ! the number is : %d\n",r);
	return x;
}
