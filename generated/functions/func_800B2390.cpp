#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800B2390(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_800B2390;

loc_800B2390:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 24));
}

loc_800B23B4:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r0))) {
        goto loc_800B23C0;
    }
}

loc_800B23B8:
{
    r5 = MemoryInline::FlatRead16((r3 + 26));
    goto loc_800B2418;
}

loc_800B23C0:
{
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r5));
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r4 + 16));
    goto loc_800B2400;
}

loc_800B23D0:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_800B23D8:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r5))) {
        goto loc_800B23FC;
    }
}

loc_800B23DC:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
}

loc_800B23E4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_800B23FC;
    }
}

loc_800B23E8:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B25F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite16((r30 + 26), static_cast<uint16_t>(r3));
    r5 = (r3 & 65535);
    goto loc_800B2418;
}

loc_800B23FC:
{
    r4 = MemoryInline::FlatRead32((r4 + 8));
}

loc_800B2400:
{
}

loc_800B2404:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_800B23D0;
    }
}

loc_800B2408:
{
    r4 = 65536;
    r0 = (r4 + -1);
    MemoryInline::FlatWrite16((r3 + 26), static_cast<uint16_t>(r0));
    r5 = (r0 & 65535);
}

loc_800B2418:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(65535));
}

loc_800B241C:
{
    r3 = r30;
    r4 = r31;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800B242C;
    }
}

loc_800B2428:
{
    goto loc_800B2434;
}

loc_800B242C:
{
    r5 = MemoryInline::FlatRead32((r30 + 20));
    r5 = MemoryInline::FlatRead16((r5 + 2));
}

loc_800B2434:
{
    r5 = (r5 & 65535);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800B2720u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
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

// RECOMP_GUEST_ABI gpr_read=0xC00007FB gpr_write=0xC0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800B2390 func_800B2390 preserves=true fpr_mask=0x00000000
