#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>

void blocks(char array[3][3]);
void p1_blk(char array[3][3]);
void p2_blk(char array[3][3]);
void game_pan(char array[9][9]);
void insert_blk(char nomal_pan[9][9], char blk[3][3], int num1, int num2);
int check_collison(char nomal_pan[9][9], char nomal_pan_copy[9][9],char blk[3][3], int num1, int num2);
void rotate_90 (char blk[3][3]);

int main()
{
    int num,num1,num2,num3,key,menuselect;
    int exe = 1;
    int idx = 0;
    char nomal_pan[9][9] ={{'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'},
                           {'_','_','_','_','_','_','_','_','_'}};
    
    while(exe){
    char nomal_pan2[9][9];
    memcpy(nomal_pan2,nomal_pan,sizeof(nomal_pan));
    /////////////////// Player1's turn///////////////////////
    char nomal_blk[3][3] = {{'_','_','_'},
                            {'_','_','_'},
                            {'_','_','_'}};
    p1_blk(nomal_blk);
    int p1_true = 1;
    while(p1_true){
        game_pan(nomal_pan);
        printf("P1's block: \n");
        blocks(nomal_blk);
        int menu = 1;
        while(menu){
            printf("1.Put the block 0.Rotate the block: ");
            scanf("%d",&menuselect);
            if ( menuselect == 1){
                printf("Put you block r c: ");
                scanf("%d %d",&num1,&num2);
                p1_true = check_collison(nomal_pan,nomal_pan2,nomal_blk,num1,num2);
                menu = 0;
            }
            if (menuselect == 0){
                rotate_90(nomal_blk);
                blocks(nomal_blk);                
            }
        }

    }
    /////////////////////////////////////////////////////////
    memcpy(nomal_pan2,nomal_pan,sizeof(nomal_pan));
    printf("\n");
    /////////////////// Player2's turn///////////////////////
    char nomal_blk2[3][3] = {{'_','_','_'},
                            {'_','_','_'},
                            {'_','_','_'}};
    p2_blk(nomal_blk2);
    int p2_true =1;
    while(p2_true){
        game_pan(nomal_pan);
        printf("P2's block: \n");
        blocks(nomal_blk2);
        int menu = 1;
        while(menu){
            printf("1.Put the block 0.Rotate the block: ");
            scanf("%d",&menuselect);
            if ( menuselect == 1){
                printf("Put you block r c: ");
                scanf("%d %d",&num1,&num2);
                p2_true = check_collison(nomal_pan,nomal_pan2,nomal_blk2,num1,num2);
                menu = 0;
            }
            if (menuselect == 0){
                rotate_90(nomal_blk2);
                blocks(nomal_blk2);                
            }
        }

        // printf("P2 Put your block (r c) or Rotate (0): ");
        // scanf("%d %d",&num1,&num2);
        // p2_true = check_collison(nomal_pan,nomal_pan2,nomal_blk2,num1,num2);
    }


    printf("\n");
    }
} 



int check_collison(char nomal_pan[9][9], char nomal_pan_copy[9][9],char blk[3][3], int num1, int num2)
{
    int finish = 1;
    bool check = false;
    int temp_num2 = num2;
    int temp_num1 = num1;
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3; j++){
            if ((nomal_pan_copy[temp_num1-1][temp_num2-1]=='@'&&blk[i][j]=='O')||
            (nomal_pan_copy[temp_num1-1][temp_num2-1]=='O'&&blk[i][j]=='@')||
            (nomal_pan_copy[temp_num1-1][temp_num2-1]=='@'&&blk[i][j]=='@')||
            (nomal_pan_copy[temp_num1-1][temp_num2-1]=='O'&&blk[i][j]=='O')){
                for (int k = 0 ; k < 9 ; k++){
                    for (int a =0 ; a < 9 ; a++){
                        nomal_pan[k][a] = nomal_pan_copy[k][a];
                    }
                }
                printf("중복입니다.\n");
                check = true;
                break;
            }
            else if( (i==2) && (j ==2)){
                insert_blk(nomal_pan,blk,num1,num2);
                finish = 0;
            }
            
            temp_num2++;
        }
        if( check ==true){
            break;
        }
        else{
            temp_num1 ++;
            temp_num2 = num2;
        }
    }
    return finish;
}

void rotate_90 (char blk[3][3])
{
    char array[3][3] = {{0,0,0},
                        {0,0,0},
                        {0,0,0}};
    for (int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            array[j][2-i]= blk[i][j];
        }
    }
    for (int i = 0 ; i < 3 ; i++){
        for (int j = 0 ; j < 3 ; j++){
            blk[i][j] = array[i][j];
        }
    }
}

void insert_blk(char nomal_pan[9][9], char blk[3][3], int num1, int num2)
{
    int temp_num1 = num1;
    int temp_num2 = num2;
    for (int i = 0 ; i < 3; i++){
        for (int j = 0 ; j < 3; j++){
            if((blk[i][j] == '@')||(blk[i][j] =='O') ){
                nomal_pan[temp_num1-1][temp_num2-1] = blk[i][j];     
            }             
            temp_num2++;
        }
        temp_num1++;
        temp_num2 = num2;
    }
}

void game_pan(char array[9][9])
{
    printf("   1 2 3 4 5 6 7 8 9\n");
    printf("   _ _ _ _ _ _ _ _ _\n");
    printf("1 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[0][0],array[0][1],array[0][2],array[0][3],array[0][4],array[0][5],array[0][6],array[0][7],array[0][8]);
    printf("2 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[1][0],array[1][1],array[1][2],array[1][3],array[1][4],array[1][5],array[1][6],array[1][7],array[1][8]);
    printf("3 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[2][0],array[2][1],array[2][2],array[2][3],array[2][4],array[2][5],array[2][6],array[2][7],array[2][8]);
    printf("4 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[3][0],array[3][1],array[3][2],array[3][3],array[3][4],array[3][5],array[3][6],array[3][7],array[3][8]);
    printf("5 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[4][0],array[4][1],array[4][2],array[4][3],array[4][4],array[4][5],array[4][6],array[4][7],array[4][8]);
    printf("6 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[5][0],array[5][1],array[5][2],array[5][3],array[5][4],array[5][5],array[5][6],array[5][7],array[5][8]);
    printf("7 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[6][0],array[6][1],array[6][2],array[6][3],array[6][4],array[6][5],array[6][6],array[6][7],array[6][8]);
    printf("8 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[7][0],array[7][1],array[7][2],array[7][3],array[7][4],array[7][5],array[7][6],array[7][7],array[7][8]);
    printf("9 |%c|%c|%c|%c|%c|%c|%c|%c|%c|\n",array[8][0],array[8][1],array[8][2],array[8][3],array[8][4],array[8][5],array[8][6],array[8][7],array[8][8]);
}

void blocks(char array[3][3])
{
    printf(" _ _ _\n");
    printf("|%c|%c|%c|\n",array[0][0],array[0][1],array[0][2]);
    printf("|%c|%c|%c|\n",array[1][0],array[1][1],array[1][2]);
    printf("|%c|%c|%c|\n",array[2][0],array[2][1],array[2][2]);
}


void p1_blk(char array[3][3])
{
    srand((unsigned int)time(NULL));
    int r = rand() % 14;
    int s = rand() % 14;
    switch(r){
        case 0:
            array[0][0] = 'O'; array[0][1] = 'O'; array[0][2] = 'O';
            break;
        case 1:
            array[0][0] = 'O'; array[0][1] = 'O'; array[0][2] = 'O'; array[1][0] = 'O';
            break;
        case 2:
            array[0][0] = 'O'; array[0][1] = 'O'; array[0][2] = 'O'; array[1][2] = 'O';
            break;
        case 3:
            array[0][0] = 'O'; array[0][1] = 'O'; array[0][2] = 'O'; array[1][1] = 'O';
            break;
        case 4:
            array[0][1] = 'O'; array[0][2] = 'O'; array[1][0] = 'O'; array[1][1] = 'O';
            break;
        case 5:
            array[0][0] = 'O'; array[0][1] = 'O'; array[1][1] = 'O'; array[1][2] = 'O';
            break;
        case 6:
            array[0][0] = 'O'; array[0][1] = 'O'; array[1][0] = 'O'; array[1][1] = 'O';
            break;
        case 7:
            array[0][0] = 'O'; array[1][0] = 'O'; array[1][1] = 'O'; array[2][0] = 'O'; array[2][1] = 'O';
            break;
        case 8:
            array[0][1] = 'O'; array[0][2] = 'O'; array[1][0] = 'O'; array[1][1] = 'O'; array[2][0] = 'O';
            break;
        case 9:
            array[0][0] = 'O'; array[0][1] = 'O'; array[1][1] = 'O'; array[1][2] = 'O'; array[2][1] = 'O';
            break;
        case 10:
            array[0][1] = 'O'; array[0][2] = 'O'; array[1][0] = 'O'; array[1][1] = 'O'; array[2][1] = 'O';
            break;
        case 11:
            array[0][2] = 'O'; array[1][0] = 'O'; array[1][1] = 'O'; array[1][2] = 'O'; array[2][0] = 'O';
            break;
        case 12:
            array[0][0] = 'O'; array[1][0] = 'O'; array[1][1] = 'O'; array[1][2] = 'O'; array[2][2] = 'O';
            break;
        case 13:
            array[0][1] = 'O'; array[1][0] = 'O'; array[1][1] = 'O'; array[1][2] = 'O'; array[2][1] = 'O';
            break;
    }
}

void p2_blk(char array[3][3])
{
    srand((unsigned int)time(NULL));
    int r = rand() % 14;
    int s = rand() % 14;
    switch(s){
        case 0:
            array[0][0] = '@'; array[0][1] = '@'; array[0][2] = '@';
            break;
        case 1:
            array[0][0] = '@'; array[0][1] = '@'; array[0][2] = '@'; array[1][0] = '@';
            break;
        case 2:
            array[0][0] = '@'; array[0][1] = '@'; array[0][2] = '@'; array[1][2] = '@';
            break;
        case 3:
            array[0][0] = '@'; array[0][1] = '@'; array[0][2] = '@'; array[1][1] = '@';
            break;
        case 4:
            array[0][1] = '@'; array[0][2] = '@'; array[1][0] = '@'; array[1][1] = '@';
            break;
        case 5:
            array[0][0] = '@'; array[0][1] = '@'; array[1][1] = '@'; array[1][2] = '@';
            break;
        case 6:
            array[0][0] = '@'; array[0][1] = '@'; array[1][0] = '@'; array[1][1] = '@';
            break;
        case 7:
            array[0][0] = '@'; array[1][0] = '@'; array[1][1] = '@'; array[2][0] = '@'; array[2][1] = '@';
            break;
        case 8:
            array[0][1] = '@'; array[0][2] = '@'; array[1][0] = '@'; array[1][1] = '@'; array[2][0] = '@';
            break;
        case 9:
            array[0][0] = '@'; array[0][1] = '@'; array[1][1] = '@'; array[1][2] = '@'; array[2][1] = '@';
            break;
        case 10:
            array[0][1] = '@'; array[0][2] = '@'; array[1][0] = '@'; array[1][1] = '@'; array[2][1] = '@';
            break;
        case 11:
            array[0][2] = '@'; array[1][0] = '@'; array[1][1] = '@'; array[1][2] = '@'; array[2][0] = '@';
            break;
        case 12:
            array[0][0] = '@'; array[1][0] = '@'; array[1][1] = '@'; array[1][2] = '@'; array[2][2] = '@';
            break;
        case 13:
            array[0][1] = '@'; array[1][0] = '@'; array[1][1] = '@'; array[1][2] = '@'; array[2][1] = '@';
            break;
    }
}

void whoIsWin(char pan[9][9], char blk[3][3])
{
    
}