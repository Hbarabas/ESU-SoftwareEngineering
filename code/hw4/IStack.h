#ifndef ISTACK_H 
#define ISTACK_H
#include "ICard.h"

class IStack{
    public:
        IStack();
        virtual void push(ICard*) = 0;
};


#endif 