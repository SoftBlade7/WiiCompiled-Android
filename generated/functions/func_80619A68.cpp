#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80619A68(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80619A68;

loc_80619A68:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r9 = 1127219200;
    r5 = 0x80890000u;
    r8 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r4);
    r7 = 0x809C0000u;
    f4.d = MemoryInline::FlatReadFloat64((r5 + 31480));
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 16), r9);
    r6 = -1;
    f2.d = MemoryInline::FlatReadFloat32((r8 + 31472));
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 24), r9);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 8), r9);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 8), 0, 60u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 4u, (r3 + 12), f1.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 16), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 0u, (r3 + 8), f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 7552));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 24), r6);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 28), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 32), r6);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 36), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 40), r6);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 20), f0.d);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 44), r6);
    MemoryInline::WriteResolved8(guest_range_0, 40u, (r3 + 48), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r3 + 60), r5);
    ctr = r0;
}

loc_80619B0C:
{
    r4 = (r3 + r8);
    r8 = (r8 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r4 + 68), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 0u, (r4 + 68), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 1u, (r4 + 69), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 2u, (r4 + 70), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 3u, (r4 + 71), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 4u, (r4 + 72), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 5u, (r4 + 73), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 6u, (r4 + 74), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_1, 7u, (r4 + 75), static_cast<uint8_t>(r5));
    r4 = (r3 + r8);
    r8 = (r8 + 8);
    guest_range_2 = MemoryInline::ResolveRangeHost((r4 + 68), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r4 + 68), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r4 + 69), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r4 + 70), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r4 + 71), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r4 + 72), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r4 + 73), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r4 + 74), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r4 + 75), static_cast<uint8_t>(r5));
    r4 = (r3 + r8);
    r8 = (r8 + 8);
    guest_range_3 = MemoryInline::ResolveRangeHost((r4 + 68), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r4 + 68), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r4 + 69), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r4 + 70), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r4 + 71), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r4 + 72), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r4 + 73), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r4 + 74), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r4 + 75), static_cast<uint8_t>(r5));
    r4 = (r3 + r8);
    r8 = (r8 + 8);
    guest_range_4 = MemoryInline::ResolveRangeHost((r4 + 68), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r4 + 68), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r4 + 69), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r4 + 70), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r4 + 71), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r4 + 72), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r4 + 73), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r4 + 74), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r4 + 75), static_cast<uint8_t>(r5));
    r4 = (r3 + r8);
    r8 = (r8 + 8);
    guest_range_5 = MemoryInline::ResolveRangeHost((r4 + 68), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r4 + 68), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r4 + 69), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r4 + 70), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r4 + 71), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r4 + 72), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 5u, (r4 + 73), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 6u, (r4 + 74), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 7u, (r4 + 75), static_cast<uint8_t>(r5));
    r4 = (r3 + r8);
    r8 = (r8 + 8);
    guest_range_6 = MemoryInline::ResolveRangeHost((r4 + 68), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_6, 0u, (r4 + 68), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 1u, (r4 + 69), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 2u, (r4 + 70), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 3u, (r4 + 71), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 4u, (r4 + 72), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 5u, (r4 + 73), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 6u, (r4 + 74), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_6, 7u, (r4 + 75), static_cast<uint8_t>(r5));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80619B0C;
    }
}

loc_80619C00:
{
    r4 = (r3 + r8);
    r5 = 0;
    MemoryInline::FlatWrite8((r4 + 68), static_cast<uint8_t>(r5));
    r7 = 0;
    r6 = 0;
    MemoryInline::FlatWrite8((r4 + 69), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 70), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r4 + 71), static_cast<uint8_t>(r5));
    goto loc_80619C34;
}

loc_80619C24:
{
    r4 = MemoryInline::FlatRead32((r3 + 52));
    r7 = (r7 + 1);
    r4_addr_2 = (r4 + r6);
    MemoryInline::FlatWrite32(r4_addr_2, r5);
    r6 = (r6 + 4);
}

loc_80619C34:
{
    r0 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(r0));
}

loc_80619C3C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80619C24;
    }
}

loc_80619C40:
{
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 64), r0);
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000003F3 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80619A68 func_80619A68 preserves=true fpr_mask=0x00000000
