#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001C670(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mtcrf_preserve_0 = 0;
    uint32_t r3_mtcrf_preserve_1 = 0;
    uint32_t r3_mtcrf_src_0 = 0;
    uint32_t r3_mtcrf_src_1 = 0;
    uint32_t r4_mtcrf_preserve_0 = 0;
    uint32_t r4_mtcrf_src_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;

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
    uint32_t r13 = ctx->gpr[13];
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
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8001C670;

loc_8001C670:
{
    r0 = MemoryInline::FlatRead32(r3);
    r1 = MemoryInline::FlatRead32((r3 + 4));
    r2 = MemoryInline::FlatRead32((r3 + 8));
    r5 = MemoryInline::FlatRead16((r3 + 418));
    r6 = (r5 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8001C684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001C698;
    }
}

loc_8001C688:
{
    r5 = (r5 & -3);
    MemoryInline::FlatWrite16((r3 + 418), static_cast<uint16_t>(r5));
    guest_range_3 = MemoryInline::ResolveRangeHost((r3 + 20), 0, 108u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r3 + 20));
            r6 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r3 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r3 + 28));
            r8 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r3 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r3 + 36));
            r10 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r3 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r3 + 44));
            r12 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r3 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r3 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r3 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r3 + 60));
            r16 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r3 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r3 + 68));
            r18 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r3 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r3 + 76));
            r20 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r3 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r3 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r3 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 72u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_3, 72u, (r3 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_3, 76u, (r3 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 80u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 80u, (r3 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 84u, (r3 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 88u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 88u, (r3 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 92u, (r3 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 96u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 96u, (r3 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 100u, (r3 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 104u, (r3 + 124));
    goto loc_8001C69C;
}

loc_8001C698:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r3 + 52), 0, 76u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 0u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_4, 0u, (r3 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_4, 4u, (r3 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 8u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_4, 8u, (r3 + 60));
            r16 = MemoryInline::ReadResolved32(guest_range_4, 12u, (r3 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 16u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_4, 16u, (r3 + 68));
            r18 = MemoryInline::ReadResolved32(guest_range_4, 20u, (r3 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 24u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_4, 24u, (r3 + 76));
            r20 = MemoryInline::ReadResolved32(guest_range_4, 28u, (r3 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 32u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_4, 32u, (r3 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_4, 36u, (r3 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 40u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_4, 40u, (r3 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_4, 44u, (r3 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 48u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_4, 48u, (r3 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_4, 52u, (r3 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 56u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_4, 56u, (r3 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_4, 60u, (r3 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_4, 64u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_4, 64u, (r3 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_4, 68u, (r3 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_4, 72u, (r3 + 124));
}

loc_8001C69C:
{
    r31 = r3;
    r3 = r4;
    guest_range_0 = MemoryInline::ResolveRangeHost((r31 + 12), 0, 404u, true, false);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 116u, (r31 + 128));
    r4_mtcrf_src_0 = (r4 & -1);
    r4_mtcrf_preserve_0 = (cr & 0);
    cr = (r4_mtcrf_preserve_0 | r4_mtcrf_src_0);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 120u, (r31 + 132));
    ctx->lr = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 124u, (r31 + 136));
    ctr = r4;
    r4 = MemoryInline::ReadResolved32(guest_range_0, 128u, (r31 + 140));
    xer = r4;
    r4 = ctx->msr;
    r4 = (r4 & -32769);
    r4 = (r4 & -3);
    ctx->msr = r4;
    // mtspr 273 (privileged/OS register) @ 0x8001C6D4
    PPC_WriteSpr(273, r2);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r31 + 12));
    // mtspr 274 (privileged/OS register) @ 0x8001C6DC
    PPC_WriteSpr(274, r4);
    r4 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r31 + 16));
    // mtspr 275 (privileged/OS register) @ 0x8001C6E4
    PPC_WriteSpr(275, r4);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 396u);
        if (resolved_pair.valid) {
            r2 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r2 = MemoryInline::ReadResolved32(guest_range_0, 396u, (r31 + 408));
            r4 = MemoryInline::ReadResolved32(guest_range_0, 400u, (r31 + 412));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_0, 112u, (r31 + 124));
}

loc_8001FDEC:
{
    ctx->srr0 = r2;
    ctx->srr1 = r4;
    // mfspr 275 unsupported @ 0x8001FDF4
    r4 = PPC_ReadSpr(275);
    r2 = cr;
    // mtspr 275 (privileged/OS register) @ 0x8001FDFC
    PPC_WriteSpr(275, r2);
    r2 = 0x802A0000u;
    r2 = (r2 | 25744);
    r2 = MemoryInline::FlatRead32((r2 + 140));
    r2 = (r2 | 32770);
    r2 = (r2 ^ 32770);
    // sync @ 0x8001FE14 (no-op)
    ctx->msr = r2;
    // sync @ 0x8001FE1C (no-op)
    r2 = 0x80380000u;
    r2 = (r2 | 24736);
    MemoryInline::FlatWriteRam16(r2, static_cast<uint16_t>(r3));
}

loc_8001FE30:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1280))) {
        goto loc_8001FEB4;
    }
}

loc_8001FE34:
{
    r2 = 0x802A0000u;
    r2 = (r2 | 25912);
    r3 = ctx->lr;
    MemoryInline::FlatWriteRam32((r2 + 1068), r3);
    // inline leaf 0x8001C868 (1 guest instruction(s))
    // end of inlined leaf 0x8001C868
    r2 = 0x802A0000u;
    r2 = (r2 | 25912);
    r3 = MemoryInline::FlatRead32((r2 + 1068));
    ctx->lr = r3;
    r2 = 0x802A0000u;
    r2 = (r2 | 25744);
    r2 = MemoryInline::FlatRead32((r2 + 160));
    r2 = MemoryInline::FlatRead8(r2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r2), static_cast<int32_t>(0));
}

loc_8001FE6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FE98;
    }
}

loc_8001FE70:
{
    r2 = 0x80270000u;
    r2 = (r2 | 7080);
    r2 = MemoryInline::FlatRead8((r2 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r2), static_cast<int32_t>(1));
}

loc_8001FE80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FE98;
    }
}

loc_8001FE84:
{
    r2 = 0x802A0000u;
    r2 = (r2 | 25744);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r2 + 156), static_cast<uint8_t>(r3));
    goto loc_8001FEB4;
}

loc_8001FE98:
{
    r2 = 0x802A0000u;
    r2 = (r2 | 25576);
    r3 = MemoryInline::FlatRead32((r2 + 136));
    r3_mtcrf_src_0 = (r3 & -1);
    r3_mtcrf_preserve_0 = (cr & 0);
    cr = (r3_mtcrf_preserve_0 | r3_mtcrf_src_0);
    r3 = MemoryInline::FlatRead32((r2 + 12));
    r2 = MemoryInline::FlatRead32((r2 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
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
    ctx->gpr[13] = r13;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8001FEB4:
{
    r2 = 0x80380000u;
    r2 = (r2 | 24736);
    r3 = MemoryInline::FlatRead16(r2);
    r2 = 0x80270000u;
    r2 = (r2 | 7080);
    r2 = MemoryInline::FlatRead8((r2 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r2), static_cast<int32_t>(0));
}

loc_8001FED0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001FF80;
    }
}

loc_8001FED4:
{
    r2 = 0x802A0000u;
    r2 = (r2 | 25912);
    guest_range_1 = MemoryInline::ResolveRangeHost(r2, 0, 764u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r1)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, r2, r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r2 + 4), r1);
    }
    // mfspr 273 unsupported @ 0x8001FEE4
    r0 = PPC_ReadSpr(273);
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r2 + 8), r0);
    if (!MemoryInline::WriteResolvedPair16(guest_range_1, 760u, ((static_cast<uint32_t>(static_cast<uint16_t>(r3)) << 16) | static_cast<uint16_t>(r3)))) {
        MemoryInline::WriteResolved16(guest_range_1, 760u, (r2 + 760), r3);
        MemoryInline::WriteResolved16(guest_range_1, 762u, (r2 + 762), r3);
    }
    // mfspr 274 unsupported @ 0x8001FEF4
    r0 = PPC_ReadSpr(274);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r4)))) {
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r2 + 12), r0);
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r2 + 16), r4);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r5)) << 32) | static_cast<uint32_t>(r6)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r2 + 20), r5);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r2 + 24), r6);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r7)) << 32) | static_cast<uint32_t>(r8)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r2 + 28), r7);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r2 + 32), r8);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r9)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r2 + 36), r9);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r2 + 40), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r11)) << 32) | static_cast<uint32_t>(r12)))) {
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r2 + 44), r11);
        MemoryInline::WriteResolved32(guest_range_1, 48u, (r2 + 48), r12);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r13)) << 32) | static_cast<uint32_t>(r14)))) {
        MemoryInline::WriteResolved32(guest_range_1, 52u, (r2 + 52), r13);
        MemoryInline::WriteResolved32(guest_range_1, 56u, (r2 + 56), r14);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r15)) << 32) | static_cast<uint32_t>(r16)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r2 + 60), r15);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r2 + 64), r16);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r2 + 68), r17);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r2 + 72), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 76u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r2 + 76), r19);
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r2 + 80), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r2 + 84), r21);
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r2 + 88), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r2 + 92), r23);
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r2 + 96), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r2 + 100), r25);
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r2 + 104), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r2 + 108), r27);
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r2 + 112), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r2 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r2 + 120), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 124u, (r2 + 124), r31);
    r27 = ctx->srr0;
    r28 = ctx->lr;
    // mfspr 275 unsupported @ 0x8001FF08
    r29 = PPC_ReadSpr(275);
    r30 = ctr;
    r31 = xer;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r2 + 128), r27);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r2 + 132), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r2 + 136), r29);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r2 + 140), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 144u, (r2 + 144), r31);
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8001CDD0u>(ctx);
    r2 = ctx->gpr[2];
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
    r2 = 0x80270000u;
    r2 = (r2 | 7080);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r2 + 12), static_cast<uint8_t>(r3));
    r2 = 0x802A0000u;
    r2 = (r2 | 25744);
    guest_range_2 = MemoryInline::ResolveRangeHost(r2, 0, 152u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 140u, (r2 + 140));
    // sync @ 0x8001FF38 (no-op)
    ctx->msr = r0;
    // sync @ 0x8001FF40 (no-op)
    r0 = MemoryInline::ReadResolved32(guest_range_2, 128u, (r2 + 128));
    ctx->lr = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_2, 132u, (r2 + 132));
    ctr = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_2, 136u, (r2 + 136));
    xer = r0;
    r0 = MemoryInline::ReadResolved32(guest_range_2, 148u, (r2 + 148));
    // mtspr 18 (unknown SPR) @ 0x8001FF60
    PPC_WriteSpr(18, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_2, 144u, (r2 + 144));
    // mtspr 19 (unknown SPR) @ 0x8001FF68
    PPC_WriteSpr(19, r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 12u);
        if (resolved_pair.valid) {
            r3 = resolved_pair.first;
            r4 = resolved_pair.second;
        } else {
            r3 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r2 + 12));
            r4 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r2 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 20u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r2 + 20));
            r6 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r2 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 28u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r2 + 28));
            r8 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r2 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 36u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r2 + 36));
            r10 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r2 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 44u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r2 + 44));
            r12 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r2 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 52u);
        if (resolved_pair.valid) {
            r13 = resolved_pair.first;
            r14 = resolved_pair.second;
        } else {
            r13 = MemoryInline::ReadResolved32(guest_range_2, 52u, (r2 + 52));
            r14 = MemoryInline::ReadResolved32(guest_range_2, 56u, (r2 + 56));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 60u);
        if (resolved_pair.valid) {
            r15 = resolved_pair.first;
            r16 = resolved_pair.second;
        } else {
            r15 = MemoryInline::ReadResolved32(guest_range_2, 60u, (r2 + 60));
            r16 = MemoryInline::ReadResolved32(guest_range_2, 64u, (r2 + 64));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 68u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_2, 68u, (r2 + 68));
            r18 = MemoryInline::ReadResolved32(guest_range_2, 72u, (r2 + 72));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 76u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_2, 76u, (r2 + 76));
            r20 = MemoryInline::ReadResolved32(guest_range_2, 80u, (r2 + 80));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 84u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 84u, (r2 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r2 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 92u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 92u, (r2 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 96u, (r2 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 100u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 100u, (r2 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 104u, (r2 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 108u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 108u, (r2 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 112u, (r2 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 116u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 116u, (r2 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 120u, (r2 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 124u, (r2 + 124));
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r0 = resolved_pair.first;
            r1 = resolved_pair.second;
        } else {
            r0 = MemoryInline::ReadResolved32(guest_range_2, 0u, r2);
            r1 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r2 + 4));
        }
    }
    r2 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r2 + 8));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x8002001Cu>(ctx);
    r3 = ctx->gpr[3];
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
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
    ctx->gpr[13] = r13;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

loc_8001FF80:
{
    r2 = 0x80270000u;
    r2 = (r2 | 7080);
    MemoryInline::FlatWriteRam16((r2 + 8), static_cast<uint16_t>(r3));
    r3 = ctx->srr0;
    MemoryInline::FlatWriteRam32(r2, r3);
    r3 = MemoryInline::FlatRead16((r2 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(512));
}

loc_8001FF9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(768));
}

loc_8001FFA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1024));
}

loc_8001FFAC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1536));
}

loc_8001FFB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1792));
}

loc_8001FFBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2048));
}

loc_8001FFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFC8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4096));
}

loc_8001FFCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFD0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4352));
}

loc_8001FFD4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4608));
}

loc_8001FFDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(4864));
}

loc_8001FFE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001FFEC;
    }
}

loc_8001FFE8:
{
    goto loc_8001FFF8;
}

loc_8001FFEC:
{
    r3 = ctx->srr0;
    r3 = (r3 + 4);
    ctx->srr0 = r3;
}

loc_8001FFF8:
{
    r2 = 0x80270000u;
    r2 = (r2 | 7080);
    r3 = 1;
    MemoryInline::FlatWriteRam8((r2 + 13), static_cast<uint8_t>(r3));
    // mfspr 275 unsupported @ 0x80020008
    r3 = PPC_ReadSpr(275);
    r3_mtcrf_src_1 = (r3 & -1);
    r3_mtcrf_preserve_1 = (cr & 0);
    cr = (r3_mtcrf_preserve_1 | r3_mtcrf_src_1);
    // mfspr 273 unsupported @ 0x80020010
    r2 = PPC_ReadSpr(273);
    // mfspr 274 unsupported @ 0x80020014
    r3 = PPC_ReadSpr(274);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[2] = r2;
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
    ctx->gpr[13] = r13;
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8001C670 func_8001C670 preserves=true fpr_mask=0x00000000
