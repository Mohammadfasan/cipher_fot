#include "queue.h"      

int main() {
    Queue alphabetQueue;
    CreateQueue(&alphabetQueue); 


    for (char c = 'A'; c <= 'Z'; c++) {
        Append(&alphabetQueue, c);
    }


    return 0;
}
