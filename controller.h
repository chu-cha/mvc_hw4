#pragma once

#include "view.h"

/**
    \brief �����, ����������� �������������� �����.

    �������� ������ ��� ������ � �������, � ����� ��� ����������.�������� ����������� ���������� � ������� �����.
*/

class Controller {
public:
    /**
    \brief �������� ����� �� �����

    \param [in] filename ��� �����, �� �������� ������ ���� ��������� �����

    \return ������� �� �������� �������� ����� �� �����
    */
    bool import_from_file(std::string filename) {
        std::cout << "Import from file\n";

        // load model from file
        Model loaded_model;
        p_model.reset(new Model(loaded_model));

        return true; //or false if import failed
    }


    /**
    \brief ���������� ����� � ����

    \param [in] filename ��� �����, � ������� ������ ���� ��������� �����

    \return ������� �� �������� �������� ����� � ����
    */
    bool export_to_file(std::string filename) {
        std::cout << "Export to file\n";
        return true; //or false if export failed
    }


    /**
    \brief �������� ����� ������ �����
    */
    void create_new_scene() {
        std::cout << "Create new scene\n";
        p_model.reset(new Model);
    }


    /**
    \brief ���������� ��������� � ������� �����

    \param [in] p std::shared_ptr �� ��������, ������� ����� �������� � �����

    \return �������, ����� ������� ����� ��������� ���������� (id).

    \warning ���� �������� �� ��� ��������, ���������� id = -1
    */
    int add_primitive(Primitive::Ptr p) {
        if (p_model)
            return p_model->add_primitive(p);

        std::cout << "You haven't created or loaded scene\n";
        return -1;
    }

    /**
    \brief �������� ��������� �� ������� �����

    \param [in] id ������� ���������, ������� ���������� �������

    */
    void remove_primitive(int id) {
        if (p_model)
            p_model->remove_primitive(id);
        std::cout << "You haven't created or loaded scene\n";
    }

    /**
    \brief ����������� �����
    */
    void show_model() {
        if (p_model)
            view.show_model(p_model);
    }

private:
    std::shared_ptr<Model> p_model;
    View view;
};