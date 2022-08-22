/**
 * @file 17_9.cpp
 * @author Liu Haoxin (lhxone@outlook.com)
 * @brief
 * @version 0.1
 * @date 2022-08-19
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <cmath>

typedef struct Node
{
    int data;
    Node *next;
} Node, *List;

void InitList(List &head, int n)
{
    head = NULL;
    Node *pre;
    for (int i = 0; i < n; i++)
    {
        Node *new_node = new Node;
        new_node->data = random() % 10;
        if (head == NULL)
        {
            head = new_node;
            pre = new_node;
        }
        else
        {
            pre->next = new_node;
            pre = new_node;
        }
    }
    pre->next = head;
}

void DeletNode(List &head, Node *node)
{
    if (node == NULL || head == NULL)
        return;
    else
    {
        if (node->next->next == node->next)
        {
            free(node);
            head = NULL;
        }
        else
        {
            node->next = node->next->next;
        }
    }
}

void PrintList(List head)
{
    if (head == NULL)
    {
        return;
    }
    printf("%d->", head->data);
    for (Node *node = head->next; node != head; node = node->next)
    {
        printf("%d->", node->data);
    }
    printf("head\n");
}

bool isNULLList(List head)
{
    if (head == NULL)
        return true;
    if (head->next->next == head->next)
    {
        return true;
    }
    else
    {
        return false;
    }
}

Node *getLocationByHead(List head, int n)
{
    Node *node = head;
    for (int i = 0; i < n; ++i)
    {
        node = node->next;
    }
    return node;
}

Node *getLocationByNode(Node *node, int n)
{
    Node *node1 = node;
    for (int i = 0; i < n - 1; ++i)
    {
        node1 = node1->next;
    }
    return node1;
}

int main()
{
    int n, i, k;
    scanf("%d %d %d", &n, &i, &k);
    List head = new Node;
    InitList(head, n);
    PrintList(head);
    Node *start = getLocationByHead(head, i);
    while (1)
    {
        Node *node = getLocationByNode(start, k);
        start = node->next;
        DeletNode(head, node);
        PrintList(head);
        if (isNULLList(head))
            break;
    }
}
