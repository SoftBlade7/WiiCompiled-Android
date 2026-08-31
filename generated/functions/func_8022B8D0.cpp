#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022B8D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    uint32_t cr = ctx->cr;

    goto loc_8022B8D0;

loc_8022B8D0:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r5 = 1127219200;
    f5.d = MemoryInline::FlatReadFloat64((r2 + -25056));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 32), 0, 20u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 44));
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 45));
    MemoryInline::FlatWriteRam32((r1 + 24), r5);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 14u, (r3 + 46));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f5.d));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 48));
    MemoryInline::FlatWriteRam32((r1 + 32), r5);
    f8.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 32));
    f3.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 32));
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25064));
    MemoryInline::FlatWriteRam32((r1 + 40), r5);
    f7.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 36));
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_8022B928:
{
    f2.d = PpcFmulsInline(f1.d, f4.d);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 40));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 40));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f5.d));
    MemoryInline::FlatWriteFloat32((r3 + 124), f8.d);
    MemoryInline::FlatWriteFloat32((r3 + 128), f7.d);
    f1.d = PpcFmulsInline(f1.d, f4.d);
    MemoryInline::FlatWriteFloat32((r3 + 132), f6.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022B960;
    }
}

loc_8022B95C:
{
    goto loc_8022B964;
}

loc_8022B960:
{
    f3.d = f0.d;
}

loc_8022B964:
{
    f2.d = PPC_Fctiwz(f3.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25064));
    MemoryInline::FlatWriteRamFloat64((r1 + 48), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022B978:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    MemoryInline::FlatWrite8((r3 + 136), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022B98C;
    }
}

loc_8022B988:
{
    goto loc_8022B990;
}

loc_8022B98C:
{
    f1.d = f0.d;
}

loc_8022B990:
{
    f2.d = PPC_Fctiwz(f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25064));
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8022B9A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 60));
    MemoryInline::FlatWrite8((r3 + 137), static_cast<uint8_t>(r0));
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022B9B8;
    }
}

loc_8022B9B4:
{
    goto loc_8022B9BC;
}

loc_8022B9B8:
{
    f1.d = f0.d;
}

loc_8022B9BC:
{
    f0.d = PPC_Fctiwz(f1.d);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 15u, (r3 + 47));
    MemoryInline::FlatWrite8((r3 + 139), static_cast<uint8_t>(r0));
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r0 = fctiwzword0;
    MemoryInline::FlatWrite8((r3 + 138), static_cast<uint8_t>(r0));
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000E gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x000001BB fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8022B8D0 func_8022B8D0 preserves=true fpr_mask=0x00000000
