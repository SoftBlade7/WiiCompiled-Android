#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80730198(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80730198;

loc_80730198:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    MemoryInline::FlatWriteRam32((r1 + 60), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 56), r30);
    r30 = r4;
    ctx->lr = 0x807301B8u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80729D9Cu>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r4 = 0x808D0000u;
    r3 = (r3 + -23144);
    r6 = 0;
    r4 = (r4 + -23032);
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 52), 0, 100u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r31 + 52), r3);
    r5 = 0x80240000u;
    r3 = 40;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r31 + 96), r4);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r31 + 100), r6);
    }
    r5 = (r5 + 28832);
    guest_range_2 = MemoryInline::ResolveRangeHost(r5, 0, 12u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, r5);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r31 + 108), r0);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r31 + 104), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r31 + 112), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, r5);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r31 + 120), r0);
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r31 + 116), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 8));
    MemoryInline::WriteResolved32(guest_range_0, 72u, (r31 + 124), r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_2, 0u, r5);
            r0 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r5 + 4));
        }
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 80u, (r31 + 132), r0);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r31 + 128), r4);
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r5 + 8));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r31 + 136), r0);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r31 + 140), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r31 + 144), r6);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r31 + 148), r6);
    }
    ctx->lr = 0x80730238u;
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
    ctx->gpr[30] = r30;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073023C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730248;
    }
}

loc_80730240:
{
    r4 = r30;
    // inline leaf 0x8073F37C (17 guest instruction(s))
    r5 = 0x808A0000u;
    r6 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 10448));
    r5 = 0x808D0000u;
    r0 = -1;
    guest_range_3 = MemoryInline::ResolveRangeHost(r3, 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 4u, (r3 + 4), r4);
    r5 = (r5 + -19820);
    MemoryInline::WriteResolved32(guest_range_3, 0u, r3, r5);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 8u, (r3 + 8), r6);
        MemoryInline::WriteResolved32(guest_range_3, 12u, (r3 + 12), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_3, 16u, (r3 + 16), r0);
        MemoryInline::WriteResolved32(guest_range_3, 20u, (r3 + 20), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolved32(guest_range_3, 24u, (r3 + 24), r0);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 28u, (r3 + 28), f0.d);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_3, 32u, (r3 + 32), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_3, 36u, (r3 + 36), f0.d);
    }
    // end of inlined leaf 0x8073F37C
}

loc_80730248:
{
    MemoryInline::FlatWrite32((r31 + 140), r3);
    r3 = 24;
    ctx->lr = 0x80730254u;
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
    ctx->gpr[30] = r30;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80730258:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730264;
    }
}

loc_8073025C:
{
    r4 = r30;
    // inline leaf 0x8073EDF0 (9 guest instruction(s))
    r5 = 0x808D0000u;
    r0 = 0;
    r5 = (r5 + -19904);
    MemoryInline::FlatWriteRam32((r3 + 4), r0);
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    MemoryInline::FlatWriteRam32(r3, r5);
    MemoryInline::FlatWriteRam32((r3 + 12), r4);
    MemoryInline::FlatWriteRam32((r3 + 16), r0);
    // end of inlined leaf 0x8073EDF0
}

loc_80730264:
{
    MemoryInline::FlatWrite32((r31 + 68), r3);
    r3 = 208;
    ctx->lr = 0x80730270u;
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
    ctx->gpr[30] = r30;
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
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80730274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80730280;
    }
}

loc_80730278:
{
    r4 = r30;
    ctx->lr = 0x80730280u;
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80729350u>(ctx);
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
}

loc_80730280:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r31 + 100), 0, 52u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 48u, (r31 + 148), r3);
    r5 = 0x80240000u;
    r4 = 0x808D0000u;
    r6 = 0x808D0000u;
    r5 = (r5 + 28832);
    r12 = MemoryInline::FlatRead32(r5);
    r3 = r31;
    r4 = (r4 + -23168);
    r9 = MemoryInline::FlatRead32(r4);
    r11 = MemoryInline::FlatRead32((r5 + 4));
    r10 = MemoryInline::FlatRead32((r5 + 8));
    r6 = (r6 + -23156);
    r5 = MemoryInline::FlatRead32(r6);
    r8 = MemoryInline::FlatRead32((r4 + 4));
    r7 = MemoryInline::FlatRead32((r4 + 8));
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + 8), r12);
        MemoryInline::WriteResolved32(guest_range_4, 4u, (r1 + 12), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_4, 8u, (r1 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_4, 12u, (r1 + 20), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 24), r8);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 28), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 32), r5);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 36), r4);
    }
    MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 40), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r31 + 100), r31);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r31 + 104), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r31 + 108), r4);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r31 + 112), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r31 + 116), r9);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r31 + 120), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r31 + 124), r7);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r31 + 128), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r31 + 132), r11);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r31 + 136), r10);
    }
    // inline leaf 0x8074AFB4 (6 guest instruction(s))
    r4 = (r3 + 8);
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r3 = 1;
    // end of inlined leaf 0x8074AFB4
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80730198 func_80730198 preserves=true fpr_mask=0x00000000
