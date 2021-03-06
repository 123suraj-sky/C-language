#include <stdio.h>
#include <stdlib.h>

struct stats
{
    int account;
    float balance;
    struct stats *next;
};

void fill_structure(struct stats *s);
struct stats *create(void);

int main()
{
    struct stats *first;
    struct stats *current;
    struct stats *new; // change name if necessary
    int x;

    // create first structure
    first = create();
    current = first;

    for (int i = 0; i < 5; i++)
    {
        if (i == 0)
        {
            first = create();
            current = first;
        }
        else
        {
            new = create();
            current->next = new;
            current = new;
        }
        fill_structure(current);
    }
    current->next = NULL;

    return 0;
}

// Fill a structure
void fill_structure(struct stats *s)
{
    printf("Account number: ");
    scanf("%d", &s->account);
    printf("Balance: $");
    scanf("%f", &s->balance);
    s->next = NULL;
}

// Allocate storage for one new structure
struct stats *create(void)
{
    struct stats *baby;
    baby = (struct stats *)malloc(sizeof(struct stats));
    if (baby == NULL)
    {
        puts("Memory error");
        exit(1);
    }
    return (baby);
}