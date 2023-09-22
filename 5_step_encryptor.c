#include<stdio.h>
#include<string.h>

void en_step1 (char n[]);
void en_step2 (char n[]);
void en_step3 (char n[]);
void en_step4 (char n[]);
void en_step5 (char n[]);

void de_step1 (char n[]);
void de_step2 (char n[]);
void de_step3 (char n[]);
void de_step4 (char n[]);
void de_step5 (char n[]);

void encrypt(char n[]);
void decrypt(char n[]);

char n[500];

int main(){
    int ch;
    printf("enter the sentence : ");
    fgets(n, sizeof(n),stdin);
    printf("enter 1 for encryption and 0 for decryption : ");
    scanf("%d",&ch);
    ch?encrypt(n):decrypt(n);
    printf("%s",n);
    return 0;
}

void encrypt(char n[]){
    en_step1(n);
    en_step2(n);
    en_step3(n);
    en_step4(n);
    en_step5(n);    
}

void en_step1(char n[]){
    int g[500],h=0;
    while(n[h] != '\0'){
        g[h]=((int)n[h])+1;
        h++;
    }
    h=0;
    while(g[h] != 0){
        n[h]=(char) g[h];
        h++;
    }
}

void decrypt(char n[]){
    de_step1(n);
    de_step2(n);
    de_step3(n);
    de_step4(n);
    de_step5(n);
}

void de_step1 (char n[]){
    int g[500],h=0;
    while(n[h] != '\0'){
        g[h]=((int)n[h])-1;
        h++;
    }
    h=0;
    while(g[h] != 0){
        n[h]=(char) g[h];
        h++;
    }
}

void en_step2(char n[]){
    n=strrev(n);
}

void de_step2(char n[]){
    n=strrev(n);
}

void en_step3(char n[]){
    printf("\nen_step3 developing");
}

void de_step3(char n[]){
    printf("\nde_step3 developing");
}

void en_step4(char n[]){
    printf("\nen_step4 developing");
}

void de_step4(char n[]){
    printf("\nde_step4 developing");
}

void en_step5(char n[]){
    printf("\nen_step5 developing");
}

void de_step5(char n[]){
    printf("\nde_step5 developing");
}