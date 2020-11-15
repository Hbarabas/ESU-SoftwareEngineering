#include "SStack.h"

bool SStack::isEmpty(){
    return CardList::isEmpty();
}

void SStack::push(Card* c){
    append(c);
}

Card* SStack::pop(){
    return removeLast();
}