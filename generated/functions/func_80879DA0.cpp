#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80879DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_not_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r0_subfc_sub_0 = 0;
    uint32_t r0_subfe_rb_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_ca_3 = 0;
    uint32_t r3_ca_4 = 0;
    uint32_t r3_ca_5 = 0;
    uint32_t r3_not_0 = 0;
    uint32_t r3_not_1 = 0;
    uint32_t r3_not_2 = 0;
    uint32_t r3_not_3 = 0;
    uint32_t r3_not_4 = 0;
    uint32_t r3_not_5 = 0;
    uint32_t r3_subfc_sub_0 = 0;
    uint32_t r3_subfc_sub_1 = 0;
    uint32_t r3_subfc_sub_2 = 0;
    uint32_t r3_subfc_sub_3 = 0;
    uint32_t r3_subfe_rb_0 = 0;
    uint32_t r3_subfe_rb_1 = 0;
    uint32_t r3_subfe_rb_2 = 0;
    uint32_t r3_subfe_rb_3 = 0;
    uint32_t r3_subfe_rb_4 = 0;
    uint32_t r3_subfe_rb_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80879DA0;

loc_80879DA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x808E0000u;
    r31 = (r31 + -14920);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r5 = MemoryInline::FlatRead32((r3 + 332));
    r0 = MemoryInline::FlatRead32((r4 + 18616));
    r4 = (r5 + 1);
    r0_subfc_sub_0 = r0;
    r0 = (r4 - r0_subfc_sub_0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0_subfc_sub_0) ? 1u : 0u) << 29);
    r0_subfe_rb_0 = r0;
    r0_not_0 = ~(r0);
    r0_ca_0 = (xer >> 29) & 1u;
    r0 = (r0_not_0 + r0_subfe_rb_0);
    r0 = (r0 + r0_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_not_0)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_subfe_rb_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = (r4 & r0);
    MemoryInline::FlatWrite32((r3 + 332), r0);
    ctx->lr = 0x80879DE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80874E08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = 0x809C0000u;
    r12 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r31 + 48));
    r6 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r3 = r30;
    r4 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r12 = MemoryInline::FlatRead32((r12 + 104));
    r0 = (r4 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    ctr = r12;
    ctx->lr = 0x80879E24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = (r29 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80879E2C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80879E80;
    }
}

loc_80879E30:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 196));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r30 + 200));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80879E54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r31 + 52));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80879E5C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80879E80;
    }
}

loc_80879E60:
{
    r12 = MemoryInline::FlatRead32(r30);
    r5 = 0x808B0000u;
    r3 = r30;
    r4 = 499;
    r12 = MemoryInline::FlatRead32((r12 + 236));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8896));
    ctr = r12;
    ctx->lr = 0x80879E80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80879E80:
{
    r3 = MemoryInline::FlatRead32((r30 + 776));
}

loc_80879E88:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r30 + 776), r0);
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(1))) {
        goto loc_8087A000;
    }
}

loc_80879E94:
{
    r3 = MemoryInline::FlatRead32((r30 + 356));
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r4 = 0;
    MemoryInline::FlatWrite8((r30 + 365), static_cast<uint8_t>(r5));
}

loc_80879EAC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80879EBC;
    }
}

loc_80879EB0:
{
}

loc_80879EB4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80879EBC;
    }
}

loc_80879EB8:
{
    r4 = r5;
}

loc_80879EBC:
{
}

loc_80879EC0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087A000;
    }
}

loc_80879EC4:
{
    r6 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 348));
    r4 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r30 + 356));
    r3_subfc_sub_1 = r3;
    r3 = (r4 - r3_subfc_sub_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3_subfc_sub_1) ? 1u : 0u) << 29);
    r3_subfe_rb_1 = r3;
    r3_not_1 = ~(r3);
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r3_not_1 + r3_subfe_rb_1);
    r3 = (r3 + r3_ca_1);
    r5 = (r4 & r3);
}

loc_80879EE4:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_80879F64;
    }
}

loc_80879EE8:
{
    r4 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = MemoryInline::FlatRead32((r30 + 368));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead8((r3 + 4));
}

loc_80879F08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80879F64;
    }
}

loc_80879F0C:
{
    MemoryInline::FlatWrite32((r30 + 360), r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = 4;
    r5 = 0;
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    r4 = -1;
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r4 = MemoryInline::FlatRead32((r30 + 348));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_80879F64:
{
    r5 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 348));
    r4 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r30 + 356));
    r3_subfc_sub_2 = r3;
    r3 = (r4 - r3_subfc_sub_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3_subfc_sub_2) ? 1u : 0u) << 29);
    r3_subfe_rb_2 = r3;
    r3_not_2 = ~(r3);
    r3_ca_2 = (xer >> 29) & 1u;
    r3 = (r3_not_2 + r3_subfe_rb_2);
    r3 = (r3 + r3_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (r4 & r3);
}

loc_80879F84:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8087A000;
    }
}

loc_80879F88:
{
    r6 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r3 = MemoryInline::FlatRead32((r30 + 368));
    r6_addr_1 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80879FA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087A000;
    }
}

loc_80879FAC:
{
    MemoryInline::FlatWrite32((r30 + 360), r4);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & -16);
    r5 = 0;
    r4 = -1;
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & -16);
    r4 = MemoryInline::FlatRead32((r30 + 348));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_8087A000:
{
    r3 = MemoryInline::FlatRead32((r31 + 96));
    r0 = MemoryInline::FlatRead32((r30 + 776));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8087A00C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8087A11C;
    }
}

loc_8087A010:
{
    r3 = MemoryInline::FlatRead32((r30 + 356));
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r4 = 0;
    MemoryInline::FlatWrite8((r30 + 365), static_cast<uint8_t>(r5));
}

loc_8087A028:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_8087A038;
    }
}

loc_8087A02C:
{
}

loc_8087A030:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8087A038;
    }
}

loc_8087A034:
{
    r4 = r5;
}

loc_8087A038:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8087A03C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087A11C;
    }
}

loc_8087A040:
{
    r3 = MemoryInline::FlatRead32((r30 + 772));
    r4 = 0;
    r0 = (r3 + 1);
    r0 = (r0 & 15);
    MemoryInline::FlatWrite32((r30 + 772), r0);
    r0 = (r0 * 24);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 389), static_cast<uint8_t>(r4));
    r0 = MemoryInline::FlatRead32((r30 + 772));
    r0 = (r0 * 24);
    r3 = (r30 + r0);
    MemoryInline::FlatWrite8((r3 + 388), static_cast<uint8_t>(r4));
    r8 = MemoryInline::FlatRead32((r30 + 360));
    r0 = MemoryInline::FlatRead32((r30 + 348));
    r5 = (r8 + 1);
    r4 = MemoryInline::FlatRead32((r30 + 772));
    r3 = (r5 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r5) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
    r0 = MemoryInline::FlatRead32((r30 + 356));
    r3_subfe_rb_4 = r3;
    r3_not_4 = ~(r3);
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_not_4 + r3_subfe_rb_4);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (r5 & r3);
    r4 = (r4 * 24);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_8087A098:
{
    r3 = (r30 + r4);
    r6 = (r3 + 388);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087A11C;
    }
}

loc_8087A0A4:
{
    r5 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r8), static_cast<uint32_t>(4));
    r0 = (r0_rot_15 & -16);
    r3 = MemoryInline::FlatRead32((r30 + 368));
    r5_addr_1 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_1);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8087A0C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8087A11C;
    }
}

loc_8087A0C8:
{
    MemoryInline::FlatWrite32((r30 + 360), r7);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(4));
    r0 = (r0_rot_17 & -16);
    r3 = 2;
    r4 = -1;
    r5_addr_2 = (r5 + r0);
    MemoryInline::FlatWrite32(r5_addr_2, r3);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_18 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r6);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_19 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r30 + 360));
    r3 = MemoryInline::FlatRead32((r30 + 352));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_20 & -16);
    r4 = MemoryInline::FlatRead32((r30 + 348));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_8087A11C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80879DA0 func_80879DA0 preserves=true fpr_mask=0x00000000
