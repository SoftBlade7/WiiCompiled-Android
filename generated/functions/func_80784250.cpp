#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80784250(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80784250;

loc_80784250:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 60));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078426C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078434C;
    }
}

loc_80784270:
{
    r4 = r31;
    r3 = (r1 + 8);
    r5 = (r31 + 12);
    // inline leaf 0x8051486C (13 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 60u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r4 + 8));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r5 + 8));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r4 + 4));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r5 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r4);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, r5);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f4.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 4), f2.d);
    MemoryInline::FlatWriteRamFloat32(r3, f0.d);
    // end of inlined leaf 0x8051486C
    f1.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r3 = 0x80380000u;
    MemoryInline::FlatWriteFloat32((r31 + 24), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 48u, (r31 + 48));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 28), f2.d);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 52u, (r31 + 52));
    f3.d = MemoryInline::FlatReadFloat32((r1 + 16));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 56u, (r31 + 56));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r31 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            f1.d = PpcBitCastToFloatInline(resolved_pair.first);
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r31 + 40));
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r31 + 44));
        }
    }
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f1.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f0.d);
    r3 = MemoryInline::FlatRead32((r3 + 24520));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807842E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078430C;
    }
}

loc_807842E8:
{
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 6048));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f0.d);
    goto loc_8078432C;
}

loc_8078430C:
{
    r3 = 0x808D0000u;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 6052));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = PpcFmulsInline(f1.d, f3.d);
    f0.d = PpcFmulsInline(f0.d, f3.d);
    MemoryInline::FlatWriteFloat32((r31 + 24), f2.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f1.d);
    MemoryInline::FlatWriteFloat32((r31 + 32), f0.d);
}

loc_8078432C:
{
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16640));
    r3 = (r3 + 16640);
    MemoryInline::FlatWriteFloat32((r31 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    MemoryInline::FlatWriteFloat32((r31 + 40), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    MemoryInline::FlatWriteFloat32((r31 + 44), f0.d);
}

loc_8078434C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
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

// RECOMP_GUEST_ABI gpr_read=0x8000003B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x0000003F fpr_write=0x0000003F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80784250 func_80784250 preserves=true fpr_mask=0x00000000
