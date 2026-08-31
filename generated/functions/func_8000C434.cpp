#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000C434(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000C434;

loc_8000C434:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead32(r4);
    r6 = (r0 & -8);
    r0 = (r0 & -3);
    MemoryInline::FlatWrite32(r4, r0);
    r5 = (r4 + r6);
    r4_addr_0 = (r4 + r6);
    r0 = MemoryInline::FlatRead32(r4_addr_0);
    r0 = (r0 & -5);
    r4_addr_1 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_1, r0);
    MemoryInline::FlatWrite32((r5 + -4), r6);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & -8);
    r31 = (r3 + r0);
    r31 = (r31 + -4);
    r3 = MemoryInline::FlatRead32(r31);
}

loc_8000C484:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000C544;
    }
}

loc_8000C488:
{
    r5 = MemoryInline::FlatRead32((r3 + 8));
    r3 = r4;
    MemoryInline::FlatWrite32((r4 + 8), r5);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    r0 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r5 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite32((r5 + 8), r4);
    MemoryInline::FlatWrite32(r31, r4);
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C4B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C534;
    }
}

loc_8000C4B8:
{
    r6 = MemoryInline::FlatRead32((r4 + -4));
    r0 = (r6 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8000C4C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000C4C8;
    }
}

loc_8000C4C4:
{
    goto loc_8000C534;
}

loc_8000C4C8:
{
    r3 = (r4 - r6);
    r0 = MemoryInline::FlatRead32(r3);
    r5 = (r0 & 7);
    MemoryInline::FlatWrite32(r3, r5);
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & -8);
    r0 = (r6 + r0);
    r5_mrot_1 = (r0 & -8);
    r5_mdest_1 = (r5 & 7);
    r5 = (r5_mdest_1 | r5_mrot_1);
    MemoryInline::FlatWrite32(r3, r5);
    r0 = (r5 & 2);
}

loc_8000C4F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000C508;
    }
}

loc_8000C4F4:
{
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & -8);
    r0 = (r6 + r0);
    r5 = (r3 + r0);
    MemoryInline::FlatWrite32((r5 + -4), r0);
}

loc_8000C508:
{
    r5 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_8000C510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000C51C;
    }
}

loc_8000C514:
{
    r0 = MemoryInline::FlatRead32((r5 + 12));
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8000C51C:
{
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r5 + 8), r0);
    r5 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32((r5 + 8));
    MemoryInline::FlatWrite32((r4 + 12), r5);
}

loc_8000C534:
{
    MemoryInline::FlatWrite32(r31, r3);
    r4 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000C584u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    goto loc_8000C550;
}

loc_8000C544:
{
    MemoryInline::FlatWrite32(r31, r4);
    MemoryInline::FlatWrite32((r4 + 8), r4);
    MemoryInline::FlatWrite32((r4 + 12), r4);
}

loc_8000C550:
{
    r3 = MemoryInline::FlatRead32(r31);
    r0 = MemoryInline::FlatRead32((r30 + 8));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 & -8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8000C564:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000C56C;
    }
}

loc_8000C568:
{
    MemoryInline::FlatWrite32((r30 + 8), r3);
}

loc_8000C56C:
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
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00001FB gpr_write=0xC00001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000C434 func_8000C434 preserves=true fpr_mask=0x00000000
