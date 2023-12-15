// LinkedList_VTC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

struct Element {
    int data;
    Element *pointer=nullptr;
};
struct LinkedList
{ 
    Element* head=nullptr;
    Element* tail = nullptr;

};
void InsertFirst(LinkedList *L,Element *p) {
    if (L->head == nullptr) L->head =L->tail =p;
    else
    {
        p->pointer = L->head;
        L->head = p;
    }
}
void PrintList(LinkedList* L) {
    Element* p = L->head;
    while (p != nullptr) {
        std::cout << p->data << "\n";
        p = p->pointer;

    }
}
int main()
{

    LinkedList* L = new LinkedList;
    Element* e = new Element;
    e->data = 8;
    e->pointer = nullptr;
    InsertFirst(L, e);

    e = new Element;
    e->data = 9;
    e->pointer = nullptr;
    InsertFirst(L, e);

    e = new Element;
    e->data = 3;
    e->pointer = nullptr;
    InsertFirst(L, e);

    e = new Element;
    e->data = 1;
    e->pointer = nullptr;
    InsertFirst(L, e);

    PrintList(L);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
