#include<list>

#include "controller.h"


int main() {
    //save here ids of loaded primitives.
    std::list<int> loaded_primtives;

    Controller controller;

    controller.create_new_scene();
    
    auto load_primitive = [&loaded_primtives, &controller](Primitive::Ptr p) {
        auto id = controller.add_primitive(p);
        if (id != -1)
            loaded_primtives.push_back(id);
        };

    load_primitive(std::make_shared<Cube>());
    load_primitive(std::make_shared<Cube>());
    load_primitive(std::make_shared<Sphere>());
    load_primitive(std::make_shared<Prism>());
    load_primitive(std::make_shared<Prism>());

    controller.show_model();
    controller.export_to_file("scene_out.scn");

    controller.import_from_file("scene_in.scn");
    load_primitive(std::make_shared<Prism>());
    controller.show_model();

    return 0;
}