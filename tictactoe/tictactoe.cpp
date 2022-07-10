#include <iostream>

void printBoard(int board[3][3])
{
    std::cout << std::endl;
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    int board[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };

    printBoard(board);


    std::cin >> board[0][0];
    printBoard(board);

    std::cin >> board[0][1];
    printBoard(board);

    std::cin >> board[0][2];
    printBoard(board);

    std::cin >> board[1][0];
    printBoard(board);

    std::cin >> board[1][1];
    printBoard(board);

    std::cin >> board[1][2];
    printBoard(board);

    std::cin >> board[2][0];
    printBoard(board);

    std::cin >> board[2][1];
    printBoard(board);

    std::cin >> board[2][2];
    printBoard(board);

    return 0;
}