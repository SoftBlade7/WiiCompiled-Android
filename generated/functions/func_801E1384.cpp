#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E1384(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E1384;

loc_801E1384:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801E13A8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E13B4;
    }
}

loc_801E13AC:
{
    r3 = 0;
    goto loc_801E1458;
}

loc_801E13B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r5 = MemoryInline::FlatRead32((r3 + 12));
    r30 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r30));
}

loc_801E13C4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801E13D8;
    }
}

loc_801E13C8:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r5 + r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r30));
}

loc_801E13D4:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801E143C;
    }
}

loc_801E13D8:
{
    r4 = (r30 & -32);
    r5 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x801E13ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB154u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801E13F0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801E13F8;
    }
}

loc_801E13F4:
{
    goto loc_801E142C;
}

loc_801E13F8:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    r0 = MemoryInline::FlatRead32((r31 + 24));
    r5 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r3 + r0);
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r3 = (r0 - r5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r3));
}

loc_801E1414:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801E1420;
    }
}

loc_801E1418:
{
    r0 = (r3 + 31);
    r4 = (r0 & -32);
}

loc_801E1420:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = MemoryInline::FlatRead32(r31);
    ctx->lr = 0x801E142Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DB344u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801E142C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E1430:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E143C;
    }
}

loc_801E1434:
{
    r3 = 0;
    goto loc_801E1458;
}

loc_801E143C:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r30 - r0);
    r4 = MemoryInline::FlatRead32((r31 + 20));
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 20), r0);
}

loc_801E1458:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E1384 func_801E1384 preserves=true fpr_mask=0x00000000
