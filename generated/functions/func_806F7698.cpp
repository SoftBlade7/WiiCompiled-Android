#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F7698(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806F7698;

loc_806F7698:
{
    r4 = 0x809C0000u;
    r5 = 0x808A0000u;
    r4 = MemoryInline::FlatRead32((r4 + 8992));
    r5 = (r5 + 3736);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 24u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    r0 = MemoryInline::FlatRead8((r4 + 16));
}

loc_806F76B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_806F76F4;
    }
}

loc_806F76B8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F76C0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F76D0;
    }
}

loc_806F76C8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    goto loc_806F7724;
}

loc_806F76D0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806F76D8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806F76E8;
    }
}

loc_806F76E0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    goto loc_806F7724;
}

loc_806F76E8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    goto loc_806F7724;
}

loc_806F76F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F76F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7718;
    }
}

loc_806F76FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_806F7700:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7718;
    }
}

loc_806F7704:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_806F7708:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7720;
    }
}

loc_806F770C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_806F7710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F7720;
    }
}

loc_806F7714:
{
    goto loc_806F7724;
}

loc_806F7718:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    goto loc_806F7724;
}

loc_806F7720:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
}

loc_806F7724:
{
    f1.d = f0.d;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000028 gpr_write=0x00000031 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806F7698 func_806F7698 preserves=true fpr_mask=0x00000000
