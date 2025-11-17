#include <stdio.h>
int main(){
    int board[24][24];
    for(int i=0;i<24;i++){
        for(int j=0;j<24;j++){
            board[i][j]=0;
        }
    }
    while(1){      
        // printf(" +\n");
        int i,j;
        printf("Player A, choose your move\n");
        scanf("%d %d",&i,&j);
        if(i<0 || j<0) break;
        while(board[i][j]!=0 || i>23 || j>23){
            printf("Try Again. Invalid.\n");
            scanf("%d %d",&i,&j);
        }
        board[i][j] = -1;
        {
        printf(" ");
        for(int i=0;i<24;i++) printf(" _");
        // printf(" +");
        printf("\n");
        for(int i=0;i<24;i++){
            printf("|");
            for(int j=0;j<24;j++){
                if(board[i][j]==1) printf(" \x1b[1m\x1b[34m*\x1b[0m");
                else if(board[i][j]==-1) printf(" \x1b[1m\x1b[31m*\x1b[0m");
                else printf(" *");
            }
            printf(" |");
            printf("\n");
        }
        printf(" ");
        for(int i=0;i<24;i++) printf(" -");
        printf("\n");
        }
        printf("Player B move\n");
        scanf("%d %d",&i,&j);
        if(i<0 || j<0) break;
        while(board[i][j]!=0  || i>23 || j>23){
            printf("Try Again* Invalid*\n");
            scanf("%d %d",&i,&j);
        }
        board[i][j] = 1;
        {
        printf(" ");
        for(int i=0;i<24;i++) printf(" _");
        // printf(" +");
        printf("\n");
        for(int i=0;i<24;i++){
            printf("|");
            for(int j=0;j<24;j++){
                if(board[i][j]==1) printf(" \x1b[1m\x1b[34m*\x1b[0m");
                else if(board[i][j]==-1) printf(" \x1b[1m\x1b[31m*\x1b[0m");
                else printf(" *");
            }
            printf(" |");
            printf("\n");
        }
        printf(" ");
        for(int i=0;i<24;i++) printf(" -");
        printf("\n");
        }
    }
}

//player A  red \x1b[31m
//player B blue \x1b[34m
//reset \x1b[0m
//bold \x1b[1m