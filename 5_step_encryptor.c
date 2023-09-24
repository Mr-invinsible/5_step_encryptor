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

void encrypt(char n[],int code);
void decrypt(char n[],int code);

char n[500];

int main(){
    int ch,code;
    printf("enter the sentence : ");
    fgets(n, sizeof(n),stdin);
    printf("enter 1 for encryption and 0 for decryption : ");
    scanf("%d",&ch);
    printf("enter the encyption code \n(5 digit code with every digit having value from 1 to 5) : ");
    scanf("%d",&code);
    ch?encrypt(n,code):decrypt(n,code);
    printf("%s",n);
    return 0;
}

void encrypt(char n[],int code){
    int d;
    while(code != 0){
        d=code%10;
        code/=10;
        switch (d)
        {
        case 1:
            en_step1(n);
            break;
        case 2:
            en_step2(n);
            break;
        case 3:
            en_step3(n);
            break;
        case 4:
            en_step4(n);
            break;
        case 5:
            en_step5(n);
            break;
        default:
            printf("entered the wrong code");
            break;
        }
    } 
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

void decrypt(char n[],int code){
    int d,edoc=0;
    while(code != 0){
        edoc*=10;
        d=code%10;
        edoc+=d;
        code/=10;
    }
    while(edoc != 0){
        d=edoc%10;
        edoc/=10;
        switch (d)
        {
        case 1:
            de_step1(n);
            break;
        case 2:
            de_step2(n);
            break;
        case 3:
            de_step3(n);
            break;
        case 4:
            de_step4(n);
            break;
        case 5:
            de_step5(n);
            break;
        default:
            printf("entered the wrong code");
            break;
        }
    }
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
    printf("\nen_step3 developing\n");
}

void de_step3(char n[]){
    printf("\nde_step3 developing\n");
}

void en_step4(char n[]){
    printf("\nen_step4 developing\n");
}

void de_step4(char n[]){
    printf("\nde_step4 developing\n");
}

void en_step5(char n[]){
    printf("\nen_step5 developing\n");
}

void de_step5(char n[]){
    printf("\nde_step5 developing\n");
}