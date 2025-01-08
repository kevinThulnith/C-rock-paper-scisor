#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to play the game
void game() {
  int plyr, cmptr, plyrScr, cmptrScr, rnds;
  char choices[4][10] = {"rock", "paper", "scissor", "quit"};

  // Clear the screen
  system("cls");
  printf("\n---------- Rock Paper Scissor ---------- \n\n");
  printf(" Numbers and Choices \n\n   1. Rock\n   2. Paper\n   3. Scissor\n   4. Qiut \n");

  // Seed the random number generator with the current time
  srand(time(NULL));
  plyrScr = 0;
  cmptrScr = 0;
  rnds = 0;

  // Main game loop
  while (1) {
    printf("\n Choose your move : ");
    scanf("%i", &plyr);

    // Check for invalid choice
    if (plyr > 4 || plyr < 1) {
      printf("\n Invalide Choice !!");
      continue;
    } else if ( plyr == 4) {
      break;
    }

    // TODO: Generate random number for computer's move
    cmptr = rand() % 3;
    plyr -= 1; // !Adjust player's choice to match array index

    // Display choices
    printf("\n Player : %s", &choices[plyr]);
    printf("\n Computer : %s \n", &choices[cmptr]);

    // Determine the round winner
    if(plyr == cmptr) {
      printf("\n Tie Round !!! \n");
    } else if((plyr == 0 && cmptr == 2) || (plyr == 1 && cmptr == 0) || (plyr == 2 && cmptr == 2)) {
      printf("\n You Win !!! \n");
      plyrScr += 1;
    } else {
      printf("\n Computer Win !!! \n");
      cmptrScr += 1;
    }
    rnds += 1; // TODO: Increment round counter
  }

  // TODO: Clear the screen and display final scores
  system("cls");
  printf(" Number of Rounds : %i \n Player Score : %i \n Computer Score : %i \n", rnds, plyr, cmptr);
  if (plyr == cmptr) printf(" Tie Game !!!");
  else if (plyr > cmptr) printf(" Player Wins!!!");
  else (" Computer Wins!!!");
}

int main() {
  // Variables
  int rnds = 0;
  char playrnme[30];
  char nm;

  // Get plater name
  printf("Enter Name : ");
  scanf("%s", playrnme);
  system("cls");

  // Main loop to play multiple games
  while (1) {
    if (rnds == 0) {
      printf("Press enter to continue...");
      getchar();
      getchar();
      rnds += 1;
      game();
    } else {
      printf("\n\n Want to play again (y /n)? ");
      scanf(" %c", &nm);
      if (nm == 'n' || nm == 'N') {
        break;
      } else if (nm == 'y' || nm == 'Y') {
        game();
      } else {
        printf("Invalid input. Please enter 'y' or 'n'.\n");
      }
    }
  }
  printf(" Bye %s !\n", playrnme);
  return 0;
};

