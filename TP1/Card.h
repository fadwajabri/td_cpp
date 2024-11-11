#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>


class Card{
    public:
        Card(const std::string& name) ;
        virtual void displayInfo() const;
        virtual ~Card();
    protected:
        std::string cardName ;
};


#endif
