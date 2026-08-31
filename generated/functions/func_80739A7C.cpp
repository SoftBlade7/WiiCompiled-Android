#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80739A7C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80739A7C;

loc_80739A7C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->lr = 0x80739A9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739BD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r31 = r3;
    r3 = r30;
    r4 = 1;
    ctx->lr = 0x80739AACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80739BD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = 0x809C0000u;
    r5 = (r31 - r3);
    r3 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2960));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80739AC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80739AD4;
    }
}

loc_80739AC4:
{
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r4 = 2;
    // inline leaf 0x80741654 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 360));
    MemoryInline::FlatWrite32((r3 + 44), r4);
    // end of inlined leaf 0x80741654
    goto loc_80739B10;
}

loc_80739AD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(-4));
}

loc_80739AD8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80739AEC;
    }
}

loc_80739ADC:
{
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r4 = 1;
    // inline leaf 0x80741654 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 360));
    MemoryInline::FlatWrite32((r3 + 44), r4);
    // end of inlined leaf 0x80741654
    goto loc_80739B10;
}

loc_80739AEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_80739AF0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80739B04;
    }
}

loc_80739AF4:
{
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r4 = 2;
    // inline leaf 0x80741654 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 360));
    MemoryInline::FlatWrite32((r3 + 44), r4);
    // end of inlined leaf 0x80741654
    goto loc_80739B10;
}

loc_80739B04:
{
    r3 = MemoryInline::FlatRead32((r30 + 132));
    r4 = 3;
    // inline leaf 0x80741654 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 360));
    MemoryInline::FlatWrite32((r3 + 44), r4);
    // end of inlined leaf 0x80741654
}

loc_80739B10:
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
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE00002A gpr_write=0xFE00003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80739A7C func_80739A7C preserves=true fpr_mask=0x00000000
