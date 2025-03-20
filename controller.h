#pragma once

#include "view.h"

/**
 * @brief Class managing the scene representation.
 *
 * Contains methods for working with files, as well as for adding/removing graphical primitives to/from the current scene.
 */
class Controller {
public:
    /**
     * @brief Loads a scene from a file.
     *
     * @param [in] filename The name of the file from which the scene should be loaded.
     * @return True if the scene was successfully loaded, otherwise false.
     */
    bool import_from_file(std::string filename) {
        std::cout << "Import from file\n";

        // Load model from file
        Model loaded_model;
        p_model.reset(new Model(loaded_model));

        return true; // or false if import failed
    }

    /**
     * @brief Saves the scene to a file.
     *
     * @param [in] filename The name of the file to which the scene should be saved.
     * @return True if the scene was successfully saved, otherwise false.
     */
    bool export_to_file(std::string filename) {
        std::cout << "Export to file\n";
        return true; // or false if export failed
    }

    /**
     * @brief Creates a new empty scene.
     */
    void create_new_scene() {
        std::cout << "Create new scene\n";
        p_model.reset(new Model);
    }

    /**
     * @brief Adds a primitive to the current scene.
     *
     * @param [in] p A std::shared_ptr to the primitive to be added to the scene.
     * @return A handler (ID) through which the primitive can be managed.
     * @warning If the primitive was not added, returns ID = -1.
     */
    int add_primitive(Primitive::Ptr p) {
        if (p_model)
            return p_model->add_primitive(p);

        std::cout << "You haven't created or loaded a scene\n";
        return -1;
    }

    /**
     * @brief Removes a primitive from the current scene.
     *
     * @param [in] id The handler (ID) of the primitive to be removed.
     */
    void remove_primitive(int id) {
        if (p_model)
            p_model->remove_primitive(id);
        else
            std::cout << "You haven't created or loaded a scene\n";
    }

    /**
     * @brief Displays the scene.
     */
    void show_model() {
        if (p_model)
            view.show_model(p_model);
    }

private:
    std::shared_ptr<Model> p_model; ///< Pointer to the current model.
    View view; ///< View object for displaying the model.
};