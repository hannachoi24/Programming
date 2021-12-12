#include <stdio.h>

int count1 = 6;
int count2 = 6;
int count3 = 6;
int count4 = 6;
int count5 = 6;
int count6 = 6;
int count7 = 6;
int count8 = 6;
int ing = 1;
int exe = 1;

void P1_turn(char arr[7][9])
{
    int Cnumber;
    printf("P1's turn, Enter the column number:");
    scanf("%d", &Cnumber);

    switch (Cnumber)
    {
    case 1:
    {
        if (count1 != 0)
        {
            arr[count1][1] = 'O';
            count1--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 2:
    {
        if (count2 != 0)
        {
            arr[count2][2] = 'O';
            count2--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 3:
    {
        if (count3 != 0)
        {
            arr[count3][3] = 'O';
            count3--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 4:
    {
        if (count4 != 0)
        {
            arr[count4][4] = 'O';
            count4--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 5:
    {
        if (count5 != 0)
        {
            arr[count5][5] = 'O';
            count5--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 6:
    {
        if (count6 != 0)
        {
            arr[count6][6] = 'O';
            count6--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 7:
    {
        if (count7 != 0)
        {
            arr[count7][7] = 'O';
            count7--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 8:
    {
        if (count8 != 0)
        {
            arr[count8][8] = 'O';
            count8--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    }
}

void P2_turn(char arr[7][9])
{
    int Cnumber;
    printf("P2's turn, Enter the column number:");
    scanf("%d", &Cnumber);

    switch (Cnumber)
    {
    case 1:
    {
        if (count1 != 0)
        {
            arr[count1][1] = '@';
            count1--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 2:
    {
        if (count2 != 0)
        {
            arr[count2][2] = '@';
            count2--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 3:
    {
        if (count3 != 0)
        {
            arr[count3][3] = '@';
            count3--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 4:
    {
        if (count4 != 0)
        {
            arr[count4][4] = '@';
            count4--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 5:
    {
        if (count5 != 0)
        {
            arr[count5][5] = '@';
            count5--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 6:
    {
        if (count6 != 0)
        {
            arr[count6][6] = '@';
            count6--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 7:
    {
        if (count7 != 0)
        {
            arr[count7][7] = '@';
            count7--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    case 8:
    {
        if (count8 != 0)
        {
            arr[count8][8] = '@';
            count8--;
            break;
        }
        else
        {
            printf("It's FULL! Enter number again: ");
            scanf("%d", &Cnumber);
        }
    }
    }
}

void Add_Block(char arr[7][9])
{
    int addnumber;
    while (addnumber != 0)
    {
        printf("For initialization, add block: ");
        scanf("%d", &addnumber);

        switch (addnumber)
        {
        case 1:
        {
            if (count1 != 0)
            {
                arr[count1][1] = 'X';
                count1--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        case 2:
        {
            if (count2 != 0)
            {
                arr[count2][2] = 'X';
                count2--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        case 3:
        {
            if (count3 != 0)
            {
                arr[count3][3] = 'X';
                count3--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        case 4:
        {
            if (count4 != 0)
            {
                arr[count4][4] = 'X';
                count4--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        case 5:
        {
            if (count5 != 0)
            {
                arr[count5][5] = 'X';
                count5--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        case 6:
        {
            if (count6 != 0)
            {
                arr[count6][6] = 'X';
                count6--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        case 7:
        {
            if (count7 != 0)
            {
                arr[count7][7] = 'X';
                count7--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        case 8:
        {
            if (count8 != 0)
            {
                arr[count8][8] = 'X';
                count8--;
                break;
            }
            else
            {
                printf("It's FULL! Enter number again: ");
                scanf("%d", &addnumber);
            }
        }
        }
    }
}

void ViewGame(char arr[7][9])
{
    printf("  1   2   3   4   5   6   7   8 \n");
    printf("|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|\n", arr[1][1], arr[1][2], arr[1][3], arr[1][4], arr[1][5], arr[1][6], arr[1][7], arr[1][8]);
    printf("|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|\n", arr[2][1], arr[2][2], arr[2][3], arr[2][4], arr[2][5], arr[2][6], arr[2][7], arr[2][8]);
    printf("|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|\n", arr[3][1], arr[3][2], arr[3][3], arr[3][4], arr[3][5], arr[3][6], arr[3][7], arr[3][8]);
    printf("|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|\n", arr[4][1], arr[4][2], arr[4][3], arr[4][4], arr[4][5], arr[4][6], arr[4][7], arr[4][8]);
    printf("|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|\n", arr[5][1], arr[5][2], arr[5][3], arr[5][4], arr[5][5], arr[5][6], arr[5][7], arr[5][8]);
    printf("|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|_%c_|\n", arr[6][1], arr[6][2], arr[6][3], arr[6][4], arr[6][5], arr[6][6], arr[6][7], arr[6][8]);
}
///////////////////////////////////vertical_check//////////////////////////////////////////////////
void Vr_Check(char arr[7][9])
{

    int countp1 = 0;
    int countp2 = 0;

    for (int i = 6; i > 0; i--)
    {
        for (int j = 1; j < 9; j++)
        {
            if (arr[i][j] == 'O')
            {
                countp1++;
                countp2 = 0;
                if (countp1 == 4)
                {
                    printf("P1 wins!\n");
                    ing = 0;
                    break;
                }
            }
            else if (arr[i][j] == '@')
            {
                countp2++;
                countp1 = 0;
                if (countp2 == 4)
                {
                    printf("P2 wins!\n");
                    ing = 0;
                    break;
                }
            }
            else
            {
                countp1 = 0, countp2 = 0;
            }
        }
        countp1 = 0, countp2 = 0;
    }
}
/////////////////////////////////Horizontal-check///////////////////////////////////////////////////////
void Ho_Check(char arr[7][9])
{
    int countp1 = 0;
    int countp2 = 0;

    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j < 7; j++)
        {
            if (arr[j][i] == 'O')
            {
                countp1++;
                countp2 = 0;
                if (countp1 == 4)
                {
                    printf("P1 wins!\n");
                    ing = 0;
                    break;
                }
            }
            else if (arr[j][i] == '@')
            {
                countp2++;
                countp1 = 0;
                if (countp2 == 4)
                {
                    printf("P2 wins!\n");
                    ing = 0;
                    break;
                }
            }
            else
            {
                countp1 = 0, countp2 = 0;
            }
        }
        countp1 = 0, countp2 = 0;
    }
}
/////////////////////////////////////////////side_check///////////////////////////////////////////////////
void Side_Check(char arr[7][9])
{
    int countp1, countp2 = 0;

    int newarr1[] = {arr[1][1], arr[2][2], arr[3][3], arr[4][4], arr[5][5], arr[6][6]};
    for (int i = 0; i < 6; i++)
    {
        if (newarr1[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr1[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr2[] = {arr[1][2], arr[2][3], arr[3][4], arr[4][5], arr[5][6], arr[6][7]};
    for (int i = 0; i < 6; i++)
    {
        if (newarr2[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr2[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr3[] = {arr[1][3], arr[2][4], arr[3][5], arr[4][6], arr[5][7], arr[6][8]};
    for (int i = 0; i < 6; i++)
    {
        if (newarr3[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr3[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr4[] = {arr[1][4], arr[2][5], arr[3][6], arr[4][7], arr[5][8]};
    for (int i = 0; i < 5; i++)
    {
        if (newarr4[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr4[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr5[] = {arr[1][5], arr[2][6], arr[3][7], arr[4][8]};
    for (int i = 0; i < 4; i++)
    {
        if (newarr5[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr5[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr6[] = {arr[2][1], arr[3][2], arr[4][3], arr[5][4], arr[6][5]};
    for (int i = 0; i < 5; i++)
    {
        if (newarr6[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr6[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr7[] = {arr[3][1], arr[4][2], arr[5][3], arr[6][4]};
    for (int i = 0; i < 4; i++)
    {
        if (newarr7[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr7[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr8[] = {arr[1][8], arr[2][7], arr[3][6], arr[4][5], arr[5][4], arr[6][3]};
    for (int i = 0; i < 6; i++)
    {
        if (newarr8[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr8[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr9[] = {arr[1][7], arr[2][6], arr[3][5], arr[4][4], arr[5][3], arr[6][2]};
    for (int i = 0; i < 6; i++)
    {
        if (newarr9[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr9[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr10[] = {arr[1][6], arr[2][5], arr[3][4], arr[4][3], arr[5][2], arr[6][1]};
    for (int i = 0; i < 6; i++)
    {
        if (newarr10[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr10[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr11[] = {arr[1][4], arr[2][3], arr[3][2], arr[4][1]};
    for (int i = 0; i < 4; i++)
    {
        if (newarr11[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr11[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr12[] = {arr[2][7], arr[3][6], arr[4][5], arr[5][4], arr[6][3]};
    for (int i = 0; i < 5; i++)
    {
        if (newarr12[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr12[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;

    int newarr13[] = {arr[3][7], arr[4][6], arr[5][5], arr[6][4]};
    for (int i = 0; i < 4; i++)
    {
        if (newarr13[i] == 'O')
        {
            countp1++;
            countp2 = 0;
            if (countp1 == 4)
            {
                printf("P1 wins!\n");
                ing = 0;
                break;
            }
        }
        else if (newarr13[i] == '@')
        {
            countp2++;
            countp1 = 0;
            if (countp2 == 4)
            {
                printf("P2 wins!\n");
                ing = 0;
                break;
            }
        }
        else
        {
            countp1 = 0, countp2 = 0;
        }
    }
    countp1 = 0, countp2 = 0;
}

int main(void)
{

    int menu;
    while (exe)
    {
        printf("*******************\n");
        printf("1.Normal 2.Extended\n");
        printf("*******************\n");
        printf("Choose the menu: ");
        scanf("%d", &menu);

        char P1_Marker = 'O';
        char P2_Marker = '@';
        char pan[7][9] = {{'_', '_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '_'},
                          {'_', '_', '_', '_', '_', '_', '_', '_', '_'}};
        if (menu == 1)
        {
            ViewGame(pan);
            printf("P1's marker is O, P2's marker is @\n");
            while (ing)
            {
                P1_turn(pan);
                ViewGame(pan);
                Vr_Check(pan);
                Ho_Check(pan);
                Side_Check(pan);
                if (ing == 0)
                {
                    break;
                }

                P2_turn(pan);
                ViewGame(pan);
                Vr_Check(pan);
                Ho_Check(pan);
                Side_Check(pan);
            }
            ing = 1;
        }
        else if (menu == 2)
        {
            Add_Block(pan);
            printf("Game started.\n");
            while (ing)
            {
                P1_turn(pan);
                ViewGame(pan);
                Vr_Check(pan);
                Ho_Check(pan);
                Side_Check(pan);
                if (ing == 0)
                {
                    break;
                }

                P2_turn(pan);
                ViewGame(pan);
                Vr_Check(pan);
                Ho_Check(pan);
                Side_Check(pan);
            }
        }
    }
}