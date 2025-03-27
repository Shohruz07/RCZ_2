// HeapBlocksAllocator.h
#pragma once
#include <cstddef>  // Для определения size_t

#include "AllocatorStrategy.h"

class HeapBlocksAllocator : public AllocatorStrategy {
public:
    HeapBlocksAllocator(size_t blockSize) : blockSize(blockSize) {}

    void* Allocate(size_t size) override {
        return ::operator new(size);
    }

    void Deallocate(void* ptr) override {
        ::operator delete(ptr);
    }

private:
    size_t blockSize;
};
