#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8083AD54(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_adde_left_0 = 0;
    uint32_t r0_adde_left_1 = 0;
    uint32_t r0_adde_left_2 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8083AD54;

loc_8083AD54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r20);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r24);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r26);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r1 + 64), r28);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 72u, (r1 + 72), r30);
        MemoryInline::WriteResolved32(guest_range_0, 76u, (r1 + 76), r31);
    }
    // inline leaf 0x808605FC (6 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 292));
    r3 = (r0 & 255);
    // end of inlined leaf 0x808605FC
    r22 = r3;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80860500u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r3 = (r3 & 255);
    r0 = (r22 & 255);
    r20 = (r3 - r0);
    r3 = (r1 + 8);
    ctx->lr = 0x8083AD84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->xer = xer;
    InvokeDirectCpu<0x80555464u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = 0x809C0000u;
    r0 = (r22 & 255);
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r0 = (r20 + r0);
    r25 = 0x809C0000u;
    r31 = 20;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r21 = (r0 & 255);
    r30 = 19;
    r29 = 18;
    r23 = MemoryInline::FlatRead32((r3 + 116));
    r28 = 2;
    r27 = 1;
    r26 = 0;
    goto loc_8083AF10;
}

loc_8083ADC0:
{
    r3 = (r22 & 255);
    r0 = MemoryInline::FlatRead32((r25 + -10456));
    r24 = (r3 * 240);
    r3 = (r0 + r24);
    r3 = MemoryInline::FlatRead32((r3 + 3108));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8081CD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r20 = r3;
    r3 = (r1 + 8);
    r4 = 2;
    // inline leaf 0x805555CC (23 guest instruction(s))
    r5 = -1293680640;
    r11 = MemoryInline::FlatRead32((r3 + 12));
    r8 = (r5 + -11215);
    r10 = MemoryInline::FlatRead32((r3 + 8));
    r5 = 5308416;
    r6 = 1761804288;
    r0 = (r5 + -28995);
    r7 = (static_cast<uint32_t>((static_cast<uint64_t>(r11) * static_cast<uint64_t>(r8)) >> 32));
    r9 = (r6 + 31154);
    r6 = 0;
    r5 = (r10 * r8);
    r8 = (r11 * r8);
    r7 = (r7 + r5);
    r0_addc_right_2 = r0;
    r0 = (r8 + r0_addc_right_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r8)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_2)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 12), r0);
    r5 = (r11 * r9);
    r0 = (r7 + r5);
    r0_adde_left_2 = r0;
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r0_adde_left_2 + r6);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_adde_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r6)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r3 + 8), r0);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r4)) >> 32));
    r3 = (r6 * r4);
    r3 = (r0 + r3);
    // end of inlined leaf 0x805555CC
}

loc_8083ADEC:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_8083ADFC;
    }
}

loc_8083ADF0:
{
}

loc_8083ADF4:
{
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(1))) {
        goto loc_8083AE48;
    }
}

loc_8083ADF8:
{
    goto loc_8083AE94;
}

loc_8083ADFC:
{
}

loc_8083AE00:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8083AE18;
    }
}

loc_8083AE04:
{
}

loc_8083AE08:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_8083AE28;
    }
}

loc_8083AE0C:
{
}

loc_8083AE10:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(2))) {
        goto loc_8083AE38;
    }
}

loc_8083AE14:
{
    goto loc_8083AF0C;
}

loc_8083AE18:
{
    r0 = MemoryInline::FlatRead32((r25 + -10456));
    r3 = (r0 + r24);
    MemoryInline::FlatWrite32((r3 + 3104), r26);
    goto loc_8083AF0C;
}

loc_8083AE28:
{
    r0 = MemoryInline::FlatRead32((r25 + -10456));
    r3 = (r0 + r24);
    MemoryInline::FlatWrite32((r3 + 3104), r27);
    goto loc_8083AF0C;
}

loc_8083AE38:
{
    r0 = MemoryInline::FlatRead32((r25 + -10456));
    r3 = (r0 + r24);
    MemoryInline::FlatWrite32((r3 + 3104), r28);
    goto loc_8083AF0C;
}

loc_8083AE48:
{
}

loc_8083AE4C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8083AE64;
    }
}

loc_8083AE50:
{
}

loc_8083AE54:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_8083AE74;
    }
}

loc_8083AE58:
{
}

loc_8083AE5C:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(2))) {
        goto loc_8083AE84;
    }
}

loc_8083AE60:
{
    goto loc_8083AF0C;
}

loc_8083AE64:
{
    r0 = MemoryInline::FlatRead32((r25 + -10456));
    r3 = (r0 + r24);
    MemoryInline::FlatWrite32((r3 + 3104), r29);
    goto loc_8083AF0C;
}

loc_8083AE74:
{
    r0 = MemoryInline::FlatRead32((r25 + -10456));
    r3 = (r0 + r24);
    MemoryInline::FlatWrite32((r3 + 3104), r30);
    goto loc_8083AF0C;
}

loc_8083AE84:
{
    r0 = MemoryInline::FlatRead32((r25 + -10456));
    r3 = (r0 + r24);
    MemoryInline::FlatWrite32((r3 + 3104), r31);
    goto loc_8083AF0C;
}

loc_8083AE94:
{
}

loc_8083AE98:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(0))) {
        goto loc_8083AEB0;
    }
}

loc_8083AE9C:
{
}

loc_8083AEA0:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(1))) {
        goto loc_8083AED0;
    }
}

loc_8083AEA4:
{
}

loc_8083AEA8:
{
    if ((static_cast<int32_t>(r20) == static_cast<int32_t>(2))) {
        goto loc_8083AEF0;
    }
}

loc_8083AEAC:
{
    goto loc_8083AF0C;
}

loc_8083AEB0:
{
    r4 = MemoryInline::FlatRead32((r25 + -10456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8083AEB8:
{
    r0 = 18;
    r3 = (r4 + r24);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083AEC8;
    }
}

loc_8083AEC4:
{
    r0 = 0;
}

loc_8083AEC8:
{
    MemoryInline::FlatWrite32((r3 + 3104), r0);
    goto loc_8083AF0C;
}

loc_8083AED0:
{
    r4 = MemoryInline::FlatRead32((r25 + -10456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8083AED8:
{
    r0 = 19;
    r3 = (r4 + r24);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083AEE8;
    }
}

loc_8083AEE4:
{
    r0 = 1;
}

loc_8083AEE8:
{
    MemoryInline::FlatWrite32((r3 + 3104), r0);
    goto loc_8083AF0C;
}

loc_8083AEF0:
{
    r4 = MemoryInline::FlatRead32((r25 + -10456));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8083AEF8:
{
    r0 = 20;
    r3 = (r4 + r24);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8083AF08;
    }
}

loc_8083AF04:
{
    r0 = 2;
}

loc_8083AF08:
{
    MemoryInline::FlatWrite32((r3 + 3104), r0);
}

loc_8083AF0C:
{
    r22 = (r22 + 1);
}

loc_8083AF10:
{
    r0 = (r22 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r21));
}

loc_8083AF18:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8083ADC0;
    }
}

loc_8083AF1C:
{
    r3 = (r1 + 8);
    r4 = -1;
    ctx->lr = 0x8083AF28u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x80555538u>(ctx);
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
    cr = ctx->cr;
    xer = ctx->xer;
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 32), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 32));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 48));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 56));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 64));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 72));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 76));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 84));
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8083AD54 func_8083AD54 preserves=true fpr_mask=0x00000000
