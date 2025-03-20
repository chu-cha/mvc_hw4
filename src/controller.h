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
    bool import_from_file(std::string filename);

    /**
     * @brief Saves the scene to a file.
     *
     * @param [in] filename The name of the file to which the scene should be saved.
     * @return True if the scene was successfully saved, otherwise false.
     */
    bool export_to_file(std::string filename);

    /**
     * @brief Creates a new empty scene.
     */
    void create_new_scene();

    /**
     * @brief Adds a primitive to the current scene.
     *
     * @param [in] p A std::shared_ptr to the primitive to be added to the scene.
     * @return A handler (ID) through which the primitive can be managed.
     * @warning If the primitive was not added, returns ID = -1.
     */
    int add_primitive(Primitive::Ptr p);

    /**
     * @brief Removes a primitive from the current scene.
     *
     * @param [in] id The handler (ID) of the primitive to be removed.
     */
    void remove_primitive(int id);

    /**
     * @brief Displays the scene.
     */
    void show_model();

private:
    std::shared_ptr<Model> p_model; ///< Pointer to the current model.
    View view; ///< View object for displaying the model.
};