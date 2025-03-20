#include "view.h"

void View::show_model(std::shared_ptr<Model> m) {
    m->show();
}