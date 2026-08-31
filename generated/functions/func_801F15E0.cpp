#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F15E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801F15E0;

loc_801F15E0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F15EC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1614;
    }
}

loc_801F1600:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1604:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1614;
    }
}

loc_801F1608:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801F1610:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F161C;
    }
}

loc_801F1614:
{
    r3 = 1;
    goto loc_801F173C;
}

loc_801F161C:
{
    r4 = (r1 + 12);
    r5 = (r1 + 10);
    r6 = (r1 + 8);
    ctx->lr = 0x801F162Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F1208u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1630:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1638;
    }
}

loc_801F1634:
{
    goto loc_801F173C;
}

loc_801F1638:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r4 + 12), r0);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r3 + 12));
}

loc_801F1654:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(65535))) {
        goto loc_801F1660;
    }
}

loc_801F1658:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_801F1660:
{
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r30 = 0x80360000u;
    r30 = (r30 + -23936);
    r3 = MemoryInline::FlatRead16((r4 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r4 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r6 = MemoryInline::FlatRead32((r1 + 12));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r3 = MemoryInline::FlatRead16((r1 + 10));
    r4 = (r30 + r0);
    r5 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r3 * 56);
    r3 = (r3 & 255);
    MemoryInline::FlatWrite32((r4 + 4), r5);
    r3 = (r3 | 768);
    MemoryInline::FlatWrite32((r4 + 8), r6);
    r4 = (r30 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 432));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r3_mrot_1 = (r3_rot_1 & -65536);
    r3_mdest_1 = (r3 & 65535);
    r3 = (r3_mdest_1 | r3_mrot_1);
    MemoryInline::FlatWrite32(r31, r3);
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead16((r4 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F16C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1738;
    }
}

loc_801F16C4:
{
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r12 = MemoryInline::FlatRead32(r4);
    ctr = r12;
    ctx->lr = 0x801F16D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F16D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1738;
    }
}

loc_801F16DC:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead16((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_801F16E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F1704;
    }
}

loc_801F16EC:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32(r3, r0);
    r3 = MemoryInline::FlatRead16((r30 + 2));
    r0 = (r3 + -1);
    MemoryInline::FlatWriteRam16((r30 + 2), static_cast<uint16_t>(r0));
}

loc_801F1704:
{
    r7 = MemoryInline::FlatRead32((r1 + 12));
    r4 = 0x80360000u;
    r4 = (r4 + -23936);
    r5 = 0;
    r6 = MemoryInline::FlatRead16((r7 + 16));
    r3 = 21;
    r0 = (r6 + -1);
    MemoryInline::FlatWrite16((r7 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r1 + 8));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_801F173C;
}

loc_801F1738:
{
    r3 = 0;
}

loc_801F173C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801F15E0 func_801F15E0 preserves=true fpr_mask=0x00000000
