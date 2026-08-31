#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8072BF8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8072BF8C;

loc_8072BF8C:
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

loc_8072BFBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072BFD4;
    }
}

loc_8072BFC0:
{
}

loc_8072BFC4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8072BFF4;
    }
}

loc_8072BFC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8072BFCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072C050;
    }
}

loc_8072BFD0:
{
    goto loc_8072C0A8;
}

loc_8072BFD4:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r3 = 0;
    r0 = 100;
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    MemoryInline::FlatWrite32((r4 + 8), r0);
    MemoryInline::FlatWrite32((r4 + 12), r3);
    goto loc_8072C0A8;
}

loc_8072BFF4:
{
    r0 = MemoryInline::FlatRead8((r31 + 436));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072BFFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072C028;
    }
}

loc_8072C000:
{
    r3 = MemoryInline::FlatRead32((r31 + 420));
    r0 = MemoryInline::FlatRead16((r30 + 90));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead16((r30 + 92));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead16((r30 + 94));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead16((r30 + 96));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8072C0A8;
}

loc_8072C028:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 84));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead16((r30 + 86));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead16((r30 + 88));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    goto loc_8072C0A8;
}

loc_8072C050:
{
    r0 = MemoryInline::FlatRead8((r31 + 436));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8072C058:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8072C084;
    }
}

loc_8072C05C:
{
    r3 = MemoryInline::FlatRead32((r31 + 420));
    r0 = MemoryInline::FlatRead16((r30 + 104));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32(r3, r0);
    r0 = MemoryInline::FlatRead16((r30 + 106));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r0 = MemoryInline::FlatRead16((r30 + 108));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 8), r0);
    r0 = MemoryInline::FlatRead16((r30 + 110));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_8072C0A8;
}

loc_8072C084:
{
    r4 = MemoryInline::FlatRead32((r31 + 420));
    r0 = 0;
    r3 = MemoryInline::FlatRead16((r30 + 98));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32(r4, r3);
    r3 = MemoryInline::FlatRead16((r30 + 100));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 4), r3);
    r3 = MemoryInline::FlatRead16((r30 + 102));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite32((r4 + 8), r3);
    MemoryInline::FlatWrite32((r4 + 12), r0);
}

loc_8072C0A8:
{
    r3 = 0x809C0000u;
    r4 = 100;
    r3 = MemoryInline::FlatRead32((r3 + 11240));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739944u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    r5 = MemoryInline::FlatRead32((r31 + 420));
    r0 = MemoryInline::FlatRead32(r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8072C0C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072C0D4;
    }
}

loc_8072C0C8:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8072C130;
}

loc_8072C0D4:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r0 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8072C0E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072C0F0;
    }
}

loc_8072C0E4:
{
    r0 = 6;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8072C130;
}

loc_8072C0F0:
{
    r4 = MemoryInline::FlatRead32((r5 + 8));
    r4 = (r0 + r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r4));
}

loc_8072C0FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072C10C;
    }
}

loc_8072C100:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8072C130;
}

loc_8072C10C:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    r0 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r0));
}

loc_8072C118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8072C128;
    }
}

loc_8072C11C:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r31 + 92), r0);
    goto loc_8072C130;
}

loc_8072C128:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 92), r0);
}

loc_8072C130:
{
    r3 = MemoryInline::FlatRead32((r31 + 404));
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
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
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xC0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8072BF8C func_8072BF8C preserves=true fpr_mask=0x00000000
