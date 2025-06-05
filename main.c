#include "queue.h"      

//encrypt function

void encrypt(char temp[], char *encrypted, Queue *queue1) {
    int i;
    for (i = 0; temp[i] != '\0'; i++) {
        if (temp[i] >= 'A' && temp[i] <= 'Z') {
            char original = temp[i];
            int index = getIndex(queue1, original); 
            if (index != -1) {
                int newIndex = (index + 3) % MAXQUEUE; 
                encrypted[i] = getChar(queue1, newIndex); 
            } else {
                encrypted[i] = temp[i]; // Keep original if not found in queue
            }
        } else {
            encrypted[i] = temp[i]; // Copy non-uppercase chars directly
        }
    }
    encrypted[i] = '\0'; // null at end
}

//  decrypt function

void decrypt(char temp[], char *decrypted, Queue *queue1) {
    int i;
    for (i = 0; temp[i] != '\0'; i++) {
        if (temp[i] >= 'A' && temp[i] <= 'Z') {
            char original = temp[i];
            int index = getIndex(queue1, original);

            if (index != -1) {
                int newIndex = (index - 3 + MAXQUEUE) % MAXQUEUE;
                decrypted[i] = getChar(queue1, newIndex); 
            } else {
                decrypted[i] = temp[i]; // Keep original if not found in queue
            }
        } else {
            decrypted[i] = temp[i]; // Copy non-uppercase chars directly
        }
    }
    decrypted[i] = '\0'; // at the end of srting
}



int main() {
    Queue alphabetQueue;
    CreateQueue(&alphabetQueue); 


    for (char c = 'A'; c <= 'Z'; c++) {
        Append(&alphabetQueue, c);
    }


    return 0;
}
