#pragma once
#include "AllocatorStrategy.h"
#include <memory>
#include <stdexcept>
#include <string>

class AllocatorFactory {
public:
    static std::unique_ptr<AllocatorStrategy> CreateAllocator(const std::string& type, size_t blockSize, size_t numBlocks = 0);
};
