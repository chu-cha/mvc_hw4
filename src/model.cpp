#include "model.h"

void Model::show() const {
    for (const auto& [id, primitive] : p_primitives) {
        primitive->draw();
    }
}

int Model::add_primitive(Primitive::Ptr p) {
    int last = p_primitives.size();
    p_primitives[last] = p;
    return last;
}

void Model::remove_primitive(int id) {
    if (p_primitives.contains(id)) {
        p_primitives.erase(id);
    }
}