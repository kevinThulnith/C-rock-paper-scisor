# C-rock-paper-scissor

This is a simple implementation of the Rock-Paper-Scissors game in C.

## How to Play

1. Run the executable `RPS.exe`.
2. Enter your name when prompted.
3. Choose your move by entering the corresponding number:
   - 1 for Rock
   - 2 for Paper
   - 3 for Scissors
   - 4 to Quit the game
4. The computer will randomly choose its move.
5. The result of the round will be displayed.
6. You can choose to play another round or quit the game.

## Game Rules

- Rock beats Scissors
- Scissors beats Paper
- Paper beats Rock
- If both players choose the same move, the round is a tie.

## Compilation

To compile the code, use the following command:

```sh
gcc -o RPS RPS.c
```
