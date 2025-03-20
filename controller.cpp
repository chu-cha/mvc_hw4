#include "controller.h"

bool Controller::import_from_file(std::string filename) {
    std::cout << "Import from file\n";

    // Load model from file
    Model loaded_model;
    p_model.reset(new Model(loaded_model));

    return true; // or false if import failed
}


bool Controller::export_to_file(std::string filename) {
    std::cout << "Export to file\n";
    return true; // or false if export failed
}


void Controller::create_new_scene() {
    std::cout << "Create new scene\n";
    p_model.reset(new Model);
}


int Controller::add_primitive(Primitive::Ptr p) {
    if (p_model)
        return p_model->add_primitive(p);

    std::cout << "You haven't created or loaded a scene\n";
    return -1;
}


void Controller::remove_primitive(int id) {
    if (p_model)
        p_model->remove_primitive(id);
    else
        std::cout << "You haven't created or loaded a scene\n";
}

void Controller::show_model() {
    if (p_model)
        view.show_model(p_model);
}