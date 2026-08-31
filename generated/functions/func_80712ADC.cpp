#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80712ADC(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80712ADC;

loc_80712ADC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    goto loc_80712B28;
}

loc_80712AFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_80712B04:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(5))) {
        goto loc_80712B28;
    }
}

loc_80712B08:
{
}

loc_80712B0C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(6))) {
        goto loc_80712B28;
    }
}

loc_80712B10:
{
}

loc_80712B14:
{
    r0 = r31;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80712B20;
    }
}

loc_80712B1C:
{
    r0 = (r3 + -148);
}

loc_80712B20:
{
    r3 = r0;
    // inline leaf 0x8070C8B0 (13 guest instruction(s))
}

loc_inl0_0x8070C8B0:
{
    r0 = MemoryInline::FlatRead8((r3 + 224));
}

loc_inl0_0x8070C8B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8070C8BC:
{
    r4 = MemoryInline::FlatRead32((r3 + 220));
    r4 = MemoryInline::FlatRead32(r4);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 134217728);
}

loc_inl0_0x8070C8D0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8070C8D4:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    r0 = (r0 | 1024);
    MemoryInline::FlatWrite32((r3 + 96), r0);
    goto loc_inl0_cont_8070C8B0;
}

loc_inl0_return:
{
}

loc_inl0_cont_8070C8B0:
{
    // end of inlined leaf 0x8070C8B0
}

loc_80712B28:
{
    r4 = r31;
    r3 = (r30 + 120);
    // inline leaf 0x800AF180 (8 guest instruction(s))
}

loc_inl1_0x800AF180:
{
}

loc_inl1_0x800AF184:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF190;
    }
}

loc_inl1_0x800AF188:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_inl1_cont_800AF180;
}

loc_inl1_0x800AF190:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl1_cont_800AF180:
{
    // end of inlined leaf 0x800AF180
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80712B38:
{
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80712AFC;
    }
}

loc_80712B40:
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
// RECOMP_REGISTRATION base 0x80712ADC func_80712ADC preserves=true fpr_mask=0x00000000
