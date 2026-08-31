#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AA9B8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AA9B8;

loc_801AA9B8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80000000u;
    r0 = 4;
    r4 = MemoryInline::FlatRead32((r4 + 228));
    r31 = r3;
    MemoryInline::FlatWrite16((r4 + 712), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite32((r4 + 732), r30);
    r5 = MemoryInline::FlatRead32(r30);
    goto loc_801AA9F8;
}

loc_801AA9F4:
{
    r5 = MemoryInline::FlatRead32((r5 + 736));
}

loc_801AA9F8:
{
}

loc_801AA9FC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_801AAA10;
    }
}

loc_801AAA00:
{
    r3 = MemoryInline::FlatRead32((r5 + 720));
    r0 = MemoryInline::FlatRead32((r4 + 720));
}

loc_801AAA0C:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_801AA9F4;
    }
}

loc_801AAA10:
{
}

loc_801AAA14:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_801AAA44;
    }
}

loc_801AAA18:
{
    r3 = MemoryInline::FlatRead32((r30 + 4));
}

loc_801AAA20:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AAA2C;
    }
}

loc_801AAA24:
{
    MemoryInline::FlatWrite32(r30, r4);
    goto loc_801AAA30;
}

loc_801AAA2C:
{
    MemoryInline::FlatWrite32((r3 + 736), r4);
}

loc_801AAA30:
{
    MemoryInline::FlatWrite32((r4 + 740), r3);
    r0 = 0;
    MemoryInline::FlatWrite32((r4 + 736), r0);
    MemoryInline::FlatWrite32((r30 + 4), r4);
    goto loc_801AAA68;
}

loc_801AAA44:
{
    MemoryInline::FlatWrite32((r4 + 736), r5);
    r3 = MemoryInline::FlatRead32((r5 + 740));
    MemoryInline::FlatWrite32((r5 + 740), r4);
}

loc_801AAA54:
{
    MemoryInline::FlatWrite32((r4 + 740), r3);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_801AAA64;
    }
}

loc_801AAA5C:
{
    MemoryInline::FlatWrite32(r30, r4);
    goto loc_801AAA68;
}

loc_801AAA64:
{
    MemoryInline::FlatWrite32((r3 + 736), r4);
}

loc_801AAA68:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r13 + -25316), r0);
    r0 = MemoryInline::FlatRead32((r13 + -25316));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AAA78:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AAA84;
    }
}

loc_801AAA7C:
{
    r3 = 0;
    ctx->lr = 0x801AAA84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A9C08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801AAA84:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AA9B8 func_801AA9B8 preserves=true fpr_mask=0x00000000
