#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EAE00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t r0_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_807EAE00;

loc_807EAE00:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -112), 0, 120u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 92), r27);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r29);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r31);
    r27 = r3;
    MemoryInline::FlatWrite8((r3 + 436), static_cast<uint8_t>(r4));
    r4 = (r4 & 255);
    r3 = MemoryInline::FlatRead32((r5 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    // end of inlined leaf 0x80590100
    MemoryInline::FlatWrite32((r27 + 456), r3);
    r4 = r27;
    r3 = (r1 + 48);
    // inline leaf 0x805C2C18 (2 guest instruction(s))
    MemoryInline::WriteResolved32(guest_range_1, 48u, r3, r4);
    // end of inlined leaf 0x805C2C18
    r27 = 0x808B0000u;
    r27 = (r27 + -27664);
    guest_range_0 = MemoryInline::ResolveRangeHost(r27, 0, 40u, true, false);
    r28 = MemoryInline::ReadResolved32(guest_range_0, 0u, r27);
    r6 = 0x808B0000u;
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r28);
    r29 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r27 + 4));
    r6 = (r6 + -27568);
    r30 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r27 + 8));
    r3 = (r1 + 48);
    r31 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r27 + 12));
    r4 = (r6 + 139);
    r12 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r27 + 16));
    r5 = (r6 + 150);
    r11 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r27 + 20));
    r6 = (r6 + 160);
    r10 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r27 + 24));
    r7 = (r1 + 8);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 28u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r27 + 28));
            r8 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r27 + 32));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r27 + 36));
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r31);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r11);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r9);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r8);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r0);
    ctx->lr = 0x807EAEACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805C2C60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = (r1 + 48);
    r4 = -1;
    ctx->lr = 0x807EAEB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805C2C20u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r27 = MemoryInline::FlatRead32((r1 + 92));
    r28 = MemoryInline::FlatRead32((r1 + 96));
    r29 = MemoryInline::FlatRead32((r1 + 100));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE01E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807EAE00 func_807EAE00 preserves=true fpr_mask=0x00000000
