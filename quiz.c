#include <stdio.h>

int main() {
    int i;
    int ans1, ans2, ans3, ans4, ans5;
    int points = 0;

    printf("Welcome to the game\n\n");
    printf(">> Press 7 to start\n");
    printf(">> Press 0 to quit\n");

    scanf("%d", &i);
    if (i == 7) {
        printf("The game has started\n");
    } else if (i == 0) {
        printf("The game has ended\n");
        return 0;  // Exit the program if the user chooses to quit
    } else {
        printf("Invalid input\n");
        return 0;  // Exit the program if the user enters an invalid option
    }

    if (i == 7) {
        printf("1. Which is the first search engine on the internet?\n");
        printf("1. Google\n");
        printf("2. Archie\n");
        printf("3. Bing\n");
        printf("4. Yahoo\n");
        
        printf("Enter your answer: ");
        scanf("%d", &ans1);
        
        if (ans1 == 2) {
            printf("Correct answer!!!\n");
            points += 5;
        } else {
            printf("Wrong answer\n");
        }
        printf("You have scored %d points\n\n", points);

        printf("2. Who is known as the father of the computer?\n");
        printf("1. Alan Turing\n");
        printf("2. Charles Babbage\n");
        printf("3. John von Neumann\n");
        printf("4. Bill Gates\n");

        printf("Enter your answer: ");
        scanf("%d", &ans2);

        if (ans2 == 2) {
            printf("Correct answer!!!\n");
            points += 5;
        } else {
            printf("Wrong answer\n");
        }
        printf("You have scored %d points\n\n", points);

        printf("3. What does 'CPU' stand for?\n");
        printf("1. Central Processing Unit\n");
        printf("2. Computer Personal Unit\n");
        printf("3. Central Program Unit\n");
        printf("4. Central Processor Utility\n");

        printf("Enter your answer: ");
        scanf("%d", &ans3);

        if (ans3 == 1) {
            printf("Correct answer!!!\n");
            points += 5;
        } else {
            printf("Wrong answer\n");
        }
        printf("You have scored %d points\n\n", points);

        printf("4. What is the time complexity of binary search algorithm?\n");
        printf("1. O(n)\n");
        printf("2. O(n^2)\n");
        printf("3. O(log n)\n");
        printf("4. O(1)\n");

        printf("Enter your answer: ");
        scanf("%d", &ans4);

        if (ans4 == 3) {
            printf("Correct answer!!!\n");
            points += 5;
        } else {
            printf("Wrong answer\n");
        }
        printf("You have scored %d points\n\n", points);

        printf("5. Which programming language is known as the backbone of web development?\n");
        printf("1. Python\n");
        printf("2. Java\n");
        printf("3. C++\n");
        printf("4. JavaScript\n");

        printf("Enter your answer: ");
        scanf("%d", &ans5);

        if (ans5 == 4) {
            printf("Correct answer!!!\n");
            points += 5;
        } else {
            printf("Wrong answer\n");
        }
        printf("You have scored %d points\n\n", points);

        printf("Total points scored: %d\n", points);
    }

    return 0;
}
