#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
list.txt 파일을 읽어들여, 각 단어들의 등장 횟수를 세어 출력하는 프로그램을 작성하세요.
HINT: fopen, fscanf 등으로 내용을 읽으세요. 
읽은 내용을 담을 문자열 배열 (char [][]) 과 각 문자열이 등장한 횟수를 저장할 배열 (int []) 을 각각 유지하세요. 
새로운 단어를 읽으면 문자열 배열 및 등장 횟수 배열에 값을 추가하고, 
이미 존재하는 단어를 읽으면 (strncmp 등 활용) 등장 횟수 배열의 값만 증가 시키세요. */

#define MAX 1000

char SIGN[] = " .,!?:\"\t\r\n";

typedef struct List
{
    char *word;
    int count;
    struct List *next;
} List;

List head = {
    0,
};
List *tail = &head;

int word_count = 0; // # of words
List **W = 0;

//////////////////////////////////////////////////////////////////////////
void list2array(List *head, List **W)
{
    List *temp = head->next;
    int i = 0;
    while (temp)
    {
        W[i++] = temp;
        temp = temp->next;
    }
}

void printW(List **W, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%20s : %d\n", W[i]->word, W[i]->count);
    }
}

//////////////////////////////////////////////////////////////////////////
List *FindToken(const char *token)
{
    List *temp = head.next;
    while (temp)
    {
        if (strcmp(temp->word, token) == 0)
            return temp;
        temp = temp->next;
    }
    return 0;
}

//////////////////////////////////////////////////////////////////////////
void InsertList(char *token)
{
    List *temp = FindToken(token);
    if (temp) // Found,
    {
        temp->count++;
    }
    else
    {
        int len = strlen(token) + 1;
        temp = (List *)malloc(sizeof(List));
        temp->word = (char *)malloc(sizeof(char) * len);
        strncpy(temp->word, token, len);
        temp->count = 1;
        temp->next = 0;
        tail->next = temp;
        tail = temp;

        word_count++;
    }
}

//////////////////////////////////////////////////////////////////////////
void print_token()
{
    List *temp = head.next;
    FILE *fw = fopen("daul\\list.txt", "wt");

    while (temp)
    {
        fprintf(fw, "%s : %d\n", temp->word, temp->count);
        temp = temp->next;
    }
    fclose(fw);
}

//////////////////////////////////////////////////////////////////////////
void free_token()
{
    List *temp;
    while (temp = head.next)
    {
        if (temp->word)
            free(temp->word);

        head.next = temp->next;
        free(temp);
    }
    tail = &head;
}

//////////////////////////////////////////////////////////////////////////
typedef List *T; // 정렬할 자료형 T

void swap(T *a, T *b)
{
    T t = *a;
    *a = *b;
    *b = t;
}

int comp(const void *pa, const void *pb)
{
    const T a = *(const T *)pa;
    const T b = *(const T *)pb;

    return strcmp(a->word, b->word);
}

int partition(T *A, int left, int right, int pivot)
{
    int i, index;
    T value = A[pivot];

    swap(&A[pivot], &A[right]);
    index = left;
    for (i = left; i < right; i++)
    {
        if (comp(&A[i], &value) < 0)
        {
            swap(&A[i], &A[index]);
            ++index;
        }
    }
    swap(&A[index], &A[right]);
    return index;
}

void quickpart(T *A, int left, int right)
{
    int pivot;
    int index;

    if (right > left)
    {
        pivot = (right + left) / 2;
        index = partition(A, left, right, pivot);
        quickpart(A, left, index - 1);
        quickpart(A, index + 1, right);
    }
}

void quicksort(T *A, int n)
{
    quickpart(A, 0, n - 1);
}

//////////////////////////////////////////////////////////////////////////
int main(void)
{
    char *str;   // File total Length,
    char *token; // token,
    long length; // 파일전체길이
    int i = 0;

    FILE *fp = fopen("list.txt", "rt");

    // Open not file,
    if (fp == NULL)
    {
        puts("File open fail!");
        return -1;
    }

    fseek(fp, 0, SEEK_END);
    length = ftell(fp);
    rewind(fp);

    str = (char *)malloc(sizeof(char) * length + 1);
    memset(str, 0, sizeof(char) * length + 1);

    puts("*** Data File Reading.. ***");

    fread(str, 1, length, fp);
    fclose(fp);

    // 단어 수집
    token = strtok(str, SIGN);
    while (token != NULL)
    {
        InsertList(token);
        // 두번째토큰, 호출부터는 첫 번째 인수자리에 NULL 기입
        token = strtok(NULL, SIGN);
    }

    // 단어의 포인터 배열
    W = (List **)malloc(sizeof(List *) * word_count);
    list2array(&head, W); // 리스트에서 배열로

    quicksort(W, word_count); // 정렬
                              //     qsort(W,word_count,sizeof(T),comp); // 정렬

    printW(W, word_count); // 정렬 출력

    free(W);
    free_token();

    return 0;
}
