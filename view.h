#pragma once

#include <memory>

#include "model.h"

class View
{
public:
    void show_model(std::shared_ptr<Model> m) {
        m->show();
    }

};