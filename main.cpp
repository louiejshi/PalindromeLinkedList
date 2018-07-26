// PalindromeLinkedList
//
// Checks if a LinkedList of int is a palindrome
//
// main.cpp
//
//  Created by Louie Shi on 7/26/18.
//  Copyright © 2018 Louie Shi. All rights reserved.
//

#include <iostream>
#include "LinkedList.h"

using namespace std;

bool palindrome(LinkedList* ls)
{
    ListNode* p = ls->head;
    ListNode* q = ls->tail;
    
    if(!p && !q)    //EMPTY List
    {
        return false;
    }
    
    while(p != q)
    {
        if(p->getData() != q->getData())
        {
            return false;
        }
        
        p = p->getNext();   //Increment p forward
        q = q->getPrev();   //Decrement q backward
    }

    return true;
}


int main(int argc, const char * argv[])
{
    bool isPal = false;
    LinkedList* l1 = new LinkedList();
    
    ListNode* ln1 = new ListNode(1);
    ListNode* ln2 = new ListNode(1);
    ListNode* ln3 = new ListNode(3);
    ListNode* ln4 = new ListNode(1);
    
    l1->insertEnd(ln1);
    l1->insertEnd(ln2);
    l1->insertEnd(ln3);
    //l1->insertEnd(ln4);
    
    l1->print();
    
    isPal = palindrome(l1);
    
    if(isPal)
    {
        cout << "The LinkedList is a Palindrome!" << endl;
    }
    else
    {
        cout << "The LinkedList is NOT a Palindrome!" << endl;
    }
    
    return 0;
}
