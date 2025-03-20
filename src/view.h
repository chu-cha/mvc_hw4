#pragma once

#include <memory>

#include "model.h"

/**
 * @brief Class responsible for displaying the model.
 *
 * This class provides functionality to render or display the contents of a `Model` object.
 */
class View {
public:
    /**
     * @brief Displays the model.
     *
     * Calls the `show()` method of the provided `Model` object to render its contents.
     *
     * @param [in] m A std::shared_ptr to the `Model` object to be displayed.
     */
    void show_model(std::shared_ptr<Model> m);
};