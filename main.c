//
//  main.c
//  caesar cipher
//
//  Created by srijan vikram on 26/02/23.
//

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

void caesarCipher(char* plainText , int key);
int main(void){
    int key = 1;
    char plainText[500];
    printf("Enter the text you want to encrypt : ");
    fgets(plainText, sizeof(plainText), stdin);
    printf("the ciphered text is : ");
    caesarCipher(plainText, key);
    
    system("pause");
}
void caesarCipher(char* plainText, int key){
    int i=0;
    int cypherValue;
    char cypher;
    while(plainText[i] != '\0' && strlen(plainText)-1 > i){
        cypherValue = ((int)plainText[i] -97 + key) % 26 + 97;
        cypher = (char)(cypherValue);
        
        printf("%c", cypher);
        i++;
    }
    printf("\n");
}
