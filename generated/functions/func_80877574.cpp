#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80877574(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_subfc_sub_4 = 0;
    uint32_t r3_subfc_sub_5 = 0;
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
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80877574;

loc_80877574:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x808E0000u;
    r30 = (r30 + -14920);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
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
    ctx->lr = 0x808775BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r12 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r31 = r3;
    r5 = MemoryInline::FlatRead32((r30 + 48));
    r6 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r4 + 32));
    r3 = r29;
    r4 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r5));
    r12 = MemoryInline::FlatRead32((r12 + 104));
    r0 = (r4 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 134217727);
    ctr = r12;
    ctx->lr = 0x808775F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    r0 = (r31 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_80877600:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80877654;
    }
}

loc_80877604:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 196));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 200));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x80877628u;
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80877630:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80877654;
    }
}

loc_80877634:
{
    r12 = MemoryInline::FlatRead32(r29);
    r5 = 0x808B0000u;
    r3 = r29;
    r4 = 499;
    r12 = MemoryInline::FlatRead32((r12 + 236));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 8896));
    ctr = r12;
    ctx->lr = 0x80877654u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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

loc_80877654:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 192));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 196));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 200));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    r4 = MemoryInline::FlatRead32((r29 + 776));
    r3 = MemoryInline::FlatRead32((r29 + 780));
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    r4 = (r4 + 1);
    r0 = (r3 + 1);
    MemoryInline::FlatWrite32((r29 + 776), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWrite32((r29 + 780), r0);
    ctx->lr = 0x80877690u;
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
    f0.d = MemoryInline::FlatReadFloat32((r30 + 4));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80877698:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808776A8;
    }
}

loc_808776A0:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 780), r0);
}

loc_808776A8:
{
    r0 = (r31 + -2);
}

loc_808776B0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8087787C;
    }
}

loc_808776B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 104));
    r0 = MemoryInline::FlatRead32((r29 + 776));
}

loc_808776C0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8087787C;
    }
}

loc_808776C4:
{
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r4 = 0;
    MemoryInline::FlatWrite8((r29 + 365), static_cast<uint8_t>(r5));
}

loc_808776DC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_808776EC;
    }
}

loc_808776E0:
{
}

loc_808776E4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_808776EC;
    }
}

loc_808776E8:
{
    r4 = r5;
}

loc_808776EC:
{
}

loc_808776F0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8087787C;
    }
}

loc_808776F4:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
}

loc_808776FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80877740;
    }
}

loc_80877700:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = (r4 & 256);
}

loc_80877708:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80877740;
    }
}

loc_8087770C:
{
    r0 = (r4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80877710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80877740;
    }
}

loc_80877714:
{
    ctx->lr = 0x80877718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x807BD850u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8087771C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8087772C;
    }
}

loc_80877720:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
    ctx->lr = 0x80877728u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x807BD864u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    goto loc_80877740;
}

loc_8087772C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80877730:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80877740;
    }
}

loc_80877734:
{
    r3 = MemoryInline::FlatRead32((r29 + 328));
    r4 = (r29 + 204);
    ctx->lr = 0x80877740u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x807BD88Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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

loc_80877740:
{
    r6 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 348));
    r4 = (r6 + 1);
    r0 = MemoryInline::FlatRead32((r29 + 356));
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

loc_80877760:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(r0))) {
        goto loc_808777E0;
    }
}

loc_80877764:
{
    r4 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r3 = MemoryInline::FlatRead32((r29 + 368));
    r4_addr_1 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_80877784:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_808777E0;
    }
}

loc_80877788:
{
    MemoryInline::FlatWrite32((r29 + 360), r5);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_3 & -16);
    r3 = 5;
    r5 = 0;
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
    r4 = -1;
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_4 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_6 & -16);
    r4 = MemoryInline::FlatRead32((r29 + 348));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_808777E0:
{
    r5 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 348));
    r4 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r29 + 356));
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

loc_80877800:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_8087787C;
    }
}

loc_80877804:
{
    r6 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_8 & -16);
    r3 = MemoryInline::FlatRead32((r29 + 368));
    r6_addr_1 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_1);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    r0 = MemoryInline::FlatRead8(r3);
}

loc_80877824:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8087787C;
    }
}

loc_80877828:
{
    MemoryInline::FlatWrite32((r29 + 360), r4);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_10 & -16);
    r5 = 0;
    r4 = -1;
    r6_addr_2 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_2, r5);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_12 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_13 & -16);
    r4 = MemoryInline::FlatRead32((r29 + 348));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_8087787C:
{
    r3 = MemoryInline::FlatRead32((r30 + 112));
    r0 = MemoryInline::FlatRead32((r29 + 776));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80877888:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80877958;
    }
}

loc_8087788C:
{
    r3 = MemoryInline::FlatRead32((r29 + 356));
    r5 = 1;
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r4 = 0;
    MemoryInline::FlatWrite8((r29 + 365), static_cast<uint8_t>(r5));
}

loc_808778A4:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_808778B4;
    }
}

loc_808778A8:
{
}

loc_808778AC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_808778B4;
    }
}

loc_808778B0:
{
    r4 = r5;
}

loc_808778B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_808778B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80877958;
    }
}

loc_808778BC:
{
    r5 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 348));
    r4 = (r5 + 1);
    r0 = MemoryInline::FlatRead32((r29 + 356));
    r3_subfc_sub_4 = r3;
    r3 = (r4 - r3_subfc_sub_4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3_subfc_sub_4) ? 1u : 0u) << 29);
    r3_subfe_rb_4 = r3;
    r3_not_4 = ~(r3);
    r3_ca_4 = (xer >> 29) & 1u;
    r3 = (r3_not_4 + r3_subfe_rb_4);
    r3 = (r3 + r3_ca_4);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3_not_4)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_subfe_rb_4)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_4)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (r4 & r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_808778DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80877958;
    }
}

loc_808778E0:
{
    r6 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_15 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r0 = (r0_rot_15 & -16);
    r3 = MemoryInline::FlatRead32((r29 + 368));
    r6_addr_4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32(r6_addr_4);
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_16 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80877900:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80877958;
    }
}

loc_80877904:
{
    MemoryInline::FlatWrite32((r29 + 360), r4);
    r0_rot_17 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(4));
    r0 = (r0_rot_17 & -16);
    r5 = 0;
    r4 = -1;
    r6_addr_5 = (r6 + r0);
    MemoryInline::FlatWrite32(r6_addr_5, r5);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_18 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_19 & -16);
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 8), r4);
    r0 = MemoryInline::FlatRead32((r29 + 360));
    r3 = MemoryInline::FlatRead32((r29 + 352));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_20 & -16);
    r4 = MemoryInline::FlatRead32((r29 + 348));
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 12), r4);
}

loc_80877958:
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
// RECOMP_REGISTRATION base 0x80877574 func_80877574 preserves=true fpr_mask=0x00000000
