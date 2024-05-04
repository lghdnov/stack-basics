#ifndef STACK_BASICS_SORTINGNODE_H
#define STACK_BASICS_SORTINGNODE_H

#include <stack>
#include <typeinfo>

#include "railway.h"

class SortingNode {
private:
    std::stack<IntWagon*> intLocomotive;
    std::stack<StringWagon*> stringLocomotive;
public:
    SortingNode();
    void sort(std::stack<IWagon*> wagons);

    stack<IntWagon*> &getIntLocomotive();
    stack<StringWagon*> &getStringLocomotive();
};


#endif //STACK_BASICS_SORTINGNODE_H
