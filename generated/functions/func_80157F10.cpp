#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80157F10(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
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

    goto loc_80157F10;

loc_80157F10:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 44u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r27 = 0x80340000u;
    r25 = r3;
    r27 = (r27 + -24768);
    r26 = r4;
    r31 = (r27 + 4644);
    r3 = 0;
    r28 = 655360;
    r29 = 0x80280000u;
    goto loc_80158120;
}

loc_80157F48:
{
    r0 = MemoryInline::FlatRead32(r31);
}

loc_80157F50:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r25))) {
        goto loc_80158118;
    }
}

loc_80157F54:
{
    r0 = MemoryInline::FlatRead8((r27 + 17968));
    r30 = (r31 + 12);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_80157F60:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80157F78;
    }
}

loc_80157F64:
{
    r5 = r26;
    r6 = r25;
    r3 = (r28 + 2);
    r4 = (r29 + 30848);
    ctx->lr = 0x80157F78u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131770u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80157F78:
{
    r4 = MemoryInline::FlatRead16((r31 + 8));
    r3 = 0;
    goto loc_8015810C;
}

loc_80157F84:
{
    r0 = MemoryInline::FlatRead16((r30 + 8));
}

loc_80157F8C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r26))) {
        goto loc_80158104;
    }
}

loc_80157F90:
{
    r0 = MemoryInline::FlatRead32(r30);
    r4 = MemoryInline::FlatRead32((r30 + 4));
}

loc_80157F9C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80157FDC;
    }
}

loc_80157FA0:
{
    r7 = 0;
    goto loc_80157FCC;
}

loc_80157FA8:
{
    r5 = (r7 & 65535);
    r5 = (r5 * 12);
    r6 = (r31 + r5);
    r5 = MemoryInline::FlatRead32((r6 + 16));
}

loc_80157FBC:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(r4))) {
        goto loc_80157FC8;
    }
}

loc_80157FC0:
{
    r5 = (r5 - r0);
    MemoryInline::FlatWrite32((r6 + 16), r5);
}

loc_80157FC8:
{
    r7 = (r7 + 1);
}

loc_80157FCC:
{
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = (r7 & 65535);
}

loc_80157FD8:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_80157FA8;
    }
}

loc_80157FDC:
{
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r5 = (r5 + -1);
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r5));
    goto loc_8015800C;
}

loc_80157FEC:
{
    r6 = MemoryInline::FlatRead32((r30 + 12));
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead32((r30 + 16));
    MemoryInline::FlatWrite32(r30, r6);
    MemoryInline::FlatWrite32((r30 + 4), r5);
    r5 = MemoryInline::FlatRead32((r30 + 20));
    MemoryInline::FlatWrite32((r30 + 8), r5);
    r30 = (r30 + 12);
}

loc_8015800C:
{
    r5 = MemoryInline::FlatRead16((r31 + 8));
    r6 = (r3 & 65535);
}

loc_80158018:
{
    if ((static_cast<uint32_t>(r6) < static_cast<uint32_t>(r5))) {
        goto loc_80157FEC;
    }
}

loc_8015801C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80158020:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801580FC;
    }
}

loc_80158024:
{
    r5 = (r31 + 312);
    r6 = (r4 + r0);
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r5 = (r6 - r5);
    r7 = 0;
    r3 = (r3 - r5);
    r8 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_80158040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801580F0;
    }
}

loc_80158044:
{
}

loc_80158048:
{
    r3 = (r8 + 65536);
    r3 = (r3 + -8);
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(8))) {
        goto loc_801580C0;
    }
}

loc_80158054:
{
    r5 = (r3 & 65535);
    r3 = (r5 + 7);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r3 = (r3_rot_1 & 536870911);
    ctr = r3;
}

loc_80158068:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_801580C0;
    }
}

loc_8015806C:
{
    r3 = MemoryInline::FlatRead8(r6);
    r5 = (r4 + r0);
    r7 = (r7 + 8);
    r6 = (r6 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r4, static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r4 + 1), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r4 + 2), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r4 + 3), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r4 + 4), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r4 + 5), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r4 + 6), static_cast<uint8_t>(r3));
    r3 = MemoryInline::FlatRead8((r5 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r4 + 7), static_cast<uint8_t>(r3));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8015806C;
    }
}

loc_801580C0:
{
    r6 = (r7 & 65535);
    r5 = (r0 + r4);
    r3 = (r8 - r6);
    ctr = r3;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r8));
}

loc_801580D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801580F0;
    }
}

loc_801580D8:
{
    r3 = MemoryInline::FlatRead8(r5);
    r7 = (r7 + 1);
    r5 = (r5 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r3));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801580D8;
    }
}

loc_801580F0:
{
    r3 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r3 - r0);
    MemoryInline::FlatWrite32((r31 + 4), r0);
}

loc_801580FC:
{
    r3 = 1;
    goto loc_80158134;
}

loc_80158104:
{
    r3 = (r3 + 1);
    r30 = (r30 + 12);
}

loc_8015810C:
{
    r0 = (r3 & 65535);
}

loc_80158114:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_80157F84;
    }
}

loc_80158118:
{
    r3 = (r3 + 1);
    r31 = (r31 + 664);
}

loc_80158120:
{
    r0 = MemoryInline::FlatRead16((r27 + 4642));
    r4 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8015812C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80157F48;
    }
}

loc_80158130:
{
    r3 = 0;
}

loc_80158134:
{
    r11 = (r1 + 48);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -28), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80157F10 func_80157F10 preserves=true fpr_mask=0x00000000
