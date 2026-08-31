#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80734E0C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80734E0C;

loc_80734E0C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x808D0000u;
    r5 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r3 = MemoryInline::FlatRead32((r5 + 11240));
    r4 = MemoryInline::FlatRead16((r4 + -22414));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
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
    MemoryInline::FlatWrite32((r30 + 424), r3);
    r3 = MemoryInline::FlatRead32((r30 + 408));
    r3 = MemoryInline::FlatRead32(r3);
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
    r29 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(20));
}

loc_80734E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734E78;
    }
}

loc_80734E70:
{
    r31 = 1;
    goto loc_80734E7C;
}

loc_80734E78:
{
    r31 = 0;
}

loc_80734E7C:
{
    r3 = MemoryInline::FlatRead32((r30 + 408));
    r30 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r30;
    ctx->lr = 0x80734E8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8073BA78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80734E90:
{
    r4 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734EC8;
    }
}

loc_80734E98:
{
}

loc_80734E9C:
{
    r0 = 0;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(10))) {
        goto loc_80734EA8;
    }
}

loc_80734EA4:
{
    r0 = 1;
}

loc_80734EA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734EAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734EC0;
    }
}

loc_80734EB0:
{
    r3 = r30;
    r4 = 0;
    // inline leaf 0x8073B8B0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8073B8B0
    goto loc_80734EC8;
}

loc_80734EC0:
{
    r3 = r30;
    // inline leaf 0x8073B8B0 (2 guest instruction(s))
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8073B8B0
}

loc_80734EC8:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE0000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80734E0C func_80734E0C preserves=true fpr_mask=0x00000000
