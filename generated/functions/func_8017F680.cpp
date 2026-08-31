#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017F680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8017F6DC_loc_0 = 0;
    uint32_t addr_lfsx_8017F720_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8017F680;

loc_8017F680:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
}

loc_8017F684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F698;
    }
}

loc_8017F688:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F690:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F6A0;
    }
}

loc_8017F698:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8017F6A0:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_0 & -8);
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F6B0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017F6C0;
    }
}

loc_8017F6B8:
{
    r3 = MemoryInline::FlatRead16((r5 + -4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8017F6C0:
{
    r5 = (r4 + -1);
    r6 = 0;
    goto loc_8017F704;
}

loc_8017F6CC:
{
    r4 = (r6 + r5);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r4 = (r0 + r4);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -8);
    addr_lfsx_8017F6DC_loc_0 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8017F6DC_loc_0);
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r4 = (static_cast<int32_t>(r4) >> 1);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F6E8:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_8017F6F0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017F6F8;
    }
}

loc_8017F6F4:
{
    r5 = r4;
}

loc_8017F6F8:
{
}

loc_8017F6FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8017F704;
    }
}

loc_8017F700:
{
    r6 = r4;
}

loc_8017F704:
{
    r0 = (r5 + -1);
}

loc_8017F70C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8017F718;
    }
}

loc_8017F710:
{
}

loc_8017F714:
{
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(r5))) {
        goto loc_8017F6CC;
    }
}

loc_8017F718:
{
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r5 = (r5_rot_0 & -8);
    r4 = 0x80250000u;
    addr_lfsx_8017F720_loc_0 = (r3 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_8017F720_loc_0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10984));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8017F734:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017F74C;
    }
}

loc_8017F738:
{
    r4 = 0x80250000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10988));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8017F744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017F74C;
    }
}

loc_8017F748:
{
    r0 = 1;
}

loc_8017F74C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8017F750:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017F760;
    }
}

loc_8017F754:
{
    r3 = (r3 + r5);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

loc_8017F760:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead16((r3 + 4));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000079 gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8017F680 func_8017F680 preserves=true fpr_mask=0x00000000
