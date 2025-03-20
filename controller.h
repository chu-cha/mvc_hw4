#pragma once

#include "view.h"

/**
    \brief Класс, управляющий представлением сцены.

    Содержит методы для работы с файлами, а также для добавления.удаления графических примитивов в текущей сцене.
*/

class Controller {
public:
    /**
    \brief загрузка сцены из файла

    \param [in] filename Имя файла, из которого должна быть загружена сцена

    \return Успешно ли произшла загрузка сцены из файла
    */
    bool import_from_file(std::string filename) {
        std::cout << "Import from file\n";

        // load model from file
        Model loaded_model;
        p_model.reset(new Model(loaded_model));

        return true; //or false if import failed
    }


    /**
    \brief сохранение сцены в файл

    \param [in] filename Имя файла, в который должна быть загружена сцена

    \return Успешно ли произшла загрузка сцены в файл
    */
    bool export_to_file(std::string filename) {
        std::cout << "Export to file\n";
        return true; //or false if export failed
    }


    /**
    \brief создание новой пустой сцены
    */
    void create_new_scene() {
        std::cout << "Create new scene\n";
        p_model.reset(new Model);
    }


    /**
    \brief добавление примитива в текущую сцену

    \param [in] p std::shared_ptr на примитив, который нужно добавить в сцену

    \return хендлер, через который можно управлять примитивом (id).

    \warning Если примитив не был добавлен, возвращает id = -1
    */
    int add_primitive(Primitive::Ptr p) {
        if (p_model)
            return p_model->add_primitive(p);

        std::cout << "You haven't created or loaded scene\n";
        return -1;
    }

    /**
    \brief удаление примитива из текущей сцены

    \param [in] id хендлер примитива, который необходимо удалить

    */
    void remove_primitive(int id) {
        if (p_model)
            p_model->remove_primitive(id);
        std::cout << "You haven't created or loaded scene\n";
    }

    /**
    \brief отображение сцены
    */
    void show_model() {
        if (p_model)
            view.show_model(p_model);
    }

private:
    std::shared_ptr<Model> p_model;
    View view;
};