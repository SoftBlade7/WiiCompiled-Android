#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80034F80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r14 = ctx->gpr[14];
    uint32_t r15 = ctx->gpr[15];
    uint32_t r16 = ctx->gpr[16];
    uint32_t r17 = ctx->gpr[17];
    uint32_t r18 = ctx->gpr[18];
    uint32_t r19 = ctx->gpr[19];
    uint32_t r20 = ctx->gpr[20];
    uint32_t r21 = ctx->gpr[21];
    uint32_t r22 = ctx->gpr[22];
    uint32_t r23 = ctx->gpr[23];
    uint32_t r24 = ctx->gpr[24];
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
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80034F80;

loc_80034F80:
{
    MemoryInline::FlatWriteRam32((r1 + -400), r1);
    r1 = (r1 + -400);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 404), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 384), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 392);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 384);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r16 = MemoryInline::FlatRead32((r3 + 36));
    r31 = r3;
    r0 = MemoryInline::FlatRead16((r16 + 156));
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80034FAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80035240;
    }
}

loc_80034FB0:
{
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80034FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80034FC4;
    }
}

loc_80034FC0:
{
    goto loc_80035240;
}

loc_80034FC4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 160u, true, false);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 96u, (r4 + 96));
    MemoryInline::FlatWriteRam32((r1 + 304), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 100u, (r4 + 100));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 88u, (r4 + 88));
    MemoryInline::FlatWriteRam32((r1 + 232), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 104u, (r4 + 104));
    MemoryInline::FlatWriteRam32((r1 + 236), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 108u, (r4 + 108));
    MemoryInline::FlatWriteRam32((r1 + 160), r0);
    r0 = MemoryInline::FlatRead32((r1 + 304));
    MemoryInline::FlatWriteRam32((r1 + 240), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 112u, (r4 + 112));
    MemoryInline::FlatWriteRam8((r1 + 168), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 232));
    MemoryInline::FlatWriteRam32((r1 + 244), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 132u, (r4 + 132));
    MemoryInline::FlatWriteRam32((r1 + 172), r0);
    r0 = MemoryInline::FlatRead32((r1 + 236));
    MemoryInline::FlatWriteRam32((r1 + 248), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 133u, (r4 + 133));
    MemoryInline::FlatWriteRam32((r1 + 176), r0);
    r0 = MemoryInline::FlatRead32((r1 + 240));
    MemoryInline::FlatWriteRam32((r1 + 252), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 134u, (r4 + 134));
    MemoryInline::FlatWriteRam8((r1 + 180), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 244));
    MemoryInline::FlatWriteRam32((r1 + 256), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 135u, (r4 + 135));
    MemoryInline::FlatWriteRam32((r1 + 184), r0);
    r0 = MemoryInline::FlatRead32((r1 + 248));
    MemoryInline::FlatWriteRam32((r1 + 260), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 140u, (r4 + 140));
    MemoryInline::FlatWriteRam8((r1 + 204), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 252));
    MemoryInline::FlatWriteRam32((r1 + 264), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 144u, (r4 + 144));
    MemoryInline::FlatWriteRam8((r1 + 205), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 256));
    MemoryInline::FlatWriteRam32((r1 + 268), r15);
    r15 = MemoryInline::ReadResolved32(guest_range_1, 148u, (r4 + 148));
    MemoryInline::FlatWriteRam8((r1 + 206), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 260));
    MemoryInline::FlatWriteRam32((r1 + 272), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 152u, (r4 + 152));
    MemoryInline::FlatWriteRam8((r1 + 207), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 264));
    MemoryInline::FlatWriteRam32((r1 + 276), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 153u, (r4 + 153));
    MemoryInline::FlatWriteRam32((r1 + 212), r0);
    r0 = MemoryInline::FlatRead32((r1 + 268));
    MemoryInline::FlatWriteRam32((r1 + 280), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 154u, (r4 + 154));
    MemoryInline::FlatWriteRam32((r1 + 216), r0);
    r0 = MemoryInline::FlatRead32((r1 + 272));
    MemoryInline::FlatWriteRam32((r1 + 284), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 155u, (r4 + 155));
    MemoryInline::FlatWriteRam32((r1 + 220), r0);
    r0 = MemoryInline::FlatRead32((r1 + 276));
    MemoryInline::FlatWriteRam32((r1 + 288), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 156u, (r4 + 156));
    MemoryInline::FlatWriteRam8((r1 + 224), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 280));
    MemoryInline::FlatWriteRam32((r1 + 292), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 157u, (r4 + 157));
    MemoryInline::FlatWriteRam8((r1 + 225), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 284));
    MemoryInline::FlatWriteRam32((r1 + 296), r15);
    r15 = MemoryInline::ReadResolved8(guest_range_1, 158u, (r4 + 158));
    MemoryInline::FlatWriteRam8((r1 + 226), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 288));
    MemoryInline::FlatWriteRam8((r1 + 227), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 292));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, r4);
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r4 + 4));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r4 + 8));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r4 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r4 + 16));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r4 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r4 + 24));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r4 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r4 + 32));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r4 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r4 + 40));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r4 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r4 + 48));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r4 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r4 + 56));
            r11 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r4 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r4 + 64));
            r9 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r4 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 72u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_1, 72u, (r4 + 72));
            r7 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r4 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 80u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_1, 80u, (r4 + 80));
            r5 = MemoryInline::ReadResolved32(guest_range_1, 84u, (r4 + 84));
        }
    }
    r14 = MemoryInline::ReadResolved32(guest_range_1, 92u, (r4 + 92));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 116u);
        if (resolved_pair.valid) {
            f5.d = PpcBitCastToFloatInline(resolved_pair.first);
            f4.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f5.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 116u, (r4 + 116));
            f4.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 120u, (r4 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 124u);
        if (resolved_pair.valid) {
            f3.d = PpcBitCastToFloatInline(resolved_pair.first);
            f2.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 124u, (r4 + 124));
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 128u, (r4 + 128));
        }
    }
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_1, 136u, (r4 + 136));
    r4 = MemoryInline::ReadResolved8(guest_range_1, 159u, (r4 + 159));
    MemoryInline::FlatWriteRam8((r1 + 228), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r1 + 296));
    MemoryInline::FlatWriteRam8((r1 + 229), static_cast<uint8_t>(r0));
    r0 = r15;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -30892));
    MemoryInline::FlatWriteRam32((r1 + 72), r17);
    MemoryInline::FlatWriteRam32((r1 + 76), r18);
    MemoryInline::FlatWriteRam32((r1 + 80), r19);
    MemoryInline::FlatWriteRam32((r1 + 84), r20);
    MemoryInline::FlatWriteRam32((r1 + 88), r21);
    MemoryInline::FlatWriteRam32((r1 + 92), r22);
    MemoryInline::FlatWriteRam32((r1 + 96), r23);
    MemoryInline::FlatWriteRam32((r1 + 100), r24);
    MemoryInline::FlatWriteRam32((r1 + 104), r25);
    MemoryInline::FlatWriteRam32((r1 + 108), r26);
    MemoryInline::FlatWriteRam32((r1 + 112), r27);
    MemoryInline::FlatWriteRam32((r1 + 116), r28);
    MemoryInline::FlatWriteRam32((r1 + 120), r29);
    MemoryInline::FlatWriteRam32((r1 + 124), r30);
    MemoryInline::FlatWriteRam32((r1 + 128), r12);
    MemoryInline::FlatWriteRam32((r1 + 132), r11);
    MemoryInline::FlatWriteRam32((r1 + 136), r10);
    MemoryInline::FlatWriteRam32((r1 + 140), r9);
    MemoryInline::FlatWriteRam32((r1 + 144), r8);
    MemoryInline::FlatWriteRam32((r1 + 148), r7);
    MemoryInline::FlatWriteRam32((r1 + 152), r6);
    MemoryInline::FlatWriteRam32((r1 + 156), r5);
    MemoryInline::FlatWriteRam32((r1 + 164), r14);
    MemoryInline::FlatWriteRamFloat32((r1 + 188), f5.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 192), f4.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 196), f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 200), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 208), f1.d);
    MemoryInline::FlatWriteRam8((r1 + 230), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 231), static_cast<uint8_t>(r4));
    f31.d = MemoryInline::FlatReadFloat32((r16 + 336));
    MemoryInline::FlatWriteRam32((r1 + 300), r15);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_800351F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80035224;
    }
}

loc_800351F4:
{
    r4 = (r1 + 24);
    ctx->lr = 0x800351FCu;
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
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80029A60u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 36));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 208), f31.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 212), f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 216), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 220), f2.d);
}

loc_80035224:
{
    r3 = MemoryInline::FlatRead32((r31 + 44));
    r5 = r31;
    r4 = (r1 + 72);
    r12 = MemoryInline::FlatRead32(r3);
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x80035240u;
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
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
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
    r17 = ctx->gpr[17];
    r18 = ctx->gpr[18];
    r19 = ctx->gpr[19];
    r20 = ctx->gpr[20];
    r21 = ctx->gpr[21];
    r22 = ctx->gpr[22];
    r23 = ctx->gpr[23];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80035240:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 384);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 384));
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 404));
    ctx->lr = r0;
    r1 = (r1 + 400);
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
    ctx->gpr[14] = r14;
    ctx->gpr[15] = r15;
    ctx->gpr[16] = r16;
    ctx->gpr[17] = r17;
    ctx->gpr[18] = r18;
    ctx->gpr[19] = r19;
    ctx->gpr[20] = r20;
    ctx->gpr[21] = r21;
    ctx->gpr[22] = r22;
    ctx->gpr[23] = r23;
    ctx->gpr[24] = r24;
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
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80034F80 func_80034F80 preserves=false fpr_mask=0x80000000
