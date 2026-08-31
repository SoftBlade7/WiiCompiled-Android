#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8052993C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t ctr = ctx->ctr;

    goto loc_8052993C;

loc_8052993C:
{
    r0 = 13;
    MemoryInline::FlatWrite16((r3 + 44), static_cast<uint16_t>(r4));
    r8 = 0;
    r4 = 0;
    MemoryInline::FlatWrite16((r3 + 46), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 48), static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite8((r3 + 50), static_cast<uint8_t>(r7));
    ctr = r0;
}

loc_8052995C:
{
    r5 = (r3 + r8);
    r8 = (r8 + 1);
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 17), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r5 + 30), static_cast<uint8_t>(r4));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8052995C;
    }
}

loc_80529974:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[8] = r8;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000F8 gpr_write=0x00000131 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8052993C func_8052993C preserves=true fpr_mask=0x00000000
