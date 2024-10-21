#include <iostream>
using namespace std;

const int RESPONSE_SIZE = 40;

int main() {
    int responses[RESPONSE_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7, 5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};
    int responseCounts[10] = {0};

   	 for (int i = 0; i < RESPONSE_SIZE; i++) {
   	     responseCounts[responses[i] - 1]++;
  	  }
   	 cout << "Response\t Count" << endl;
   		 for (int i = 0; i < 10; i++) {
   	     	cout << i + 1 << "\t\t" << responseCounts[i] << endl;
  }
    return 0;
}

