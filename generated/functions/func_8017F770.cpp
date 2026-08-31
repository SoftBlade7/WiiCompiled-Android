#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017F770(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8017F7E4_loc_0 = 0;
    uint32_t addr_lfsx_8017F82C_loc_0 = 0;
    uint32_t addr_lfsx_8017F878_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
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
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8017F770;

loc_8017F770:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_8017F780:
{
    r6 = 0x80250000u;
    r6 = (r6 + 10984);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F79C;
    }
}

loc_8017F78C:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F794:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F7A4;
    }
}

loc_8017F79C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_8017F924;
}

loc_8017F7A4:
{
    r0 = (r4 * 12);
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F7B4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F7C4;
    }
}

loc_8017F7BC:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + -8));
    goto loc_8017F924;
}

loc_8017F7C4:
{
    r8 = (r4 + -1);
    r7 = 0;
    goto loc_8017F80C;
}

loc_8017F7D0:
{
    r5 = (r7 + r8);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r0 = (r0 + r5);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r5 = (static_cast<int32_t>(r0) >> 1);
    r0 = (r5 * 12);
    addr_lfsx_8017F7E4_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8017F7E4_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F7EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
}

loc_8017F7F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017F800;
    }
}

loc_8017F7FC:
{
    r8 = r5;
}

loc_8017F800:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017F804:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F80C;
    }
}

loc_8017F808:
{
    r7 = r5;
}

loc_8017F80C:
{
    r0 = (r8 + -1);
}

loc_8017F814:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_8017F820;
    }
}

loc_8017F818:
{
}

loc_8017F81C:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r8))) {
        goto loc_8017F7D0;
    }
}

loc_8017F820:
{
    r5 = (r8 * 12);
    f0.d = MemoryInline::FlatReadFloat32(r6);
    r0 = 0;
    addr_lfsx_8017F82C_loc_0 = (r3 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_8017F82C_loc_0);
    r9 = (r3 + r5);
    r5 = (r7 * 12);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r5 = (r3 + r5);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8017F844:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017F858;
    }
}

loc_8017F848:
{
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8017F850:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017F858;
    }
}

loc_8017F854:
{
    r0 = 1;
}

loc_8017F858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017F85C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F898;
    }
}

loc_8017F860:
{
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r0));
}

loc_8017F868:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017F890;
    }
}

loc_8017F86C:
{
    r0 = (r8 + 1);
    f1.d = MemoryInline::FlatReadFloat32(r9);
    r0 = (r0 * 12);
    addr_lfsx_8017F878_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8017F878_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F880:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F890;
    }
}

loc_8017F884:
{
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_8017F924;
}

loc_8017F890:
{
    f1.d = MemoryInline::FlatReadFloat32((r9 + 4));
    goto loc_8017F924;
}

loc_8017F898:
{
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32(r9);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f6.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r6 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r6 + 16));
    f2.d = PpcFmulsInline(f7.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r6 + 20));
    f8.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f9.d = MemoryInline::FlatReadFloat32((r9 + 4));
    f10.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f11.d = MemoryInline::FlatReadFloat32((r9 + 8));
    f12.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = PpcFmulsInline(f12.d, f5.d);
    f3.d = PpcFmulsInline(f4.d, f12.d);
    f13.d = PpcFmulsInline(f7.d, f2.d);
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f31.d = PpcFmulsInline(f13.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f3.d));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f13.d - f12.d));
    f1.d = PpcFmulsInline(f4.d, f31.d);
    f0.d = PpcFmulsInline(f0.d, f31.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f2.d = PpcFmulsInline(f10.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f6.d + f1.d));
    f0.d = PpcFmulsInline(f9.d, f0.d);
    f3.d = PpcFmulsInline(f11.d, f5.d);
    f1.d = PpcFmulsInline(f8.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
}

loc_8017F924:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
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
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000003FB gpr_write=0x000003EB gpr_return=0x00000008 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8017F770 func_8017F770 preserves=true fpr_mask=0x00000000
