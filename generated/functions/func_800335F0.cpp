#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800335F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_800335F0;

loc_800335F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30892));
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r7 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r2 + -30896));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + 12), 0, 130u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r3 + 16), r8);
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r3 + 12), r7);
    }
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r3 + 56), r8);
    MemoryInline::WriteResolved16(guest_range_2, 52u, (r3 + 64), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved32(guest_range_2, 48u, (r3 + 60), r8);
    MemoryInline::WriteResolved32(guest_range_2, 56u, (r3 + 68), r8);
    MemoryInline::WriteResolved16(guest_range_2, 64u, (r3 + 76), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r3 + 72), r8);
    MemoryInline::WriteResolved16(guest_range_2, 68u, (r3 + 80), static_cast<uint16_t>(r8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 76u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f1.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f1.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 76u, (r3 + 88), f1.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 80u, (r3 + 92), f1.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 84u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 84u, (r3 + 96), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 88u, (r3 + 100), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 92u, (r3 + 104), f0.d);
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r3 + 32), r4);
    r6 = MemoryInline::FlatRead32((r4 + 16));
    r0 = (r6 + 1);
    MemoryInline::FlatWrite32((r4 + 16), r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r3 + 36), r5);
    r0 = (r0 & 65535);
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r3 + 40), r8);
    MemoryInline::WriteResolved8(guest_range_2, 129u, (r3 + 141), static_cast<uint8_t>(r7));
    r4 = MemoryInline::FlatRead32((r13 + -27400));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8003367C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80033688;
    }
}

loc_80033680:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r13 + -27400), r0);
}

loc_80033688:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    r30 = MemoryInline::FlatRead32((r3 + 36));
    r3 = MemoryInline::FlatRead32((r4 + 188));
    r4 = MemoryInline::FlatRead8((r30 + 328));
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x800336B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 44), 0, 92u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 44), r3);
    r0 = 0;
    r3 = 1;
    MemoryInline::WriteResolved32(guest_range_1, 40u, (r31 + 84), r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r30 + 275), 0, 25u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 9u, (r30 + 284));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, (r30 + 275));
    MemoryInline::WriteResolved8(guest_range_1, 64u, (r31 + 108), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r30 + 276));
    MemoryInline::WriteResolved8(guest_range_1, 65u, (r31 + 109), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r30 + 277));
    MemoryInline::WriteResolved8(guest_range_1, 66u, (r31 + 110), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r30 + 278));
    MemoryInline::WriteResolved8(guest_range_1, 67u, (r31 + 111), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 4u, (r30 + 279));
    MemoryInline::WriteResolved8(guest_range_1, 68u, (r31 + 112), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 5u, (r30 + 280));
    MemoryInline::WriteResolved8(guest_range_1, 69u, (r31 + 113), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 6u, (r30 + 281));
    MemoryInline::WriteResolved8(guest_range_1, 70u, (r31 + 114), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 7u, (r30 + 282));
    MemoryInline::WriteResolved8(guest_range_1, 71u, (r31 + 115), static_cast<uint8_t>(r0));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 8u, (r30 + 283));
    MemoryInline::WriteResolved8(guest_range_1, 72u, (r31 + 116), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 76u, (r31 + 120), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 13u, (r30 + 288));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 80u, (r31 + 124), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 17u, (r30 + 292));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 84u, (r31 + 128), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 21u, (r30 + 296));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 88u, (r31 + 132), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800335F0 func_800335F0 preserves=true fpr_mask=0x00000000
