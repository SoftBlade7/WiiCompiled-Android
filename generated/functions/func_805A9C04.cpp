#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A9C04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A9C04;

loc_805A9C04:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80890000u;
    r9 = 0x808B0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r8 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 9336));
    r9 = (r9 + 28192);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r5 = 255;
    r7 = -1;
    r6 = 0x802A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 82u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r3, r9);
    r0 = 1;
    r31 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 8), r8);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_0, 12u, (r3 + 12), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_0, 20u, (r3 + 20), f0.d);
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r3 + 32), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 36), r5);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 44), r8);
    MemoryInline::WriteResolved16(guest_range_0, 48u, (r3 + 48), static_cast<uint16_t>(r7));
    r6 = (r6 + 16640);
    r5 = MemoryInline::FlatRead32(r6);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r3 + 60), r4);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r3 + 56), r5);
    }
    r4 = MemoryInline::FlatRead32((r6 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r3 + 64), r4);
        MemoryInline::WriteResolvedFloat32(guest_range_0, 68u, (r3 + 68), f0.d);
    }
    MemoryInline::WriteResolved32(guest_range_0, 76u, (r3 + 76), r7);
    MemoryInline::WriteResolved8(guest_range_0, 80u, (r3 + 80), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 81u, (r3 + 81), static_cast<uint8_t>(r0));
    r3 = 56;
    ctx->lr = 0x805A9C90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805A9C94:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805A9C9C;
    }
}

loc_805A9C98:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8074AE2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r31 = ctx->gpr[31];
}

loc_805A9C9C:
{
    MemoryInline::FlatWrite32((r31 + 40), r3);
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFC1E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805A9C04 func_805A9C04 preserves=true fpr_mask=0x00000000
