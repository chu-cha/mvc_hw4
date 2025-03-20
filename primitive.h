#pragma once


#include <memory>
#include <string>

class Primitive
{
public:
    using Ptr = std::shared_ptr<Primitive>;

    virtual void draw() = 0;

};

class Cube : public Primitive {
public:

    void draw() override {
        std::cout << "Draw this beautiful cube\n";
    }

};

class Sphere : public Primitive {
public:

    void draw() override {
        std::cout << "Draw this very round sphere\n";
    }

};

class Prism : public Primitive {
public:

    void draw() override {
        std::cout << "Draw this sharp prism\n";
    }

};