#ifndef BIGINTEGER_H
#define BIGINTEGER_H

struct node
{
    int data;
    struct node *next;
};

struct BigInteger
{
    struct node *head;
    int len;
};

struct BigInteger add(struct BigInteger a, struct BigInteger b);
struct BigInteger sub(struct BigInteger a, struct BigInteger b);
struct BigInteger mul(struct BigInteger a, struct BigInteger b);
void display(struct BigInteger a);
struct BigInteger initialize(char *ch);

#endif
