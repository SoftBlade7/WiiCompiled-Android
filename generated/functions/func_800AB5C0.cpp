#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800AB5C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r2 = ctx->gpr[2];
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
    uint32_t cr = ctx->cr;

    goto loc_800AB5C0;

loc_800AB5C0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28024), 0, 40u, true, false);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28024));
    f0.d = std::fabs(f1.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = std::fabs(f4.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_800AB5D4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AB62C;
    }
}

loc_800AB5DC:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28020));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_800AB5E4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AB608;
    }
}

loc_800AB5EC:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
            f0.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -28012));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -28016));
        }
    }
    f2.d = PpcFmulsInline(f2.d, f4.d);
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_800AB74C;
}

loc_800AB608:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -28004));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r2 + -28008));
        }
    }
    f2.d = PpcFmulsInline(f0.d, f4.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -28016));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteFloat32(r4, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_800AB74C;
}

loc_800AB62C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28020));
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_800AB634:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AB6C4;
    }
}

loc_800AB63C:
{
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_800AB640:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AB68C;
    }
}

loc_800AB648:
{
    f5.d = (-(f4.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -27992));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -27996));
        }
    }
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r2 + -28012));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f1.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -28000));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -28016));
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f3.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_800AB74C;
}

loc_800AB68C:
{
    f5.d = (-(f4.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -28004));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -27988));
    f2.d = PpcFmulsInline(f2.d, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -28000));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f1.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -28016));
    f4.d = PpcFmulsInline(f4.d, f5.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f4.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    goto loc_800AB74C;
}

loc_800AB6C4:
{
    SetCRFloatResident(cr, 0, f4.d, f2.d);
}

loc_800AB6C8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800AB714;
    }
}

loc_800AB6D0:
{
    f5.d = (-(f4.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
            f6.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r2 + -27992));
            f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r2 + -27996));
        }
    }
    f4.d = PpcFmulsInline(f2.d, f4.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -28004));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f5.d / f1.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -28000));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -28016));
    f6.d = PpcFmulsInline(f6.d, f7.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f6.d - f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32(r4, f3.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_800AB74C;
}

loc_800AB714:
{
    f6.d = (-(f4.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r2 + -27988));
    f3.d = (-(f1.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 20u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r2 + -28004));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r2 + -28000));
        }
    }
    f6.d = static_cast<double>(PpcForceSingleValueInline(f6.d / f1.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r2 + -28016));
    f5.d = PpcFmulsInline(f5.d, f6.d);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    MemoryInline::FlatWriteFloat32(r5, f1.d);
}

loc_800AB74C:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28024));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000034 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x000000FF fpr_write=0x000000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800AB5C0 func_800AB5C0 preserves=true fpr_mask=0x00000000
