#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80535CA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80535CA0;

loc_80535CA0:
{
    r5 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80535CA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80535CF8;
    }
}

loc_80535CAC:
{
    r0 = MemoryInline::FlatRead16((r5 + 20));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 22));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r5 + 24));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 26));
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead8((r3 + 64));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80535CD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_80535CDC:
{
    r3 = 65536;
    r0 = 0;
    r3 = (r3 + -1);
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_80535CF8:
{
    r0 = 0;
    r3 = 1;
    MemoryInline::FlatWrite8((r4 + 10), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite16((r4 + 8), static_cast<uint16_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80535CA0 func_80535CA0 preserves=true fpr_mask=0x00000000
