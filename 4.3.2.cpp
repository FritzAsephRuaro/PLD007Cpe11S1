#include <iostream>

using namespace std;

	int main() {
   		 char chessboard[8][8] = {
   	    	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
    		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    		{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
			{' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    		{'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    		{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
    };

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << chessboard[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}
