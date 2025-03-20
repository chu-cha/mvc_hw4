#pragma once
#include <unordered_map>
#include <iostream>

#include "primitive.h"

class Model
{
public:
    void show() const {
        for (auto [i,p] : p_primitives) {
            p->draw();
        }
    }

    int add_primitive(Primitive::Ptr p) {
        int last = p_primitives.size();
        p_primitives [last]= p;
        return last;
    }

    void remove_primitive(int id) {      
        if(p_primitives.contains(id))
            p_primitives.erase(id); 
    }

private:
    std::unordered_map<int, Primitive::Ptr> p_primitives;
};