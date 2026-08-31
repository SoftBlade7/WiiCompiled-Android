#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800F1524(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800F1524;

loc_800F1524:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_800F1530:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_800F1564;
    }
}

loc_800F155C:
{
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_800F1564:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_800F1568:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F1578;
    }
}

loc_800F156C:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 | 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
}

loc_800F1578:
{
    r0 = 0;
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r4 = 1;
    r6 = 0;
    r5 = 0;
    ctx->lr = 0x800F1594u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801ED6D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F1598:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_800F15A4;
    }
}

loc_800F159C:
{
    r3 = -1;
    goto loc_800F1630;
}

loc_800F15A4:
{
}

loc_800F15A8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_800F15D0;
    }
}

loc_800F15AC:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_800F15C8;
    }
}

loc_800F15B0:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & 65);
}

loc_800F15B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F15C8;
    }
}

loc_800F15BC:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_800F15D0;
}

loc_800F15C8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r29, r0);
}

loc_800F15D0:
{
}

loc_800F15D4:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_800F1600;
    }
}

loc_800F15D8:
{
}

loc_800F15DC:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(0))) {
        goto loc_800F15F8;
    }
}

loc_800F15E0:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & 8);
}

loc_800F15E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800F15F8;
    }
}

loc_800F15EC:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r30, r0);
    goto loc_800F1600;
}

loc_800F15F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_800F1600:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_800F1604:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F1630;
    }
}

loc_800F1608:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800F160C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800F1628;
    }
}

loc_800F1610:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800F1618:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800F1628;
    }
}

loc_800F161C:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_800F1630;
}

loc_800F1628:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r31, r0);
}

loc_800F1630:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800F1524 func_800F1524 preserves=true fpr_mask=0x00000000
