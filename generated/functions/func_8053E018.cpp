#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053E018(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8053E018;

loc_8053E018:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r4 = MemoryInline::FlatRead32((r4 + -10520));
    r3 = MemoryInline::FlatRead32((r4 + 32));
}

loc_8053E048:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053E054;
    }
}

loc_8053E04C:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_8053E058;
}

loc_8053E054:
{
    r3 = 0;
}

loc_8053E058:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_8053E064:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053E08C;
    }
}

loc_8053E068:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
}

loc_8053E070:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053E07C;
    }
}

loc_8053E074:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_8053E080;
}

loc_8053E07C:
{
    r3 = 0;
}

loc_8053E080:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_8053E08C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053E090:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053E0A8;
    }
}

loc_8053E094:
{
    r12 = MemoryInline::FlatRead32(r31);
    r3 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 20));
    ctr = r12;
    ctx->lr = 0x8053E0A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053E0A8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053E0C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053E174;
    }
}

loc_8053E0C4:
{
    r3 = 0x809C0000u;
    r29 = MemoryInline::FlatRead32((r31 + 4));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
    r3 = MemoryInline::FlatRead16((r3 + 2974));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8053E0DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053E174;
    }
}

loc_8053E0E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(r3));
}

loc_8053E0E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053E174;
    }
}

loc_8053E0E8:
{
    r5 = MemoryInline::FlatRead32((r29 + 16));
    r0 = (r3 + -1);
    r4 = 0;
    r3 = 1;
    MemoryInline::FlatWrite32((r5 + 16), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8053E100:
{
    MemoryInline::FlatWrite32((r5 + 12), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8053E11C;
    }
}

loc_8053E108:
{
    r3 = MemoryInline::FlatRead32((r29 + 16));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x8053E11Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
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
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053E11C:
{
    r28 = 0;
    r30 = 0x809C0000u;
    r31 = 0x809C0000u;
    goto loc_8053E160;
}

loc_8053E12C:
{
    r3 = MemoryInline::FlatRead32((r30 + -10448));
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053E144:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053E15C;
    }
}

loc_8053E148:
{
    r3 = MemoryInline::FlatRead32((r29 + 12));
    r4 = 1;
    r5 = 0;
    r3_addr_3 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctx->lr = 0x8053E15Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805342E8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8053E15C:
{
    r28 = (r28 + 1);
}

loc_8053E160:
{
    r3 = MemoryInline::FlatRead32((r31 + -10456));
    r4 = (r28 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053E170:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053E12C;
    }
}

loc_8053E174:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8053E018 func_8053E018 preserves=true fpr_mask=0x00000000
