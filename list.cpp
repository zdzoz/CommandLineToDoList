
#include <iostream>
#include "card.hpp"
#include "list.hpp"

List::List(std::string name) {
    this->name = name;
}

std::string List::getName() {
    return name;
}

void List::addCard(Card card) {
    cards.push_back(card);
}

void List::viewList(){
    for (int i = 0; i < cards.size(); i++) {
        std::cout << cards[i].viewCard();
    }
}