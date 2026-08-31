#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80599AD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
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

    goto loc_80599AD0;

loc_80599AD0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    f1.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r31);
    r31 = r4;
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r30);
    r30 = r3;
    f3.d = MemoryInline::FlatReadFloat32((r3 + 120));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 124));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f7.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 128));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f8.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f7.d));
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f6.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f1.d = PpcFmulsInline(f1.d, f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f6.d));
    f0.d = PpcFmulsInline(f0.d, f4.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 32u, (r1 + 32), f8.d);
    f2.d = PpcFmulsInline(f2.d, f3.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f7.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 40u, (r1 + 40), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f5.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f4.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_1, 20u, (r1 + 20), f5.d);
        MemoryInline::WriteResolvedFloat32(guest_range_1, 24u, (r1 + 24), f4.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_1, 28u, (r1 + 28), f3.d);
    MemoryInline::FlatWriteFloat32((r3 + 68), f0.d);
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    r4 = MemoryInline::FlatRead32((r30 + 24));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80599B80:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80599BA0;
    }
}

loc_80599B84:
{
    r3 = r30;
    // inline leaf 0x80590764 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 24));
    // end of inlined leaf 0x80590764
    r4 = MemoryInline::FlatRead32((r30 + 24));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 96));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_80599BA0:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r30 + 68));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8040));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80599BB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80599BB8;
    }
}

loc_80599BB4:
{
    MemoryInline::FlatWriteFloat32((r30 + 68), f0.d);
}

loc_80599BB8:
{
    f3.d = MemoryInline::FlatReadFloat32((r30 + 68));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32(r31);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    f5.d = PpcFmulsInline(f3.d, f2.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f4.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 44));
    f3.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 48));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 32), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 36), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 40), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f0.d);
    // inline leaf 0x805903CC (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x805903CC
    f3.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 16));
    MemoryInline::FlatWriteFloat32((r30 + 84), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 88), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 92), f1.d);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 176), 0, 168u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 156u, (r3 + 332));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 84), f3.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 160u, (r3 + 336));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 164u, (r3 + 340));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 176));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 84), f3.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r3 + 180));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f2.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 184));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 200));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 84), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 204));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 208));
    r3 = r30;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    // inline leaf 0x8059081C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = (r3 + 8);
    // end of inlined leaf 0x8059081C
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 76));
    f2.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r30 + 92));
    MemoryInline::FlatWriteFloat32((r30 + 84), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 80));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 88), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    r3 = r30;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f0.d);
    // inline leaf 0x8059084C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 48));
    // end of inlined leaf 0x8059084C
    f1.d = MemoryInline::FlatReadFloat32((r30 + 84));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 60));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f5.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 92));
    r4 = MemoryInline::FlatRead32((r30 + 28));
    MemoryInline::FlatWriteFloat32((r30 + 84), f5.d);
    f2.d = MemoryInline::FlatReadFloat32((r1 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 64));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 36));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    MemoryInline::FlatWriteFloat32((r30 + 88), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r3 + 68));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    MemoryInline::FlatWriteFloat32((r30 + 92), f3.d);
    f3.d = MemoryInline::FlatReadFloat32((r4 + 60));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f5.d));
    MemoryInline::FlatWriteFloat32((r4 + 60), f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 64));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 88));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 64), f3.d);
    f4.d = MemoryInline::FlatReadFloat32((r4 + 68));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 92));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    MemoryInline::FlatWriteFloat32((r4 + 68), f3.d);
    f5.d = MemoryInline::FlatReadFloat32((r30 + 32));
    f4.d = MemoryInline::FlatReadFloat32((r30 + 36));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 44), f5.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    MemoryInline::FlatWriteFloat32((r30 + 48), f4.d);
    MemoryInline::FlatWriteFloat32((r30 + 52), f3.d);
    MemoryInline::FlatWriteFloat32((r30 + 56), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 60), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 64), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
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

// RECOMP_GUEST_ABI gpr_read=0xC000003A gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x000001FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80599AD0 func_80599AD0 preserves=true fpr_mask=0x00000000
