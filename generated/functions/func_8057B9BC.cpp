#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057B9BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r0_subfc_min_1 = 0;
    uint32_t r0_subfc_min_2 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_adde_right_1 = 0;
    uint32_t r3_adde_right_2 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_ca_1 = 0;
    uint32_t r3_ca_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f27 = ctx->fpr[27];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8057B9BC;

loc_8057B9BC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -208), 0, 216u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -208), r1);
    r1 = (r1 + -208);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r1 + 212), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 192u, (r1 + 192), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 200);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 176u, (r1 + 176), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 160u, (r1 + 160), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 144u, (r1 + 144), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 128u, (r1 + 128), f27.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_4 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_4, PPC_PsFromScalarInline(f27.d));
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r1 + 124), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 6656);
    MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r30);
    r30 = 0x808B0000u;
    r30 = (r30 + 22768);
    MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r29);
    r29 = r3;
    MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r28);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    r4 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r0 & 512);
}

loc_8057BA2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BB80;
    }
}

loc_8057BA30:
{
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057BA44:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057BB80;
    }
}

loc_8057BA48:
{
    r0 = MemoryInline::FlatRead32((r29 + 536));
}

loc_8057BA50:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(10))) {
        goto loc_8057BB80;
    }
}

loc_8057BA54:
{
    r3 = r29;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f3.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f4.d = MemoryInline::FlatReadFloat32((r29 + 76));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 24));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = (-(f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057BA94:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057BB80;
    }
}

loc_8057BA98:
{
    r3 = r29;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    r4 = 0x802A0000u;
    r5 = (r1 + 48);
    r4 = (r4 + 16688);
    r3 = (r3 + 240);
    ctx->lr = 0x8057BAB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->xer = xer;
    InvokeDirectCpu<0x8023A2D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    f2.d = MemoryInline::FlatReadFloat32((r1 + 48));
    r4 = (r29 + 68);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 68));
    r3 = (r1 + 12);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    r5 = (r1 + 48);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r29 + 76));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 56));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    // inline leaf 0x80537830 (19 guest instruction(s))
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f6.d = PpcFmulsInline(f0.d, f7.d);
    f5.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f2.d = PpcFmulsInline(f1.d, f7.d);
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32(r3, f4.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
    // end of inlined leaf 0x80537830
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f1.d = PpcFmulsInline(f1.d, f1.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 20));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f2.d = PpcFmulsInline(f2.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    ctx->lr = 0x8057BB14u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F80Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = f31.d;
    ctx->lr = 0x8057BB1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8022F8E4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057BB24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BB2C;
    }
}

loc_8057BB28:
{
    goto loc_8057BB30;
}

loc_8057BB2C:
{
    f1.d = (-(f1.d));
}

loc_8057BB30:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 88));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 28));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = std::fabs(f0.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8057BB44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BB80;
    }
}

loc_8057BB48:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 128));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    f2.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8057BB64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057BB6C;
    }
}

loc_8057BB68:
{
    f2.d = f0.d;
}

loc_8057BB6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057BB80:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 & 1);
}

loc_8057BB90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057BBA4;
    }
}

loc_8057BB94:
{
    r3 = r29;
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(15));
    r28 = (r28_rot_1 & 1);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    MemoryInline::FlatWrite8((r3 + 370), static_cast<uint8_t>(r28));
}

loc_8057BBA4:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057BBB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057BBE0;
    }
}

loc_8057BBB8:
{
    r3 = r29;
    // inline leaf 0x80591618 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 96));
    // end of inlined leaf 0x80591618
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 264));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f31.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 24), f31.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f31.d);
    goto loc_8057BEA8;
}

loc_8057BBE0:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057BBE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057BBF8;
    }
}

loc_8057BBEC:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
    goto loc_8057BC48;
}

loc_8057BBF8:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8057BC04:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057BC38;
    }
}

loc_8057BC08:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 104));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8057BC14:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057BC20;
    }
}

loc_8057BC18:
{
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
    goto loc_8057BC38;
}

loc_8057BC20:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057BC28:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057BC38;
    }
}

loc_8057BC30:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteFloat32((r29 + 48), f0.d);
}

loc_8057BC38:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 48));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057BC48:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 16);
}

loc_8057BC58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BC70;
    }
}

loc_8057BC5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
    goto loc_8057BCE8;
}

loc_8057BC70:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 33554432);
}

loc_8057BC78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BC90;
    }
}

loc_8057BC7C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 132));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
    goto loc_8057BCE8;
}

loc_8057BC90:
{
    r0 = MemoryInline::FlatRead32((r29 + 584));
}

loc_8057BC98:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8057BCE8;
    }
}

loc_8057BC9C:
{
    f1.d = MemoryInline::FlatReadFloat32(r31);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057BCA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BCB8;
    }
}

loc_8057BCAC:
{
    MemoryInline::FlatWriteFloat32((r29 + 32), f1.d);
    r0 = 1;
    goto loc_8057BCBC;
}

loc_8057BCB8:
{
    r0 = 0;
}

loc_8057BCBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057BCC0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057BCE8;
    }
}

loc_8057BCC4:
{
    r3 = 2;
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 584), r3);
    r3 = r29;
    r4 = 8;
    r5 = 0;
    MemoryInline::FlatWrite16((r29 + 588), static_cast<uint16_t>(r0));
    r6 = 1;
    ctx->lr = 0x8057BCE8u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591050u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8057BCE8:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1073741824);
}

loc_8057BCF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BD04;
    }
}

loc_8057BCFC:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 436));
    goto loc_8057BD34;
}

loc_8057BD04:
{
    r3 = r29;
    // inline leaf 0x80590664 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80590664
}

loc_8057BD10:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8057BD28;
    }
}

loc_8057BD14:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 262144);
}

loc_8057BD24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057BD30;
    }
}

loc_8057BD28:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 20));
    goto loc_8057BD34;
}

loc_8057BD30:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 28));
}

loc_8057BD34:
{
    r3 = MemoryInline::FlatRead32(r29);
    f28.d = MemoryInline::FlatReadFloat32((r29 + 296));
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f30.d = MemoryInline::FlatReadFloat32((r29 + 284));
    r5 = MemoryInline::FlatRead32((r4 + 12));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    r0 = (r5 & 536870912);
    r0_mrot_1 = (r5 & 32768);
    r0_mdest_1 = (r0 & -32769);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_8057BD54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BD70;
    }
}

loc_8057BD58:
{
    r3 = (r30 + 952);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_8057BD64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BD6C;
    }
}

loc_8057BD68:
{
    goto loc_8057BD70;
}

loc_8057BD6C:
{
    f0.d = f28.d;
}

loc_8057BD70:
{
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 & -2147483648);
}

loc_8057BD78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BD94;
    }
}

loc_8057BD7C:
{
    r3 = (r30 + 952);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_8057BD88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BD90;
    }
}

loc_8057BD8C:
{
    goto loc_8057BD94;
}

loc_8057BD90:
{
    f0.d = f28.d;
}

loc_8057BD94:
{
    r0 = (r5 & 2);
}

loc_8057BD98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BDB4;
    }
}

loc_8057BD9C:
{
    r3 = (r30 + 952);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_8057BDA8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BDB0;
    }
}

loc_8057BDAC:
{
    goto loc_8057BDB4;
}

loc_8057BDB0:
{
    f0.d = f28.d;
}

loc_8057BDB4:
{
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_8057BDB8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BDC0;
    }
}

loc_8057BDBC:
{
    f28.d = f0.d;
}

loc_8057BDC0:
{
    r0 = (r5 & 65536);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057BDC4:
{
    f27.d = MemoryInline::FlatReadFloat32((r29 + 376));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057BDD4;
    }
}

loc_8057BDCC:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 232));
    f27.d = PpcFmulsInline(f27.d, f0.d);
}

loc_8057BDD4:
{
    r12 = MemoryInline::FlatRead32((r29 + 12));
    r3 = r29;
    f29.d = MemoryInline::FlatReadFloat32((r29 + 184));
    r12 = MemoryInline::FlatRead32((r12 + 80));
    ctr = r12;
    ctx->lr = 0x8057BDECu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 440), f30.d);
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f0.d = PpcFmulsInline(f0.d, f29.d);
    r0 = MemoryInline::FlatRead32((r3 + 12));
    f0.d = PpcFmulsInline(f27.d, f0.d);
    r0 = (r0 & 1048576);
}

loc_8057BE0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BE14;
    }
}

loc_8057BE10:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
}

loc_8057BE14:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
    f31.d = PpcFmulsInline(f31.d, f0.d);
    r0 = (r4 & -2147483648);
}

loc_8057BE20:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057BE30;
    }
}

loc_8057BE24:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & 5632);
}

loc_8057BE2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BE34;
    }
}

loc_8057BE30:
{
    f27.d = MemoryInline::FlatReadFloat32((r31 + 4));
}

loc_8057BE34:
{
    f0.d = MemoryInline::FlatReadFloat32((r29 + 184));
    r0 = (r4 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057BE3C:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 16));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f0.d = PpcFmulsInline(f27.d, f0.d);
    f28.d = PpcFmulsInline(f28.d, f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057BE68;
    }
}

loc_8057BE50:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f28.d, f0.d);
}

loc_8057BE58:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BE68;
    }
}

loc_8057BE5C:
{
    SetCRFloatResident(cr, 0, f28.d, f31.d);
}

loc_8057BE60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BE68;
    }
}

loc_8057BE64:
{
    f31.d = f28.d;
}

loc_8057BE68:
{
    MemoryInline::FlatWriteFloat32((r29 + 444), f28.d);
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & -2147483648);
}

loc_8057BE7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BE90;
    }
}

loc_8057BE80:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 604));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8057BE88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BE90;
    }
}

loc_8057BE8C:
{
    f31.d = f0.d;
}

loc_8057BE90:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057BEA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057BEA8;
    }
}

loc_8057BEA4:
{
    f31.d = MemoryInline::FlatReadFloat32((r29 + 28));
}

loc_8057BEA8:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057BEB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BEC0;
    }
}

loc_8057BEB8:
{
    f4.d = MemoryInline::FlatReadFloat32((r31 + 4));
    goto loc_8057BEC4;
}

loc_8057BEC0:
{
    f4.d = MemoryInline::FlatReadFloat32((r31 + 12));
}

loc_8057BEC4:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 92));
    r3 = r29;
    f1.d = MemoryInline::FlatReadFloat32((r29 + 100));
    r4 = (r1 + 8);
    f3.d = PpcFmulsInline(f4.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f1.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = PpcFmulsInline(f4.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 104), f3.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    MemoryInline::FlatWriteFloat32((r29 + 108), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 112), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    ctx->lr = 0x8057BEFCu;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057B108u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r29);
    f31.d = PpcFmulsInline(f31.d, f1.d);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 4);
}

loc_8057BF10:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BF1C;
    }
}

loc_8057BF14:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 680));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_8057BF1C:
{
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 8);
}

loc_8057BF24:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BF48;
    }
}

loc_8057BF28:
{
    r3 = r29;
    // inline leaf 0x8059144C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x8059144C
    f0.d = MemoryInline::FlatReadFloat32((r3 + 132));
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_8057BF38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BF48;
    }
}

loc_8057BF3C:
{
    r3 = r29;
    // inline leaf 0x8059144C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 64));
    // end of inlined leaf 0x8059144C
    f31.d = MemoryInline::FlatReadFloat32((r3 + 132));
}

loc_8057BF48:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 24));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_8057BF50:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BF8C;
    }
}

loc_8057BF54:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 96);
}

loc_8057BF64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BF70;
    }
}

loc_8057BF68:
{
    MemoryInline::FlatWriteFloat32((r29 + 24), f31.d);
    goto loc_8057BF90;
}

loc_8057BF70:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 520));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
    SetCRFloatResident(cr, 0, f31.d, f0.d);
}

loc_8057BF80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057BF90;
    }
}

loc_8057BF84:
{
    MemoryInline::FlatWriteFloat32((r29 + 24), f31.d);
    goto loc_8057BF90;
}

loc_8057BF8C:
{
    MemoryInline::FlatWriteFloat32((r29 + 24), f31.d);
}

loc_8057BF90:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 262144);
}

loc_8057BFA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BFB4;
    }
}

loc_8057BFA4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 136));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
}

loc_8057BFB4:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r0 = (r0 & 512);
}

loc_8057BFC4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057BFD4;
    }
}

loc_8057BFC8:
{
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32((r29 + 32), f0.d);
    MemoryInline::FlatWriteFloat32((r29 + 24), f0.d);
}

loc_8057BFD4:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057BFE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057BFE8;
    }
}

loc_8057BFE4:
{
    MemoryInline::FlatWriteFloat32((r29 + 24), f1.d);
}

loc_8057BFE8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 24));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057BFF8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057C004;
    }
}

loc_8057BFFC:
{
    MemoryInline::FlatWriteFloat32((r29 + 32), f1.d);
    goto loc_8057C010;
}

loc_8057C004:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057C008:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C010;
    }
}

loc_8057C00C:
{
    MemoryInline::FlatWriteFloat32((r29 + 32), f2.d);
}

loc_8057C010:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C038;
    }
}

loc_8057C024:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 432));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C030:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057C038;
    }
}

loc_8057C034:
{
    MemoryInline::FlatWriteFloat32((r29 + 32), f1.d);
}

loc_8057C038:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 36));
    r3 = r29;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    ctx->lr = 0x8057C048u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057B2A0u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f2.d));
    f1.d = std::fabs(f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 180), f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 176), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057C06C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C074;
    }
}

loc_8057C070:
{
    MemoryInline::FlatWriteFloat32((r29 + 176), f0.d);
}

loc_8057C074:
{
    f8.d = MemoryInline::FlatReadFloat32((r29 + 56));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 64));
    f3.d = MemoryInline::FlatReadFloat32((r29 + 92));
    f7.d = PpcFmulsInline(f8.d, f1.d);
    f6.d = MemoryInline::FlatReadFloat32((r29 + 60));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f4.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = MemoryInline::FlatReadFloat32((r29 + 100));
    f5.d = PpcFmulsInline(f6.d, f3.d);
    f3.d = PpcFmulsInline(f8.d, f2.d);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    f2.d = PpcFmulsInline(f6.d, f2.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C0C8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C0E4;
    }
}

loc_8057C0CC:
{
    f2.d = (-(f2.d));
    f1.d = (-(f3.d));
    f0.d = (-(f5.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
}

loc_8057C0E4:
{
    f27.d = MemoryInline::FlatReadFloat32((r30 + 168));
    r3 = r29;
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C0F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C104;
    }
}

loc_8057C0FC:
{
    f27.d = MemoryInline::FlatReadFloat32((r30 + 176));
    goto loc_8057C11C;
}

loc_8057C104:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C114:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C11C;
    }
}

loc_8057C118:
{
    f27.d = MemoryInline::FlatReadFloat32((r30 + 172));
}

loc_8057C11C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 84));
    r3 = (r1 + 64);
    r4 = (r1 + 36);
    f1.d = PpcFmulsInline(f0.d, f27.d);
    ctx->lr = 0x8057C130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 44u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 32u, (r1 + 96));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 116));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r1 + 80));
    f7.d = PpcFmulsInline(f3.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, (r1 + 64));
    f4.d = PpcFmulsInline(f1.d, f2.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 36u, (r1 + 100));
    f1.d = PpcFmulsInline(f0.d, f2.d);
    f5.d = MemoryInline::FlatReadFloat32((r29 + 120));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r1 + 68));
    f6.d = PpcFmulsInline(f3.d, f5.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r1 + 84));
    f0.d = PpcFmulsInline(f0.d, f5.d);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 40u, (r1 + 104));
    f3.d = PpcFmulsInline(f2.d, f5.d);
    f9.d = MemoryInline::FlatReadFloat32((r29 + 124));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 24u, (r1 + 88));
    f6.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f6.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r1 + 72));
    f8.d = PpcFmulsInline(f8.d, f9.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    r3 = MemoryInline::FlatRead32(r29);
    f5.d = PpcFmulsInline(f5.d, f9.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f2.d = PpcFmulsInline(f2.d, f9.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f8.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r29 + 124), f4.d);
    MemoryInline::FlatWriteFloat32((r29 + 120), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 116), f0.d);
    r4 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r3 & 65536);
    r0_mrot_3 = (r3 & 1);
    r0_mdest_3 = (r0 & -2);
    r0 = (r0_mdest_3 | r0_mrot_3);
}

loc_8057C1BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C1F4;
    }
}

loc_8057C1C0:
{
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r0 = (r3 & 262144);
}

loc_8057C1C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C1F4;
    }
}

loc_8057C1CC:
{
    r0 = (r3 & 1);
}

loc_8057C1D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057C1F4;
    }
}

loc_8057C1D4:
{
    r3 = 0x809C0000u;
    r4 = 2;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_1 = r0;
    r0 = (r0_subfc_min_1 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_1) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_1 = r3;
    r3_ca_1 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_1);
    r3 = (r3 + r3_ca_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_1)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8057C1E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C1F4;
    }
}

loc_8057C1EC:
{
    r3 = r29;
    ctx->lr = 0x8057C1F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8057B028u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
}

loc_8057C1F4:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 32));
    MemoryInline::FlatWriteFloat32((r29 + 40), f2.d);
    r3 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 120));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    f27.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 116));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 124));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    r0 = (r0 & 1024);
}

loc_8057C224:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f27.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f0.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C23C;
    }
}

loc_8057C234:
{
    // inline leaf 0x80574108 (3 guest instruction(s))
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6072));
    // end of inlined leaf 0x80574108
    goto loc_8057C240;
}

loc_8057C23C:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 588));
}

loc_8057C240:
{
    SetCRFloatResident(cr, 0, f1.d, f27.d);
}

loc_8057C244:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057C24C;
    }
}

loc_8057C248:
{
    f27.d = f1.d;
}

loc_8057C24C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f27.d);
    r3 = r29;
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f2.d = MemoryInline::FlatReadFloat32((r3 + 332));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f27.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 24));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    MemoryInline::FlatWriteFloat32((r3 + 332), f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 336));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r3 + 336), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 340));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 340), f0.d);
    r3 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead32((r29 + 584));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r3 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C29C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057C30C;
    }
}

loc_8057C2A0:
{
    r0 = (r3 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C2A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C30C;
    }
}

loc_8057C2A8:
{
    r0 = (r3 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C2AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C30C;
    }
}

loc_8057C2B0:
{
    r0 = (r3 & 2);
}

loc_8057C2B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057C2EC;
    }
}

loc_8057C2B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8057C2BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C314;
    }
}

loc_8057C2C0:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 108));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C2CC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C2E0;
    }
}

loc_8057C2D4:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 584), r0);
    goto loc_8057C314;
}

loc_8057C2E0:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r29 + 584), r0);
    goto loc_8057C314;
}

loc_8057C2EC:
{
    f1.d = MemoryInline::FlatReadFloat32((r29 + 40));
    f0.d = MemoryInline::FlatReadFloat32(r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057C2F8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C314;
    }
}

loc_8057C300:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 584), r0);
    goto loc_8057C314;
}

loc_8057C30C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 584), r0);
}

loc_8057C314:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057C324:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C36C;
    }
}

loc_8057C328:
{
    r0 = MemoryInline::FlatRead32((r29 + 584));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8057C330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C34C;
    }
}

loc_8057C334:
{
    r3 = r29;
    r4 = 8;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8057C348u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591044u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8057C380;
}

loc_8057C34C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_8057C350:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057C380;
    }
}

loc_8057C354:
{
    r3 = r29;
    r4 = 8;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8057C368u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591050u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8057C380;
}

loc_8057C36C:
{
    r3 = r29;
    r4 = 8;
    r5 = 0;
    r6 = 1;
    ctx->lr = 0x8057C380u;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80591050u>(ctx);
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    f7 = ctx->fpr[7];
    f8 = ctx->fpr[8];
    f9 = ctx->fpr[9];
    f27 = ctx->fpr[27];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8057C380:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 112), 0, 104u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 80u, (r1 + 192));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 64u, (r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 48u, (r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 32u, (r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f27.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 16u, (r1 + 128));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.second;
            r30 = resolved_pair.first;
        } else {
            r31 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 124));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 120));
        }
    }
    r29 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 116));
    r0 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r1 + 212));
    r28 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 112));
    ctx->lr = r0;
    r1 = (r1 + 208);
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[27] = f27;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057B9BC func_8057B9BC preserves=false fpr_mask=0xF8000000
