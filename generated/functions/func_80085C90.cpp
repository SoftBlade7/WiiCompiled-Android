#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80085C90(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    uint32_t cr = ctx->cr;

    goto loc_80085C90;

loc_80085C90:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 48u, true, false);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 24u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f3.d = PpcFmulsInline(f4.d, f1.d);
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r5 + 12));
    f1.d = PpcFmulsInline(f4.d, f0.d);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r5 + 4));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r5 + 8));
    f6.d = PpcFmulsInline(f7.d, f6.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f3.d = PpcFmulsInline(f4.d, f3.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_80085CD4:
{
    f5.d = PpcFmulsInline(f7.d, f5.d);
    f4.d = PpcFmulsInline(f4.d, f1.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80085CEC;
    }
}

loc_80085CE0:
{
    f1.d = f0.d;
    f0.d = f2.d;
    f2.d = f1.d;
}

loc_80085CEC:
{
    SetCRFloatResident(cr, 0, f6.d, f5.d);
}

loc_80085CF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085D00;
    }
}

loc_80085CF4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f6.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    goto loc_80085D08;
}

loc_80085D00:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f5.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f6.d));
}

loc_80085D08:
{
    SetCRFloatResident(cr, 0, f3.d, f4.d);
}

loc_80085D0C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085D1C;
    }
}

loc_80085D10:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f4.d));
    goto loc_80085D24;
}

loc_80085D1C:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f3.d));
}

loc_80085D24:
{
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 16));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f5.d = PpcFmulsInline(f6.d, f3.d);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r5 + 28));
    f3.d = PpcFmulsInline(f6.d, f1.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 20));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r5 + 24));
    f8.d = PpcFmulsInline(f9.d, f8.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    SetCRFloatResident(cr, 0, f1.d, f3.d);
}

loc_80085D68:
{
    f7.d = PpcFmulsInline(f9.d, f7.d);
    f6.d = PpcFmulsInline(f6.d, f4.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80085D80;
    }
}

loc_80085D74:
{
    f4.d = f1.d;
    f1.d = f3.d;
    f3.d = f4.d;
}

loc_80085D80:
{
    SetCRFloatResident(cr, 0, f8.d, f7.d);
}

loc_80085D84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085D94;
    }
}

loc_80085D88:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f8.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f7.d));
    goto loc_80085D9C;
}

loc_80085D94:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f7.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f8.d));
}

loc_80085D9C:
{
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_80085DA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085DB0;
    }
}

loc_80085DA4:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f6.d));
    goto loc_80085DB8;
}

loc_80085DB0:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f5.d));
}

loc_80085DB8:
{
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r5 + 32));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 0u, r4);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 12u, (r4 + 12));
    f6.d = PpcFmulsInline(f7.d, f5.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r5 + 44));
    f4.d = PpcFmulsInline(f7.d, f4.d);
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r5 + 36));
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f4.d));
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 16u, (r4 + 16));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r5 + 40));
    f8.d = PpcFmulsInline(f9.d, f8.d);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    f5.d = PpcFmulsInline(f6.d, f5.d);
    SetCRFloatResident(cr, 0, f10.d, f11.d);
}

loc_80085DFC:
{
    f7.d = PpcFmulsInline(f9.d, f7.d);
    f6.d = PpcFmulsInline(f6.d, f4.d);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80085E14;
    }
}

loc_80085E08:
{
    f4.d = f10.d;
    f10.d = f11.d;
    f11.d = f4.d;
}

loc_80085E14:
{
    SetCRFloatResident(cr, 0, f8.d, f7.d);
}

loc_80085E18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085E28;
    }
}

loc_80085E1C:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f8.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f7.d));
    goto loc_80085E30;
}

loc_80085E28:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f7.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f8.d));
}

loc_80085E30:
{
    SetCRFloatResident(cr, 0, f5.d, f6.d);
}

loc_80085E34:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80085E44;
    }
}

loc_80085E38:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f5.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f6.d));
    goto loc_80085E4C;
}

loc_80085E44:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f10.d + f6.d));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f5.d));
}

loc_80085E4C:
{
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 8), f10.d);
    MemoryInline::FlatWriteFloat32((r3 + 12), f2.d);
    MemoryInline::FlatWriteFloat32((r3 + 16), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 20), f11.d);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000038 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000FFF fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80085C90 func_80085C90 preserves=true fpr_mask=0x00000000
