#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805163F4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;

    goto loc_805163F4;

loc_805163F4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 52u, true, false);
    r5 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r3 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f2.d = MemoryInline::FlatReadFloat32(r4);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 24));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r3 + 20));
    f1.d = PpcFmulsInline(f5.d, f0.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 12));
    f2.d = PpcFmulsInline(f4.d, f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f4.d);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 28));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 48));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f5.d);
    f2.d = PpcFmulsInline(f6.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f6.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80516454:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80516468;
    }
}

loc_80516458:
{
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -1476));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80516464:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80516470;
    }
}

loc_80516468:
{
    r3 = 0;
    goto loc_805164F4;
}

loc_80516470:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 8));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
        }
    }
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 16));
    f1.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 44));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80516498:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805164A8;
    }
}

loc_8051649C:
{
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805164A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805164B0;
    }
}

loc_805164A8:
{
    r3 = 0;
    goto loc_805164F4;
}

loc_805164B0:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 32));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 36));
        }
    }
    f2.d = PpcFmulsInline(f4.d, f1.d);
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 40));
    f1.d = PpcFmulsInline(f5.d, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r3 + 52));
    f3.d = PpcFmulsInline(f6.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805164D8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805164E8;
    }
}

loc_805164DC:
{
    f0.d = (-(f0.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805164E4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805164F0;
    }
}

loc_805164E8:
{
    r3 = 0;
    goto loc_805164F4;
}

loc_805164F0:
{
    r3 = 1;
}

loc_805164F4:
{
    r1 = (r1 + 32);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001A gpr_write=0x0000003A gpr_return=0x00000018 fpr_read=0x0000007F fpr_write=0x0000007F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805163F4 func_805163F4 preserves=true fpr_mask=0x00000000
