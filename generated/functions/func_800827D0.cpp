#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800827D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8008283C_loc_0 = 0;
    uint32_t addr_lfsx_80082884_loc_0 = 0;
    uint32_t addr_lfsx_800828D0_loc_0 = 0;
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_800827D0;

loc_800827D0:
{
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_800827E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800827F4;
    }
}

loc_800827E4:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800827EC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800827FC;
    }
}

loc_800827F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_8008297C;
}

loc_800827FC:
{
    r0 = (r4 * 12);
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8008280C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8008281C;
    }
}

loc_80082814:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + -8));
    goto loc_8008297C;
}

loc_8008281C:
{
    r7 = (r4 + -1);
    r6 = 0;
    goto loc_80082864;
}

loc_80082828:
{
    r5 = (r6 + r7);
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
    addr_lfsx_8008283C_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8008283C_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80082844:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    r0 = cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 1);
}

loc_80082850:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80082858;
    }
}

loc_80082854:
{
    r7 = r5;
}

loc_80082858:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8008285C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80082864;
    }
}

loc_80082860:
{
    r6 = r5;
}

loc_80082864:
{
    r0 = (r7 + -1);
}

loc_8008286C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_80082878;
    }
}

loc_80082870:
{
}

loc_80082874:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r7))) {
        goto loc_80082828;
    }
}

loc_80082878:
{
    r5 = (r7 * 12);
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29032));
    r0 = 0;
    addr_lfsx_80082884_loc_0 = (r3 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_80082884_loc_0);
    r8 = (r3 + r5);
    r5 = (r6 * 12);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r5 = (r3 + r5);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8008289C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800828B0;
    }
}

loc_800828A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29028));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_800828A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800828B0;
    }
}

loc_800828AC:
{
    r0 = 1;
}

loc_800828B0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800828B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800828F0;
    }
}

loc_800828B8:
{
    r0 = (r4 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
}

loc_800828C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800828E8;
    }
}

loc_800828C4:
{
    r0 = (r7 + 1);
    f1.d = MemoryInline::FlatReadFloat32(r8);
    r0 = (r0 * 12);
    addr_lfsx_800828D0_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_800828D0_loc_0);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800828D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800828E8;
    }
}

loc_800828DC:
{
    r3 = (r3 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_8008297C;
}

loc_800828E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r8 + 4));
    goto loc_8008297C;
}

loc_800828F0:
{
    f2.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32(r8);
    f7.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f6.d = MemoryInline::FlatReadFloat32((r2 + -29024));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29020));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29016));
    f2.d = PpcFmulsInline(f7.d, f7.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29012));
    f8.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f9.d = MemoryInline::FlatReadFloat32((r8 + 4));
    f10.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f11.d = MemoryInline::FlatReadFloat32((r8 + 8));
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

loc_8008297C:
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

// RECOMP_GUEST_ABI gpr_read=0x000001FF gpr_write=0x000001EB gpr_return=0x00000008 fpr_read=0x80003FFF fpr_write=0x80003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800827D0 func_800827D0 preserves=true fpr_mask=0x00000000
