#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, compChoice;
    
    srand(time(NULL)); // Random seed

    printf("=== ROCK 🪨 PAPER 📜 SCISSORS ✂️ GAME ===\n");
    printf("Choose your option:\n1. Rock 🪨\n2. Paper 📜\n3. Scissors ✂️\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &userChoice);

    compChoice = rand() % 3 + 1; // Computer choice 1-3

    // Show computer choice
    printf("Computer chose: ");
    if(compChoice == 1) printf("Rock 🪨\n");
    else if(compChoice == 2) printf("Paper 📜\n");
    else printf("Scissors ✂️\n");

    // Determine result
    if(userChoice == compChoice)
        printf("😐 It's a Tie!\n");
    else if((userChoice == 1 && compChoice == 3) ||
            (userChoice == 2 && compChoice == 1) ||
            (userChoice == 3 && compChoice == 2))
        printf("🎉 You Win!\n");
    else
        printf("😢 You Lose!\n");

    return 0;
}