# pragma once

namespace Rigon_memoryPool {
    // 对齐数和大小定义
    constexpr size_t ALIGNMENT = 8;
    constexpr size_t MAX_BYTES = 256 * 1024; // 256KB
    constexpr size_t FREE_LIST_SIZE = MAX_BYTES / ALIGNMENT; // ALIGNMENT 等于指void*的大小
}