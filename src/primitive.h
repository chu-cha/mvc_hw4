#pragma once

#include <memory>
#include <string>
#include <iostream>

/**
 * @brief Abstract base class for graphical primitives.
 *
 * This class defines the interface for all graphical primitives, requiring them to implement a `draw()` method.
 */
class Primitive {
public:
    using Ptr = std::shared_ptr<Primitive>; ///< Shared pointer type for Primitive objects.

    /**
     * @brief Pure virtual method to draw the primitive.
     *
     * This method must be implemented by all derived classes to define how the primitive is rendered.
     */
    virtual void draw() = 0;

    virtual ~Primitive() = default; 
};
