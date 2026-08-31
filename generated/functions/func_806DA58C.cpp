#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806DA58C(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];

    goto loc_806DA58C;

loc_806DA58C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    r11 = (r1 + 112);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r8 = 0x802A0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 48u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r4 + 12));
    r7 = (r8 + 16640);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r4 + 28));
    r0 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r4 + 44));
    r25 = r6;
    r26 = MemoryInline::ReadResolved32(guest_range_0, 0u, r4);
    r3 = (r1 + 8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 4u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r4 + 4));
            r28 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r4 + 8));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r4 + 16));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r4 + 20));
        }
    }
    r12 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r4 + 24));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r4 + 32));
            r9 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r4 + 36));
        }
    }
    r6 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r4 + 40));
    r4 = (r1 + 24);
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    f2.d = MemoryInline::FlatReadFloat32((r8 + 16640));
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r11);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r0);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
    }
    MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    }
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r1 + 48), r12);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r10);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r9);
    }
    MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r6);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 36u, (r1 + 36), f2.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 52u, (r1 + 52), f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 68u, (r1 + 68), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x802303F8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 112u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 0u, (r1 + 8));
    r11 = (r1 + 112);
    MemoryInline::FlatWriteFloat32(r25, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 4u, (r1 + 12));
    MemoryInline::FlatWriteFloat32((r25 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_2, 8u, (r1 + 16));
    MemoryInline::FlatWriteFloat32((r25 + 8), f0.d);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 76u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 80u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 84u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 92u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 92u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE000072 gpr_write=0xFE001FFB gpr_return=0x00000018 fpr_read=0x00001040 fpr_write=0x00001F7F fpr_return=0x00000002 cr_read=0x00 cr_write=0x00 xer_read=0 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806DA58C func_806DA58C preserves=true fpr_mask=0x00000000
