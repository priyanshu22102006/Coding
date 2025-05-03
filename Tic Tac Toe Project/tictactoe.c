#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Constants
#define BOARD_SIZE 3
#define PLAYER_X 'X'
#define PLAYER_O 'O'
#define EMPTY ' '


void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]);
void displayBoard(char board[BOARD_SIZE][BOARD_SIZE]);
bool makeMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char player);
bool checkWin(char board[BOARD_SIZE][BOARD_SIZE], char player);
bool checkDraw(char board[BOARD_SIZE][BOARD_SIZE]);
bool isValidMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col);
void displayInstructions();
void clearScreen();

int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    char currentPlayer = PLAYER_X;
    int row, col;
    bool gameOver = false;
    
  
    printf("\n===== TIC TAC TOE GAME =====\n\n");
    displayInstructions();
    
  
    initializeBoard(board);
    
   
    while (!gameOver) {
      
        displayBoard(board);
        
       
        printf("Player %c's turn\n", currentPlayer);
        printf("Enter row (1-3) and column (1-3) separated by space: ");
        scanf("%d %d", &row, &col);
        
      
        row--;
        col--;
        
        
        if (isValidMove(board, row, col)) {
         
            makeMove(board, row, col, currentPlayer);
            
          
            if (checkWin(board, currentPlayer)) {
                clearScreen();
                displayBoard(board);
                printf("\nPlayer %c wins!\n", currentPlayer);
                gameOver = true;
            }
           
            else if (checkDraw(board)) {
                clearScreen();
                displayBoard(board);
                printf("\nGame ends in a draw!\n");
                gameOver = true;
            }
            
            else {
                currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
                clearScreen();
            }
        } else {
            clearScreen();
            printf("Invalid move! Please try again.\n");
        }
    }
    

    char playAgain;
    printf("\nDo you want to play again? (y/n): ");
    scanf(" %c", &playAgain);
    
    if (playAgain == 'y' || playAgain == 'Y') {
        clearScreen();
        main(); 
    } else {
        printf("\nThank you for playing Tic Tac Toe!\n");
    }
    
    return 0;
}


void initializeBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = EMPTY;
        }
    }
}


void displayBoard(char board[BOARD_SIZE][BOARD_SIZE]) {
    printf("\n");
    printf("  1   2   3  \n");
    printf("-------------\n");
    
    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d|", i + 1);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1) {
                printf("|");
            }
        }
        printf("|\n");
        
        if (i < BOARD_SIZE - 1) {
            printf("-------------\n");
        }
    }
    printf("-------------\n\n");
}


bool makeMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col, char player) {
    if (isValidMove(board, row, col)) {
        board[row][col] = player;
        return true;
    }
    return false;
}


bool checkWin(char board[BOARD_SIZE][BOARD_SIZE], char player) {
    
    for (int i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player) {
            return true;
        }
    }
    
    
    for (int j = 0; j < BOARD_SIZE; j++) {
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player) {
            return true;
        }
    }
    
    
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
        return true;
    }
    
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
        return true;
    }
    
    return false;
}


bool checkDraw(char board[BOARD_SIZE][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == EMPTY) {
                return false; 
            }
        }
    }
    return true; 
}


bool isValidMove(char board[BOARD_SIZE][BOARD_SIZE], int row, int col) {
    
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE) {
        return false;
    }
    
    
    if (board[row][col] != EMPTY) {
        return false;
    }
    
    return true;
}


void displayInstructions() {
    printf("GAME INSTRUCTIONS:\n");
    printf("1. The game is played on a 3x3 grid.\n");
    printf("2. Player 1 uses 'X' and Player 2 uses 'O'.\n");
    printf("3. Players take turns marking empty cells.\n");
    printf("4. The first player to get 3 of their marks in a row (horizontally, vertically, or diagonally) wins.\n");
    printf("5. If all cells are filled and no one has won, the game is a draw.\n");
    printf("6. To make a move, enter the row number (1-3) followed by the column number (1-3).\n\n");
    printf("Press Enter to start the game...");
    getchar(); 
    clearScreen();
}


void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}