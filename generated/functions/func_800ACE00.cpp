#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800ACE00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_800ACE70_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800ACE00;

loc_800ACE00:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -27968), 0, 36u, true, false);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27968));
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800ACE0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800ACE14;
    }
}

loc_800ACE10:
{
    goto loc_800ACE28;
}

loc_800ACE14:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -27944));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800ACE1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ACE24;
    }
}

loc_800ACE20:
{
    goto loc_800ACE28;
}

loc_800ACE24:
{
    f2.d = f1.d;
}

loc_800ACE28:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27968));
    r4 = 0x80270000u;
    r0 = MemoryInline::FlatRead32(r3);
    r4 = (r4 + 19312);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -27960));
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & -4);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -27940));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800ACE54:
{
    r4_addr_0 = (r4 + r5);
    r4 = MemoryInline::FlatRead32(r4_addr_0);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    addr_lfsx_800ACE70_loc_0 = (r4 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_800ACE70_loc_0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800ACE80;
    }
}

loc_800ACE78:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 512));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
}

loc_800ACE80:
{
    r0 = MemoryInline::FlatRead8((r3 + 5));
}

loc_800ACE88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800ACEB4;
    }
}

loc_800ACE8C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -27968));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800ACE94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800ACE9C;
    }
}

loc_800ACE98:
{
    goto loc_800ACED8;
}

loc_800ACE9C:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -27936));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800ACEA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ACEAC;
    }
}

loc_800ACEA8:
{
    goto loc_800ACED8;
}

loc_800ACEAC:
{
    f1.d = f2.d;
    goto loc_800ACED8;
}

loc_800ACEB4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -27964));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800ACEBC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800ACEC4;
    }
}

loc_800ACEC0:
{
    goto loc_800ACED8;
}

loc_800ACEC4:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -27936));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_800ACECC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800ACED4;
    }
}

loc_800ACED0:
{
    goto loc_800ACED8;
}

loc_800ACED4:
{
    f1.d = f2.d;
}

loc_800ACED8:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000003E gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800ACE00 func_800ACE00 preserves=true fpr_mask=0x00000000
