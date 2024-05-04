#ifndef STACK_BASICS_RAILWAY_H
#define STACK_BASICS_RAILWAY_H

#include <string>
#include <utility>

using namespace std;

class IWagon{
protected:
    string cargo;
public:
    virtual string getCargo() = 0;
};


class StringWagon : public IWagon{
public:
    explicit StringWagon(string cargo){
        this->cargo = std::move(cargo);
    }

    string getCargo() override{
        return cargo;
    }
};


class IntWagon: public IWagon{
public:
    explicit IntWagon(int cargo){
        this->cargo = to_string(cargo);
    }

    std::string getCargo() override{
        return cargo;
    }
};

#endif //STACK_BASICS_RAILWAY_H
