// AUTO-GENERATED - DO NOT EDIT
// Data section initializer for Mario Kart Wii PAL
// This file embeds the DOL and REL data sections directly in the binary.
#include "memory.h"
#include <cstring>
#include <cstddef>
#include <cstdint>
#include <iostream>

extern "C" {
extern const uint8_t kData__init[];
extern const uint8_t kData__text[];
extern const uint8_t kData_extab[];
extern const uint8_t kData_extabindex[];
extern const uint8_t kData__ctors[];
extern const uint8_t kData__dtors[];
extern const uint8_t kData__rodata[];
extern const uint8_t kData__data[];
extern const uint8_t kData__sdata[];
extern const uint8_t kData__sdata2[];
extern const uint8_t kData_StaticR[];
} // extern "C"

namespace {
bool g_dataInitialized = false;
} // namespace

extern "C" void InitializeDataSections() {
    if (g_dataInitialized) return;
    g_dataInitialized = true;

    std::cout << "[runtime] Initializing embedded data sections..." << std::endl;

    // DOL section: _init @ 0x80004000
    constexpr size_t kSize__init = 9312u;
    if (Memory::Contains(0x80004000u, kSize__init)) {
        std::memcpy(Memory::GetPointer(0x80004000u, kSize__init),
                    kData__init, kSize__init);
        std::cout << "[runtime]   Loaded _init (9312 bytes) @ 0x80004000" << std::endl;
    }

    // DOL section: _text @ 0x800072C0
    constexpr size_t kSize__text = 2349856u;
    if (Memory::Contains(0x800072C0u, kSize__text)) {
        std::memcpy(Memory::GetPointer(0x800072C0u, kSize__text),
                    kData__text, kSize__text);
        std::cout << "[runtime]   Loaded _text (2349856 bytes) @ 0x800072C0" << std::endl;
    }

    // DOL section: extab @ 0x80006460
    constexpr size_t kSize_extab = 1472u;
    if (Memory::Contains(0x80006460u, kSize_extab)) {
        std::memcpy(Memory::GetPointer(0x80006460u, kSize_extab),
                    kData_extab, kSize_extab);
        std::cout << "[runtime]   Loaded extab (1472 bytes) @ 0x80006460" << std::endl;
    }

    // DOL section: extabindex @ 0x80006A20
    constexpr size_t kSize_extabindex = 2208u;
    if (Memory::Contains(0x80006A20u, kSize_extabindex)) {
        std::memcpy(Memory::GetPointer(0x80006A20u, kSize_extabindex),
                    kData_extabindex, kSize_extabindex);
        std::cout << "[runtime]   Loaded extabindex (2208 bytes) @ 0x80006A20" << std::endl;
    }

    // DOL section: _ctors @ 0x80244DE0
    constexpr size_t kSize__ctors = 192u;
    if (Memory::Contains(0x80244DE0u, kSize__ctors)) {
        std::memcpy(Memory::GetPointer(0x80244DE0u, kSize__ctors),
                    kData__ctors, kSize__ctors);
        std::cout << "[runtime]   Loaded _ctors (192 bytes) @ 0x80244DE0" << std::endl;
    }

    // DOL section: _dtors @ 0x80244EA0
    constexpr size_t kSize__dtors = 32u;
    if (Memory::Contains(0x80244EA0u, kSize__dtors)) {
        std::memcpy(Memory::GetPointer(0x80244EA0u, kSize__dtors),
                    kData__dtors, kSize__dtors);
        std::cout << "[runtime]   Loaded _dtors (32 bytes) @ 0x80244EA0" << std::endl;
    }

    // DOL section: _rodata @ 0x80244EC0
    constexpr size_t kSize__rodata = 79552u;
    if (Memory::Contains(0x80244EC0u, kSize__rodata)) {
        std::memcpy(Memory::GetPointer(0x80244EC0u, kSize__rodata),
                    kData__rodata, kSize__rodata);
        std::cout << "[runtime]   Loaded _rodata (79552 bytes) @ 0x80244EC0" << std::endl;
    }

    // DOL section: _data @ 0x80258580
    constexpr size_t kSize__data = 309952u;
    if (Memory::Contains(0x80258580u, kSize__data)) {
        std::memcpy(Memory::GetPointer(0x80258580u, kSize__data),
                    kData__data, kSize__data);
        std::cout << "[runtime]   Loaded _data (309952 bytes) @ 0x80258580" << std::endl;
    }

    // DOL section: _sdata @ 0x80384C00
    constexpr size_t kSize__sdata = 5056u;
    if (Memory::Contains(0x80384C00u, kSize__sdata)) {
        std::memcpy(Memory::GetPointer(0x80384C00u, kSize__sdata),
                    kData__sdata, kSize__sdata);
        std::cout << "[runtime]   Loaded _sdata (5056 bytes) @ 0x80384C00" << std::endl;
    }

    // DOL section: _sdata2 @ 0x80386FA0
    constexpr size_t kSize__sdata2 = 8608u;
    if (Memory::Contains(0x80386FA0u, kSize__sdata2)) {
        std::memcpy(Memory::GetPointer(0x80386FA0u, kSize__sdata2),
                    kData__sdata2, kSize__sdata2);
        std::cout << "[runtime]   Loaded _sdata2 (8608 bytes) @ 0x80386FA0" << std::endl;
    }

    // REL section: StaticR @ 0x805102E0
    constexpr size_t kSize_StaticR = 4934832u;
    if (Memory::Contains(0x805102E0u, kSize_StaticR)) {
        std::memcpy(Memory::GetPointer(0x805102E0u, kSize_StaticR),
                    kData_StaticR, kSize_StaticR);
        std::cout << "[runtime]   Loaded StaticR (4934832 bytes) @ 0x805102E0" << std::endl;
    }

    // BSS section @ 0x802A4080 (938236 bytes) - memory already zero-initialized
}

extern "C" bool IsDataSectionsInitialized() {
    return g_dataInitialized;
}
