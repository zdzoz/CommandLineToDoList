#pragma once
#include <string>
#include <vector>
#include "card.hpp"

class List {

    std::string name;
    std::vector<Card> cards;
public:

    List(std::string name);

    std::string getName();

    void addCard(Card card);

    void viewList();


};