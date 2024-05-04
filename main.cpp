#include <iostream>
#include "SortingNode.h"

using namespace std;

int main() {

    stack<IWagon*> wagons;

    cout << "Enter wagons values: <wagon type (int or string)> <wagon cargo> ... 0" << endl;

    string input;
    while (cin >> input){
        if (input == "0") break;

        if (input == "int"){
            int cargo = 0;
            cin >> cargo;
            wagons.push(new IntWagon(cargo));
        } else if (input == "string"){
            string cargo;
            cin >> cargo;
            wagons.push(new StringWagon(cargo));
        }
    }

    SortingNode node;
    node.sort(wagons);

    stack<IntWagon*>& intLocomotive = node.getIntLocomotive();
    stack<StringWagon*>& strLocomotive = node.getStringLocomotive();

    cout << "Here is string wagons: " << endl;
    while (!strLocomotive.empty()){
        cout << strLocomotive.top()->getCargo() << endl;
        strLocomotive.pop();
    }

    cout << "Here is int wagons: " << endl;
    while (!intLocomotive.empty()){
        cout << intLocomotive.top()->getCargo() << endl;
        intLocomotive.pop();
    }

    return 0;
}
