#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805AFE88(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805AFE88;

loc_805AFE88:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r1 + 228), r0);
    r11 = (r1 + 224);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 200u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 200u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 204u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 208u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 208u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 212u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 216u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 216u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 220u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = r4;
    r29 = r5;
    r30 = r3;
    r28 = r6;
    r27 = r7;
    r26 = r8;
    r5 = (r1 + 112);
    r4 = 2;
    ctx->lr = 0x805AFEC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8006DC80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    r3 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 19444));
}

loc_805AFECC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_805AFEF8;
    }
}

loc_805AFED0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 6224));
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r3 = MemoryInline::FlatRead32((r3 + 196));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_805AFEE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805AFEF8;
    }
}

loc_805AFEEC:
{
    r3 = 1;
    r4 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017295Cu>(ctx);
}

loc_805AFEF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_805AFEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805AFFD0;
    }
}

loc_805AFF00:
{
    r4 = MemoryInline::FlatRead8(r27);
    r3 = r30;
    r10 = MemoryInline::FlatRead8((r27 + 1));
    r6 = r29;
    r9 = MemoryInline::FlatRead8((r27 + 2));
    r7 = r28;
    r0 = MemoryInline::FlatRead8((r27 + 3));
    r5 = (r1 + 160);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r4));
    r8 = (r1 + 12);
    r4 = 1;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->lr = 0x805AFF3Cu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B052Cu>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 112), 0, 48u, true, false);
    r27 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 124));
    r6 = 0x80890000u;
    r10 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 140));
    r3 = (r1 + 64);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 156));
    r4 = 30;
    r30 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 112));
    r5 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 4u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 116));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 128));
            r12 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 132));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 136));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 144));
            r8 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 148));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 152));
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 64), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 76), r27);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 9560));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 92), r10);
    MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 108), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 64), r30);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 68), r29);
    }
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 72), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 80), r26);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 84), r12);
    }
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 88), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 96), r9);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 100), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 104), r7);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 44u, (r1 + 108), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 28u, (r1 + 92), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_2, 12u, (r1 + 76), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80173234u>(ctx);
    r3 = r31;
    r4 = (r1 + 160);
    ctx->lr = 0x805AFFCCu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C0F90u>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805B009C;
}

loc_805AFFD0:
{
    r4 = MemoryInline::FlatRead8(r27);
    r3 = r30;
    r10 = MemoryInline::FlatRead8((r27 + 1));
    r6 = r29;
    r9 = MemoryInline::FlatRead8((r27 + 2));
    r7 = r28;
    r0 = MemoryInline::FlatRead8((r27 + 3));
    r5 = (r1 + 160);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r4));
    r8 = (r1 + 8);
    r4 = 0;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r10));
    MemoryInline::FlatWriteRam8((r1 + 10), static_cast<uint8_t>(r9));
    MemoryInline::FlatWriteRam8((r1 + 11), static_cast<uint8_t>(r0));
    ctx->lr = 0x805B000Cu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x805B052Cu>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 112), 0, 48u, true, false);
    r29 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 124));
    r6 = 0x80890000u;
    r10 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 140));
    r3 = (r1 + 16);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 156));
    r4 = 30;
    r26 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 112));
    r5 = 0;
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 4u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 116));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 128));
            r12 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 132));
        }
    }
    r11 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 136));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 144));
            r8 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 148));
        }
    }
    r7 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 152));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 48u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 28), r29);
    f0.d = MemoryInline::FlatReadFloat32((r6 + 9560));
    MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 44), r10);
    MemoryInline::WriteResolved32(guest_range_4, 44u, (r1 + 60), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 16), r26);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 20), r27);
    }
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 24), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 32), r30);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 36), r12);
    }
    MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 40), r11);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 48), r9);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 52), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r1 + 56), r7);
        MemoryInline::WriteResolvedFloat32(guest_range_4, 44u, (r1 + 60), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_4, 28u, (r1 + 44), f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_4, 12u, (r1 + 28), f0.d);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80173234u>(ctx);
    r3 = r31;
    r4 = (r1 + 160);
    ctx->lr = 0x805B009Cu;
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C14A0u>(ctx);
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805B009C:
{
    r11 = (r1 + 224);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF9FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805AFE88 func_805AFE88 preserves=true fpr_mask=0x00000000
