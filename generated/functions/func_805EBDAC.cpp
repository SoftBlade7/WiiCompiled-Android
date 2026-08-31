#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EBDAC(CpuContext* MKW_RESTRICT ctx)
{
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];

    goto loc_805EBDAC;

loc_805EBDAC:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r26);
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r1 + 64), r28);
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r1 + 68), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r31);
    }
    r31 = 0x808C0000u;
    r30 = r3;
    r31 = (r31 + -27208);
    ctx->lr = 0x805EBDCCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8060197Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r4 = 0x808C0000u;
    r3 = 0x808C0000u;
    r4 = (r4 + -26696);
    guest_range_0 = MemoryInline::ResolveRangeHost(r30, 0, 148u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r30, r4);
    r5 = (r31 + 84);
    r7 = 0x808C0000u;
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 84), 0, 48u, true, false);
    r26 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r31 + 84));
    r4 = 0x808C0000u;
    r27 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 4));
    r3 = (r3 + -26560);
    r28 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 8));
    r8 = (r31 + 96);
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r30 + 84), r28);
    r7 = (r7 + -26572);
    r6 = (r31 + 108);
    r5 = (r31 + 120);
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r30 + 68), r3);
    r4 = (r4 + -26596);
    r3 = (r30 + 148);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r30 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r30 + 76), r26);
    }
    MemoryInline::WriteResolved32(guest_range_0, 80u, (r30 + 80), r27);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r31 + 96));
            r12 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r8 + 4));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 104u, (r30 + 104), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r30 + 88), r7);
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r30 + 92), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r30 + 96), r29);
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r30 + 100), r12);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r31 + 108));
            r9 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r6 + 4));
        }
    }
    r8 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r6 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r30 + 124), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r30 + 108), r7);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r30 + 112), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r30 + 116), r10);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r30 + 120), r9);
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r31 + 120));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r5 + 4));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r5 + 8));
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_3, 36u, (r1 + 44), r26);
        MemoryInline::WriteResolved32(guest_range_3, 40u, (r1 + 48), r27);
    }
    MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 52), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r1 + 32), r29);
        MemoryInline::WriteResolved32(guest_range_3, 28u, (r1 + 36), r12);
    }
    MemoryInline::WriteResolved32(guest_range_3, 32u, (r1 + 40), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r1 + 20), r10);
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r1 + 24), r9);
    }
    MemoryInline::WriteResolved32(guest_range_3, 20u, (r1 + 28), r8);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + 8), r7);
        MemoryInline::WriteResolved32(guest_range_3, 4u, (r1 + 12), r6);
    }
    MemoryInline::WriteResolved32(guest_range_3, 8u, (r1 + 16), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r30 + 128), r4);
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r30 + 132), r30);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r30 + 136), r7);
        MemoryInline::WriteResolved32(guest_range_0, 140u, (r30 + 140), r6);
    }
    MemoryInline::WriteResolved32(guest_range_0, 144u, (r30 + 144), r0);
    ctx->lr = 0x805EBEB8u;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805EF240u>(ctx);
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
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r26 = (r30 + 472);
    r3 = r26;
    ctx->lr = 0x805EBEC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = 0x808D0000u;
    r27 = (r30 + 844);
    r3 = (r3 + 14036);
    MemoryInline::FlatWrite32(r26, r3);
    r3 = r27;
    ctx->lr = 0x805EBEDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x8063D798u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r4 = 0x808C0000u;
    r3 = (r30 + 1216);
    r4 = (r4 + -26324);
    MemoryInline::FlatWrite32(r27, r4);
    ctx->lr = 0x805EBEF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805F9700u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = (r30 + 1588);
    ctx->lr = 0x805EBEF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x805F9E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = r30;
    r26 = MemoryInline::FlatRead32((r1 + 56));
    r27 = MemoryInline::FlatRead32((r1 + 60));
    r28 = MemoryInline::FlatRead32((r1 + 64));
    r29 = MemoryInline::FlatRead32((r1 + 68));
    r30 = MemoryInline::FlatRead32((r1 + 72));
    r31 = MemoryInline::FlatRead32((r1 + 76));
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE00E gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFE fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805EBDAC func_805EBDAC preserves=true fpr_mask=0x00000000
