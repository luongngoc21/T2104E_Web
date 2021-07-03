#include<stdio.h>
#include<string.h>
/*Exercise 1:
  Write a function to check a number is a prime.
 */
int isPrime(int x){
	int count = 0;
	for(int i =2; i<n; i++){
	    if(n % i = 0){
	        count ++;
	    }
	}
	if(count>0){
	    return 0;
	}else{
	    return 1;
	}
}
/*
Exercise 2:
Write a program to enter two natural numbers (n and m) from a keyboard.
Using isPrime() function in the Exersise 1 to display all prime numbers between n and m.
*/

void inputTwoNumber (int m ,int n){
    printf("Please, enter a number :\n");
    printf(" + m : ");
    scanf(%d, &m);
    printf(" + n : ");
    scanf(%d, &n);
}

void midPrimeNumber(int m,int n){
    int max,min;
    if(m>n){
        max = m;
        min = n;
    }else if(n>m){
        max= n;
        min= m;
    }else{
        printf("No number between M and N");
    }
    for(int i = min; i < max, i++){
        if(isPrime(i)==1){
            printf(i+"/n")
        }
    }
}

int main(){
    int m,n;
    inputTwoNumber(m,n);
	midPrimeNumber(m,n);
}