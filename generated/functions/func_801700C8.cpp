#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801700C8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801700C8;

loc_801700C8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -26784), 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -26784));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_801700D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801700D8;
    }
}

loc_801700D4:
{
    r4 = 0;
}

loc_801700D8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -26784));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_801700E0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801700F8;
    }
}

loc_801700E8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -26760));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_801700F0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801700FC;
    }
}

loc_801700F8:
{
    r4 = 0;
}

loc_801700FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_80170100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017013C;
    }
}

loc_80170104:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80170118;
    }
}

loc_80170108:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8017010C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017017C;
    }
}

loc_80170110:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80170124;
    }
}

loc_80170114:
{
    goto loc_8017017C;
}

loc_80170118:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(4));
}

loc_8017011C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017017C;
    }
}

loc_80170120:
{
    goto loc_80170160;
}

loc_80170124:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -26760));
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -26784));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_80170188;
}

loc_8017013C:
{
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -26760));
    f3.d = PpcFmulsInline(f2.d, f1.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r2 + -26740));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f3.d);
    f1.d = PpcFmulsInline(f4.d, f2.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    goto loc_80170188;
}

loc_80170160:
{
    f0.d = PpcFmulsInline(f2.d, f1.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -26760));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -26784));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f0.d));
    goto loc_80170188;
}

loc_8017017C:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -26784));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -26760));
    f4.d = f3.d;
}

loc_80170188:
{
    MemoryInline::FlatWriteFloat32((r3 + 28), f5.d);
    MemoryInline::FlatWriteFloat32((r3 + 32), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 36), f4.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001C gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000007 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801700C8 func_801700C8 preserves=true fpr_mask=0x00000000
