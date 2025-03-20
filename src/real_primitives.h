#pragma once

#include "primitive.h"

/**
 * @brief Class representing a Cube primitive.
 *
 * This class implements the `draw()` method to render a cube.
 */
class Cube : public Primitive {
public:
    /**
     * @brief Draws the cube.
     *
     * Outputs a message to the console simulating the drawing of a cube.
     */
    void draw() override {
        std::cout << "Draw this beautiful cube\n";
    }
};

/**
 * @brief Class representing a Sphere primitive.
 *
 * This class implements the `draw()` method to render a sphere.
 */
class Sphere : public Primitive {
public:
    /**
     * @brief Draws the sphere.
     *
     * Outputs a message to the console simulating the drawing of a sphere.
     */
    void draw() override {
        std::cout << "Draw this very round sphere\n";
    }
};

/**
 * @brief Class representing a Prism primitive.
 *
 * This class implements the `draw()` method to render a prism.
 */
class Prism : public Primitive {
public:
    /**
     * @brief Draws the prism.
     *
     * Outputs a message to the console simulating the drawing of a prism.
     */
    void draw() override {
        std::cout << "Draw this sharp prism\n";
    }
};