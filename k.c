#include <stdio.h>
#include <string.h>

struct Books {
    int Price;
    char Author[50];
    char Name[100];
};
struct Books B[100];
int bookCount;
int bookMax = 100;

void addBooks(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &B[i].Price);
        scanf("%s", &B[i].Author);
        scanf("%s", &B[i].Name);
        bookCount++;
    }    
}

void showBooks(){
    for(int i = 0; i < bookCount; i++){
        printf("%d %s %s\n", B[i].Price, B[i].Name, B[i].Author);
    }
}

void searchBook(){
    char nam[100];
    scanf("%s", &nam);
    for(int i = 0; i < bookCount; i++){
        if(strcmp(nam, B[i].Name) == 0){
            printf("%d %s %s\n", B[i].Price, B[i].Name, B[i].Author);
        }
    }
}

void removeBook(){
    char nam[100];
    scanf("%s", &nam);
    for(int i = 0; i < bookCount; i++){
        if(strcmp(nam, B[i].Name) == 0){
            for(int j = i; j < bookCount - 1; j++){
                B[j] = B[j+1];
            }
            bookCount--;
        }
    }
}

int main() {
     addBooks();
     showBooks();
     searchBook();
     removeBook();
     showBooks();
}
