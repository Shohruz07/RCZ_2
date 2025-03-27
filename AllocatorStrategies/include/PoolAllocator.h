#pragma once
#include "AllocatorStrategy.h"
#include <vector>

class PoolAllocator : public AllocatorStrategy {
public:
    PoolAllocator(size_t blockSize, size_t numBlocks);
    void* Allocate(size_t size) override;
    void Deallocate(void* ptr) override;

private:
    size_t blockSize;
    size_t numBlocks;
    std::vector<void*> freeBlocks;
};
