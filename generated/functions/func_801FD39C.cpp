#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FD39C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_801FD39C;

loc_801FD39C:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r0 = 0;
    r25 = r4;
    MemoryInline::FlatWrite32(r6, r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FD3C0:
{
    r24 = r3;
    r26 = r6;
    MemoryInline::FlatWrite32(r7, r0);
    r27 = r7;
    r30 = r25;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FD3E0;
    }
}

loc_801FD3D8:
{
    r3 = 10;
    goto loc_801FD59C;
}

loc_801FD3E0:
{
    r9 = MemoryInline::FlatRead32((r3 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(0));
}

loc_801FD3E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FD3F4;
    }
}

loc_801FD3EC:
{
    r3 = 10;
    goto loc_801FD59C;
}

loc_801FD3F4:
{
    r31 = MemoryInline::FlatRead32((r3 + 48));
    r0 = MemoryInline::FlatRead8((r31 + 6242));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(65));
}

loc_801FD404:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FD410;
    }
}

loc_801FD408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(90));
}

loc_801FD40C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801FD418;
    }
}

loc_801FD410:
{
    r3 = 35;
    goto loc_801FD59C;
}

loc_801FD418:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FD41C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FD428;
    }
}

loc_801FD420:
{
    r3 = 10;
    goto loc_801FD59C;
}

loc_801FD428:
{
    r8 = MemoryInline::FlatRead32((r3 + 4));
    r8 = MemoryInline::FlatRead32(r8);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
}

loc_801FD434:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FD440;
    }
}

loc_801FD438:
{
    r3 = 0;
    goto loc_801FD59C;
}

loc_801FD440:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_801FD444:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FD450;
    }
}

loc_801FD448:
{
    r3 = 0;
    goto loc_801FD59C;
}

loc_801FD450:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_801FD454:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FD460;
    }
}

loc_801FD458:
{
    r3 = 0;
    goto loc_801FD59C;
}

loc_801FD460:
{
    r0 = (r5 + 65536);
}

loc_801FD468:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_801FD4A0;
    }
}

loc_801FD46C:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FD474:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FD4A0;
    }
}

loc_801FD478:
{
    MemoryInline::FlatWrite32(r6, r0);
    r4 = 0x80250000u;
    r4 = (r4 + 12640);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r0 = (r0 * 20);
    r4 = (r4 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32(r7, r0);
    goto loc_801FD59C;
}

loc_801FD4A0:
{
    r3 = MemoryInline::FlatRead16(r31);
    r0 = MemoryInline::FlatRead8((r31 + 33));
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r28 = PPC_Divwu(static_cast<uint32_t>(r5), static_cast<uint32_t>(r0));
    r0 = (r28 * r0);
    r0 = (r5 - r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801FD4C0;
    }
}

loc_801FD4BC:
{
    r28 = (r28 + 1);
}

loc_801FD4C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(r4));
}

loc_801FD4C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FD4D0;
    }
}

loc_801FD4C8:
{
    r29 = 1;
    goto loc_801FD4D8;
}

loc_801FD4D0:
{
    r3 = MemoryInline::FlatRead32(r9);
    r29 = (r3 + 1);
}

loc_801FD4D8:
{
    r3 = -1;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = r31;
    r5 = r25;
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x801FD4F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801FA844u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FD4FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FD504;
    }
}

loc_801FD500:
{
    goto loc_801FD59C;
}

loc_801FD504:
{
    r23 = 0x80250000u;
    r22 = 0;
    r23 = (r23 + 12640);
    goto loc_801FD578;
}

loc_801FD514:
{
    r3 = r24;
    r4 = r25;
    r5 = r29;
    r6 = (r1 + 16);
    r7 = (r1 + 12);
    r8 = (r1 + 8);
    ctx->lr = 0x801FD530u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[11] = r11;
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
    InvokeDirectCpu<0x801FAEE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r11 = ctx->gpr[11];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801FD534:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FD53C;
    }
}

loc_801FD538:
{
    goto loc_801FD59C;
}

loc_801FD53C:
{
    r0 = MemoryInline::FlatRead32((r31 + 28));
    r30 = r25;
    r4 = MemoryInline::FlatRead32((r1 + 16));
    r0 = (r0 * 20);
    r3 = (r23 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_801FD558:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FD56C;
    }
}

loc_801FD55C:
{
    r0 = (r29 + -1);
    MemoryInline::FlatWrite32((r24 + 8), r25);
    MemoryInline::FlatWrite32((r24 + 12), r0);
    goto loc_801FD580;
}

loc_801FD56C:
{
    r25 = r4;
    r29 = (r29 + 1);
    r22 = (r22 + 1);
}

loc_801FD578:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r28));
}

loc_801FD57C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801FD514;
    }
}

loc_801FD580:
{
    r4 = MemoryInline::FlatRead32((r24 + 44));
    r0 = (r29 + -1);
    r3 = 0;
    MemoryInline::FlatWrite32(r4, r0);
    MemoryInline::FlatWrite32(r26, r30);
    r0 = MemoryInline::FlatRead32((r1 + 16));
    MemoryInline::FlatWrite32(r27, r0);
}

loc_801FD59C:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
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
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FD39C func_801FD39C preserves=true fpr_mask=0x00000000
