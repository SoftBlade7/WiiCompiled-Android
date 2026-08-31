#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80734220(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80734220;

loc_80734220:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 408));
    r3 = MemoryInline::FlatRead32(r4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r3 + r0);
    r31 = MemoryInline::FlatRead32((r3 + 140));
}

loc_80734264:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(20))) {
        goto loc_80734270;
    }
}

loc_80734268:
{
    r0 = 1;
    goto loc_80734274;
}

loc_80734270:
{
    r0 = 0;
}

loc_80734274:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734278:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073428C;
    }
}

loc_8073427C:
{
    r3 = r30;
    r4 = (r30 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_807342D0;
}

loc_8073428C:
{
    r0 = MemoryInline::FlatRead8((r30 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734294:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807342D0;
    }
}

loc_80734298:
{
    r3 = MemoryInline::FlatRead32((r30 + 408));
    r4 = 4;
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
}

loc_807342A8:
{
    r0 = 0;
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(5))) {
        goto loc_807342B8;
    }
}

loc_807342B0:
{
}

loc_807342B4:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(10))) {
        goto loc_807342BC;
    }
}

loc_807342B8:
{
    r0 = 1;
}

loc_807342BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807342C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807342D0;
    }
}

loc_807342C4:
{
    r3 = r30;
    r4 = (r30 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_807342D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
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
// RECOMP_REGISTRATION base 0x80734220 func_80734220 preserves=true fpr_mask=0x00000000
