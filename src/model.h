#pragma once

#include <unordered_map>
#include <iostream>
#include "primitive.h"

/**
 * @brief Class representing a scene containing graphical primitives.
 *
 * This class manages a collection of graphical primitives, allowing them to be added, removed, and displayed.
 */
class Model {
public:
    /**
     * @brief Displays all primitives in the scene.
     *
     * Iterates through the collection of primitives and calls their `draw()` method.
     */
    void show() const;

    /**
     * @brief Adds a primitive to the model.
     *
     * @param [in] p A std::shared_ptr to the primitive to be added.
     * @return The ID assigned to the newly added primitive.
     */
    int add_primitive(Primitive::Ptr p);

    /**
     * @brief Removes a primitive from the model.
     *
     * @param [in] id The ID of the primitive to be removed.
     */
    void remove_primitive(int id);

private:
    std::unordered_map<int, Primitive::Ptr> p_primitives; ///< Map of primitives, indexed by their IDs.
};