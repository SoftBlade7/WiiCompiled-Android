#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80734064(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80734064;

loc_80734064:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 408));
    r3 = MemoryInline::FlatRead32(r4);
    // inline leaf 0x80590A5C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 16));
    // end of inlined leaf 0x80590A5C
    r4 = 0x809C0000u;
    r0 = (r3 & 255);
    r4 = MemoryInline::FlatRead32((r4 + 13848));
    r0 = (r0 * 584);
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 20));
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 200));
}

loc_807340A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(16))) {
        goto loc_807340BC;
    }
}

loc_807340AC:
{
    r0 = MemoryInline::FlatRead8((r4 + 520));
}

loc_807340B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807340BC;
    }
}

loc_807340B8:
{
    r3 = 1;
}

loc_807340BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807340C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807340D4;
    }
}

loc_807340C4:
{
    r3 = r31;
    r4 = (r31 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734138;
}

loc_807340D4:
{
    r0 = MemoryInline::FlatRead8((r31 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807340DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734138;
    }
}

loc_807340E0:
{
    r0 = MemoryInline::FlatRead32((r31 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807340E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734100;
    }
}

loc_807340EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807340F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073411C;
    }
}

loc_807340F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807340F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073412C;
    }
}

loc_807340FC:
{
    goto loc_80734138;
}

loc_80734100:
{
    r3 = MemoryInline::FlatRead32((r31 + 408));
    r4 = 4;
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
    r3 = r31;
    r4 = (r31 + 100);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734138;
}

loc_8073411C:
{
    r3 = r31;
    r4 = (r31 + 232);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734138;
}

loc_8073412C:
{
    r3 = r31;
    r4 = (r31 + 276);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80734138:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80734064 func_80734064 preserves=true fpr_mask=0x00000000
