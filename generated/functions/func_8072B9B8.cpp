#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072B9B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8072B9B8;

loc_8072B9B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = 0x808D0000u;
    r30 = (r30 + -25208);
    r3 = MemoryInline::FlatRead32((r4 + 11240));
    // inline leaf 0x80739548 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 28));
    // end of inlined leaf 0x80739548
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8072B9E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072BA00;
    }
}

loc_8072B9EC:
{
}

loc_8072B9F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8072BA20;
    }
}

loc_8072B9F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8072B9F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072BA7C;
    }
}

loc_8072B9FC:
{
    goto loc_8072BAD4;
}

loc_8072BA00:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r3 = 0;
    r0 = 100;
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    goto loc_8072BAD4;
}

loc_8072BA20:
{
    r0 = MemoryInline::FlatRead8((r31 + 436));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072BA28:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072BA54;
    }
}

loc_8072BA2C:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 46));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead16((r30 + 48));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead16((r30 + 50));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_8072BAD4;
}

loc_8072BA54:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 40));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead16((r30 + 42));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead16((r30 + 44));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_8072BAD4;
}

loc_8072BA7C:
{
    r0 = MemoryInline::FlatRead8((r31 + 436));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072BA84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072BAB0;
    }
}

loc_8072BA88:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 58));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead16((r30 + 60));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead16((r30 + 62));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_8072BAD4;
}

loc_8072BAB0:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 52));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead16((r30 + 54));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead16((r30 + 56));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_8072BAD4:
{
    r3 = MemoryInline::FlatRead32((r31 + 416));
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 424), r0);
    MemoryInline::FlatWrite32((r31 + 428), r0);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r3 = MemoryInline::FlatRead32((r31 + 412));
    MemoryInline::FlatWrite32((r3 + 76), r0);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000001B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8072B9B8 func_8072B9B8 preserves=true fpr_mask=0x00000000
