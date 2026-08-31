#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80159064(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
    uint32_t r8_rot_3 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t xer = ctx->xer;

    goto loc_80159064;

loc_80159064:
{
    r5 = MemoryInline::FlatRead32((r1 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(4));
}

loc_8015906C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801590A8;
    }
}

loc_80159070:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80159080;
    }
}

loc_80159074:
{
}

loc_80159078:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_8015908C;
    }
}

loc_8015907C:
{
    goto loc_801591C8;
}

loc_80159080:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(16));
}

loc_80159084:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80159100;
    }
}

loc_80159088:
{
    goto loc_801591C8;
}

loc_8015908C:
{
    r4 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 2);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(8));
    r3 = (r3_rot_0 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8015932C;
}

loc_801590A8:
{
    r7 = MemoryInline::FlatRead8(r3);
    r22 = (r3 + 4);
    r6 = MemoryInline::FlatRead8((r3 + 1));
    r4 = 65536;
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(24));
    r8 = (r8_rot_1 & -16777216);
    r5 = MemoryInline::FlatRead8((r3 + 2));
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & -65536);
    r6 = MemoryInline::FlatRead8((r3 + 3));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r3 = (r3_rot_4 & -256);
    r5 = (r8 + r7);
    r3 = (r6 + r3);
    r3 = (r5 + r3);
}

loc_801590DC:
{
    MemoryInline::FlatWrite32((r29 + 8), r3);
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r4))) {
        goto loc_8015932C;
    }
}

loc_801590E4:
{
    r3 = 2;
    r0 = (r0 | 2);
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8015932C;
}

loc_80159100:
{
    r3 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8015B84Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = (r3 & 255);
}

loc_8015910C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80159198;
    }
}

loc_80159110:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r22, 0, 4u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_0, 0u, r22);
}

loc_80159118:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80159154;
    }
}

loc_8015911C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r22 + 1));
}

loc_80159124:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80159154;
    }
}

loc_80159128:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 & -4096);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r3 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r22 + 2));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r22 + 3));
    r22 = (r22 + 16);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r3 = (r3_rot_1 & -256);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    goto loc_8015932C;
}

loc_80159154:
{
    r0 = MemoryInline::FlatRead16((r29 + 6));
    r0 = (r0 & -4096);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r4 = MemoryInline::ReadResolved8(guest_range_0, 0u, r22);
    r3 = MemoryInline::ReadResolved8(guest_range_0, 1u, (r22 + 1));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r22 + 2));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(24));
    r5 = (r5_rot_1 & -16777216);
    r4 = MemoryInline::ReadResolved8(guest_range_0, 3u, (r22 + 3));
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_2 & -65536);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & -256);
    r22 = (r22 + 16);
    r3 = (r5 + r3);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    MemoryInline::FlatWrite32((r29 + 8), r0);
    goto loc_8015932C;
}

loc_80159198:
{
    r3 = (r29 + 8);
    r4 = 0;
    goto loc_801591B8;
}

loc_801591A4:
{
    r0 = MemoryInline::FlatRead8(r22);
    r4 = (r4 + 1);
    r22 = (r22 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_801591B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_801591C0:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_801591A4;
    }
}

loc_801591C4:
{
    goto loc_8015932C;
}

loc_801591C8:
{
    r3 = 0x80340000u;
    r3 = (r3 + -24768);
    r0 = MemoryInline::FlatRead8((r3 + 17968));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801591D8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801591EC;
    }
}

loc_801591DC:
{
    r3 = 655360;
    r4 = (r31 + 244);
    r3 = (r3 + 1);
    ctx->lr = 0x801591ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x80131758u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
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
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801591EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    r3 = (r22 + r0);
    goto loc_801593AC;
}

loc_8015932C:
{
    r3 = MemoryInline::FlatRead32((r23 + 104));
}

loc_80159334:
{
    r0 = MemoryInline::FlatRead32((r23 + 4));
    r3 = (r3 + r30);
    r0 = (r0 - r30);
    MemoryInline::FlatWrite32((r23 + 104), r3);
    MemoryInline::FlatWrite32((r23 + 4), r0);
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8015937C;
    }
}

loc_8015934C:
{
    r3 = MemoryInline::FlatRead32(r24);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80159354:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159368;
    }
}

loc_80159358:
{
    MemoryInline::FlatWrite32(r24, r29);
    goto loc_801593A8;
}

loc_80159364:
{
    r3 = r0;
}

loc_80159368:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80159370:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159364;
    }
}

loc_80159374:
{
    MemoryInline::FlatWrite32(r3, r29);
    goto loc_801593A8;
}

loc_8015937C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80159384:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159398;
    }
}

loc_80159388:
{
    MemoryInline::FlatWrite32((r26 + 8), r29);
    goto loc_801593A8;
}

loc_80159394:
{
    r3 = r0;
}

loc_80159398:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801593A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80159394;
    }
}

loc_801593A4:
{
    MemoryInline::FlatWrite32(r3, r29);
}

loc_801593A8:
{
    r3 = r22;
}

loc_801593AC:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
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
    ctx->gpr[11] = r11;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80159064 func_80159064 preserves=true fpr_mask=0x00000000
