#include "queue.h" 
#define SIZE_MSG 200     //msg size 
int key = 3;

//encrypt function

void encrypt(char temp[], char *encrypted, Queue *queue1) {
    int i;
    for (i = 0; temp[i] != '\0'; i++) {
        if (temp[i] >= 'A' && temp[i] <= 'Z') {
            char original = temp[i];
            int index = getIndex(queue1, original); 
            if (index != -1) {
                int newIndex = (index + key) % MAXQUEUE; 
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
                int newIndex = (index - key + MAXQUEUE) % MAXQUEUE;
                decrypted[i] = getChar(queue1, newIndex); 
            } else {
                decrypted[i] = temp[i]; 
            }
        } else {
            decrypted[i] = temp[i]; 
        }
    }
    decrypted[i] = '\0'; 
}



int main() {
    Queue alphabetQueue;
    CreateQueue(&alphabetQueue); 
    
    char input_msg[SIZE_MSG];
    char encrypted_msg[SIZE_MSG];
    char decrypted_msg[SIZE_MSG];
    char type;


    for (char c = 'A'; c <= 'Z'; c++) {
        Append(&alphabetQueue, c);
    }
    
    printf("\nEnter Message : ");
    fgets(input_msg, sizeof(input_msg), stdin);

    printf("\nEncryption (E) or Decryption (D)? ");
    scanf(" %c", &type);

    printf("\nEnter Shift Key: ");
    scanf(" %d", &key);

    if(type == 'E'){
        encrypt(input_msg, encrypted_msg, &alphabetQueue);
        printf("************************\n");
        printf("Encrypted message: %s", encrypted_msg);
           
    }else if(type =='D'){
        decrypt(input_msg, decrypted_msg, &alphabetQueue);
        printf("************************\n");
        printf("Decrypted message: %s", decrypted_msg);
    }else{
        printf("\nInvalid Choice \n");
    }

    return 0;
}
