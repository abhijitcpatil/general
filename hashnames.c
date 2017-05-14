#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define size 27
#define BUFMAXSIZE 1024

struct node{
        char *s;
        struct node *next;
};

struct node* table[size];

int generatehashkey(const char *name)
{
        int x = tolower(name[0])- 97;
        if (x < 0 || x > 25)
           x = 26;
        return x;
}

void insertnameatnode(const char *value, struct node* current,int index)
{
        if (!current) {
                current = (struct node*) malloc(sizeof(struct node));
                current->s = malloc(sizeof(char)*50);
                strcpy(current->s, value);
                current->next = NULL;
                table[index] = current;
        } else {
                struct node *newnode = (struct node*) malloc(sizeof(struct node));
                newnode->next = current;
                newnode->s = malloc(sizeof(char)*50);
                strcpy(newnode->s, value);
                table[index] = newnode;
        }

}

void insertname(const char *word)
{
        int index = 0;
        struct node* current;
        index = generatehashkey(word);
        current = table[index];
        insertnameatnode(word, current,index);

}

void print()
{
        struct node* temp;
        int i;
        for(i =0; i< size; i++)
        {
                printf("\n%d --> ",i);
                temp = table[i];
                while (temp) {
                        printf("%s   ",temp->s);
                        temp = temp->next;
                }
        }
        printf("\n");
}

int main()
{
        char file_name[50];
        FILE *fp;
        const char *token;
        char buffer[BUFMAXSIZE];
        char delimit[1]={' '};

        printf("Enter the name of the file to be read:\n");
        scanf("%s",file_name);

        fp = fopen(file_name,"r");

        if (fp == NULL)
        {
                printf("Error in opening file");
                exit (EXIT_FAILURE);
        }

        while (fgets(buffer, BUFMAXSIZE, fp) != NULL) 
        {
                token = strtok(buffer," ,\n");
                while (token != NULL) {
                        insertname(token);
                        token = strtok (NULL, " ,\n");
                }
        }

        fclose(fp);
        print();
}
