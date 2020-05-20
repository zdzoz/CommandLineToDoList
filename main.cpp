#include <iostream>
#include <vector>
#include <string>
#include "card.hpp"
#include "list.hpp"


int main (int argc, char *argv[]) {
    
    std::vector<List> lists;
    Card card1("Write this To do list app", true);
    Card card2("fix it");
    Card card3("...");
    Card card4("PROFIT!");
    List list("App Creation");
    list.addCard(card1);
    list.addCard(card2);
    list.addCard(card3);
    list.addCard(card4);

    lists.push_back(list);
    while (true){
        std::cout << "Select a list to view or type 0 to create a new list:" << std::endl;
        for (int i = 0; i < lists.size(); i++) {
            std::cout << i+1 << ": " << lists[i].getName() << std::endl; 
        }
        std::cout << "list size: " << std::to_string(lists.size()) << std::endl;
        int choice;
        std::cin >> choice;
        choice--;
        // std::cout << choice;
        if (choice != -1 && choice <= lists.size()){
            lists[choice].viewList();
            int choice2;
            std::cout << "(1) to add new card; (2) change status; (0) to continue\n";
            std::cin >> choice2;
            if (choice2 == 1) {
                std::string cchoice;
                std::cout << "Enter a card name: ";
                std::cin >> cchoice;
                Card c(cchoice);
                lists[choice].addCard(c);
            } else if (choice2 == 2) {
                // Implement change status
                std::cout << "change status (not implemented)\n";
            }
        } else if (choice == -1) {
            // create new list
            std::cout << "Create new list (not implemented)\n";
        } else {
            std::cout << "Exiting Program" << std::endl;
            break;
        }
        std::cout << std::endl;
    }
    
    return 0;
}
