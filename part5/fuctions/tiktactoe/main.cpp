#include <iostream>
#include <string>

using namespace std;
const int COLS = 3;
const int ROWS = 3;

void runGame();
void showGameBoard(string gameBoard[ROWS][COLS]);
void showCurrentGameBoard(string gameBoard[ROWS][COLS]);
void getUserInput(int xTurn, string gameBoard[ROWS][COLS]);
bool isCellOccupied(int col, int row, string gameBoard[ROWS][COLS]);
string getWinner(string gameBoard[ROWS][COLS]);
bool isBoardFull(string gameBoard[ROWS][COLS]);


int main() {
    runGame();
    return 0;
}

void runGame(){
    string winner = "";
    bool xTurn = true;
    int col = 0;
    int row = 0;
    string gameBoard[ROWS][COLS];
    showGameBoard(gameBoard);

    showCurrentGameBoard(gameBoard);

    while (winner == ""){
        if (xTurn)
        {
            cout<<"Player X should play now: "<<endl;
        }
        else {
            cout<<"Player O should play now: "<<endl;
        }
        getUserInput(xTurn, gameBoard);
        cout<<endl;
        showCurrentGameBoard(gameBoard);
        winner = getWinner(gameBoard);
        xTurn = !xTurn;

        if (winner == "" && isBoardFull(gameBoard))
        {
            winner = "C";
        }
        
    }

    cout<<endl;
    if (winner == "C")
    {
        cout<<"The game ended in tie"<<endl;
    }
    else {
        cout<<"The winner is: "<<winner<<endl;
    }
    cout<<endl;
    
};

void showGameBoard(string gameBoard[ROWS][COLS]){
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            gameBoard[row][col] = " ";
        }
        
    }
    
};

void showCurrentGameBoard(string gameBoard[ROWS][COLS]){
    for (int row = 0; row < ROWS; row++)
    {
        for (int col = 0; col < COLS; col++)
        {
            cout<<gameBoard[row][col];
            if (col < 2)
            {
                cout << " | ";
            }
            
        }
        cout<<endl;
        if (row < 2)
        {
            cout << "- - - - -"<<endl;
        }
        
    }
    cout<<endl;
};

void getUserInput(int xTurn, string gameBoard[ROWS][COLS]){
    int row = -1;
    int col = -1;
    bool takeTurn = true;
    while (takeTurn)
    {
       cout<<"Enter row and THEN column, each from 0 to 1 or 2 values seperated by a space"<<endl;
       cin >> row;
       cin >> col;
       if (row >= 0 && col >= 0 && row <=2 && col <=2)
       {
        if (!isCellOccupied(row, col, gameBoard))
        {
            takeTurn = false;
        }
        else {
            cout<<"The cell is already occupied"<<endl;
        }
        
       }
       if (xTurn)
       {
        gameBoard[row][col] = "X";
       }
       else {
        gameBoard[row][col] = "O";
       }
       
       
    }
    
};

bool isCellOccupied(int col, int row, string gameBoard[ROWS][COLS]){
    return gameBoard[row][col] != " ";
};

string getWinner(string gameBoard[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++)
    {
        if (gameBoard[i][0] != " " && gameBoard[i][0] == gameBoard[i][1] && gameBoard[i][1] == gameBoard[i][2])
        {
            return gameBoard[0][i];
        }
        
    }
    for (int i = 0; i < COLS; i++)
    {
        if (gameBoard[0][i] != " " && gameBoard[0][i] == gameBoard[1][i] && gameBoard[1][i] == gameBoard[2][i])
        {
            return gameBoard[0][i];
        }
        
    }
    if (gameBoard[0][0] != " " && gameBoard[0][0] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][2])
    {
        return gameBoard[0][0];
    }
    if (gameBoard[0][2] == " " && gameBoard[0][2] == gameBoard[1][1] && gameBoard[1][1] == gameBoard[2][0])
    {
        return gameBoard[0][2];
    }
    return "";
    
};

bool isBoardFull(string gameBoard[ROWS][COLS]){
    int filledFieldsCounter = 0;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            if (gameBoard[i][j] != " ")
            {
                filledFieldsCounter++;
            }
            
        }
        
    }

    return filledFieldsCounter == 9;
    
};
