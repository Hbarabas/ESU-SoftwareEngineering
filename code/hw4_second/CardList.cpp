#include "CardList.h"
bool CardList::isEmpty(){
    return (v.empty());
}

CardList::CardList() {
    numCards = 0;
    current_index = 0;
}

void CardList::append(Card* c){
    v.push_back(c);
    numCards++;
}

Card* CardList::removeLast(){
    current_index = 0;
    Card* temp=v.back();
    numCards--;
    v.pop_back();
    return temp;
}

Card* CardList::getFirst(){
    if(isEmpty())
    {
        current_index = 0;
        throw "End of cardlist";
    }
    else{
        current_index = 1;
        return v.front();
    }
}

Card* CardList::getNext(){
    if(current_index<numCards){
        current_index = 0;
        throw "EndOfCardList";
    }
    else {
        Card* temp = v.at(current_index);
        current_index++;
        return temp;
    }
}