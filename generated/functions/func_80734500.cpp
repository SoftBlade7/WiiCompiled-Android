#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80734500(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80734500;

loc_80734500:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 4;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 408));
    // inline leaf 0x8073199C (4 guest instruction(s))
    r0 = MemoryInline::FlatRead16((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite16((r3 + 12), static_cast<uint16_t>(r0));
    // end of inlined leaf 0x8073199C
    r0 = MemoryInline::FlatRead8((r31 + 416));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734528:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80734578;
    }
}

loc_8073452C:
{
    r0 = MemoryInline::FlatRead32((r31 + 420));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80734534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073454C;
    }
}

loc_80734538:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8073453C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073455C;
    }
}

loc_80734540:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80734544:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073456C;
    }
}

loc_80734548:
{
    goto loc_80734578;
}

loc_8073454C:
{
    r3 = r31;
    r4 = (r31 + 56);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734578;
}

loc_8073455C:
{
    r3 = r31;
    r4 = (r31 + 232);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
    goto loc_80734578;
}

loc_8073456C:
{
    r3 = r31;
    r4 = (r31 + 276);
    // inline leaf 0x8074AFE0 (3 guest instruction(s))
    MemoryInline::FlatWrite32((r3 + 4), r4);
    r3 = 1;
    // end of inlined leaf 0x8074AFE0
}

loc_80734578:
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
// RECOMP_REGISTRATION base 0x80734500 func_80734500 preserves=true fpr_mask=0x00000000
