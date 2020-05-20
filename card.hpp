#pragma once
#include <string>

class Card {

    bool status;
    std::string text;
public:
    Card(std::string text, bool status = false);

    void setStatus(bool status);
    std::string viewCard();

};