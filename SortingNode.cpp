#include "SortingNode.h"


SortingNode::SortingNode() = default;

void SortingNode::sort(std::stack<IWagon*> wagons) {
    while (!wagons.empty()){
        IWagon* wagon = wagons.top();

        if (typeid(*wagon) == typeid(IntWagon)){
            intLocomotive.push(dynamic_cast<IntWagon*>(wagon));
        } else {
            stringLocomotive.push(dynamic_cast<StringWagon*>(wagon));
        }

        wagons.pop();
    }
}

stack<IntWagon *> &SortingNode::getIntLocomotive(){
    return intLocomotive;
}

stack<StringWagon *> &SortingNode::getStringLocomotive(){
    return stringLocomotive;
}
