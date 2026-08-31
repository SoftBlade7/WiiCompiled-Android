#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805ADFF0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805ADFF0;

loc_805ADFF0:
{
    r6 = 0x80890000u;
    r5 = 0x808B0000u;
    r6 = (r6 + 9448);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_805AE008:
{
    r8 = 0;
    r5 = (r5 + 28260);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 44u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r5);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r8);
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 33), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AE0A0;
    }
}

loc_805AE028:
{
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r4);
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r8));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AE0F0;
    }
}

loc_805AE034:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 26u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 4u, (r4 + 4));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 8u, (r4 + 8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f1.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 12u, (r4 + 12));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 16), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 13u, (r4 + 13));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 17), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 14u, (r4 + 14));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 18), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 15u, (r4 + 15));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r4 + 16));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r0));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 20u, (r4 + 20));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 24), f1.d);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 24u, (r4 + 24));
    MemoryInline::WriteResolved8(guest_range_0, 28u, (r3 + 28), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_1, 25u, (r4 + 25));
    MemoryInline::WriteResolved8(guest_range_0, 29u, (r3 + 29), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 33u, (r3 + 33), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 40u, (r3 + 40), f0.d);
    goto loc_805AE0F0;
}

loc_805AE0A0:
{
    f1.d = MemoryInline::FlatReadFloat32((r6 + 12));
    r0 = 4;
    f0.d = MemoryInline::FlatReadFloat32((r6 + 16));
    r5 = (r6 + 0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 8u, (r3 + 8), f1.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    r7 = MemoryInline::FlatRead8(r6);
    r6 = MemoryInline::FlatRead8((r5 + 1));
    r4 = MemoryInline::FlatRead8((r5 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r6));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 16u, (r3 + 16), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 17u, (r3 + 17), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 18u, (r3 + 18), static_cast<uint8_t>(r4));
    MemoryInline::WriteResolved8(guest_range_0, 19u, (r3 + 19), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 20), static_cast<uint16_t>(r8));
}

loc_805AE0F0:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000FB gpr_write=0x000001F3 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805ADFF0 func_805ADFF0 preserves=true fpr_mask=0x00000000
