#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80215CBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80215CBC;

loc_80215CBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25808), 0, 16u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25808));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80215CCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80215CDC;
    }
}

loc_80215CD0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -25804));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80215CD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80215D10;
    }
}

loc_80215CDC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -25800));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80215CE4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80215CF8;
    }
}

loc_80215CEC:
{
    r0 = 0;
    r0 = (r0 | 262144);
    goto loc_80215D10;
}

loc_80215CF8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25796));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80215D00:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80215D10;
    }
}

loc_80215D08:
{
    r0 = 0;
    r0 = (r0 | 524288);
}

loc_80215D10:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25808));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80215D1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80215D2C;
    }
}

loc_80215D20:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -25804));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80215D28:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80215D60;
    }
}

loc_80215D2C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -25800));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80215D34:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80215D48;
    }
}

loc_80215D3C:
{
    r0 = (r0 & -65537);
    r0 = (r0 | 131072);
    goto loc_80215D60;
}

loc_80215D48:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25796));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80215D50:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80215D60;
    }
}

loc_80215D58:
{
    r0 = (r0 & -131073);
    r0 = (r0 | 65536);
}

loc_80215D60:
{
    r3 = r0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000D gpr_write=0x00000009 gpr_return=0x00000008 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80215CBC func_80215CBC preserves=true fpr_mask=0x00000000
