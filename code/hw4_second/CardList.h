#ifndef CARDLIST_H
#define CARDLIST_H
#include "IReadCardList.h"
#include <vector>

class CardList: virtual public IReadCardList{
    private:
        int numCards;
        std::vector<Card*> v;
        int current_index;
    public:
        CardList();
        Card* getFirst();
        Card* getNext();
        void append(Card*);
        Card* removeLast();
        bool isEmpty();
};

#endif