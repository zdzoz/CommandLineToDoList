#include <iostream>
#include "card.hpp"

Card::Card(std::string text, bool status) {
    this->text = text;
    this->status = status;
}

void Card::setStatus(bool status) {
    this->status = status;
}

std::string Card::viewCard(){
    std::string s = (status) ? "☑":"☐";
    s += " " + text + "\n";
    return s;
}
