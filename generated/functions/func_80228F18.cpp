#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80228F18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
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
    uint32_t cr = ctx->cr;

    goto loc_80228F18;

loc_80228F18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -25168), 0, 16u, true, false);
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -25160));
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f1.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -25164));
    f4.d = PpcFmulsInline(f5.d, f4.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25168));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80228F50:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f4.d);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228F68;
    }
}

loc_80228F60:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    goto loc_80228F78;
}

loc_80228F68:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25156));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80228F70:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80228F78;
    }
}

loc_80228F74:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
}

loc_80228F78:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80228F84:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228F90;
    }
}

loc_80228F88:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    goto loc_80228FA0;
}

loc_80228F90:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25156));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80228F98:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80228FA0;
    }
}

loc_80228F9C:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
}

loc_80228FA0:
{
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -25168));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80228FAC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80228FB8;
    }
}

loc_80228FB0:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    goto loc_80228FC8;
}

loc_80228FB8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -25156));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80228FC0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80228FC8;
    }
}

loc_80228FC4:
{
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
}

loc_80228FC8:
{
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f2.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword1;
    r0 = fctiwzword2;
    MemoryInline::FlatWrite8((r3 + 3), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 2), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    r1 = (r1 + 48);
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001E gpr_write=0x00000033 gpr_return=0x00000010 fpr_read=0x00000017 fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80228F18 func_80228F18 preserves=true fpr_mask=0x00000000
