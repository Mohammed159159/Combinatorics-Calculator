#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// Define the functions
long long p(int n, int r);
long long c(int n, int r);
void output();
void input();

// Define the variables
int n, r;
char character;

void main() {

    // Excuting code
    input();
    output();

}

// Function for inputting data
void input() {
    // Introduction
    printf("Welcome to Permutations and Combination Calculator!....\n");
    printf("---Use this program as you would use a Calculator for computing Permutations and Combination---\n");
    printf("---For Example: 5c3 or 5C3---\n");
    for (int i = 0; i < 40; i++) printf(" = ");
    printf("\n");

    scanf("%d  %c %d", &n, &character, &r);
}

// Function for outputting data
void output()
{
    // Checking for math error
    if (n < r)
    {
        printf("Math Error: n cannot be less than r");
    }

    // Identifying the requred computation
    else if (character == *"p" || character == *"P")
    {
        printf("Ans: %lld", p(n, r));
    }
    else if (character == *"c" || character == *"C")
    {
        printf("Anse: %lld", c(n, r));
    }

    // Handling invalid input
    else printf("\n INVALID... Please try again");
}


// Permutation function
long long p(int n, int r) {

    if (r == 0)  // Exception
    {
        return 1;
    }
    else {

        long long ans = n;


        for (int i = n - 1; i >= (n - r) + 1; i--)
        {
            ans *= i;
        }

        return ans;
    }


}

// Combination function
long long c(int n, int r) {

    return p(n, r) / p(r, r);
}


