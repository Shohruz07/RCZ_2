#include <cstddef>  // Для определения size_t

#pragma once

class AllocatorStrategy {
public:
    virtual void* Allocate(size_t size) = 0;
    virtual void Deallocate(void* ptr) = 0;
    virtual ~AllocatorStrategy() = default;
};
