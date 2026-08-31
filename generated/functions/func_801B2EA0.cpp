#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801B2EA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r6_mdest_0 = 0;
    uint32_t r6_mdest_1 = 0;
    uint32_t r6_mdest_2 = 0;
    uint32_t r6_mdest_3 = 0;
    uint32_t r6_mdest_4 = 0;
    uint32_t r6_mdest_5 = 0;
    uint32_t r6_mrot_0 = 0;
    uint32_t r6_mrot_1 = 0;
    uint32_t r6_mrot_2 = 0;
    uint32_t r6_mrot_3 = 0;
    uint32_t r6_mrot_4 = 0;
    uint32_t r6_mrot_5 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;
    uint32_t r6_rot_5 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801B2EA0;

loc_801B2EA0:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r26 = r6;
    r30 = r7;
    r31 = r8;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r8 = 0x802A0000u;
    r0 = MemoryInline::FlatRead32((r8 + -12464));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_801B2EDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B2EEC;
    }
}

loc_801B2EE0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_801B3038;
}

loc_801B2EEC:
{
    r7 = -855638016;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(3));
    r4 = (r4_rot_1 & -8);
    r5 = 251658240;
    r9 = MemoryInline::FlatRead32((r7 + 25656));
    r5 = PPC_Sraw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    r0 = (r29 + 3);
    r9 = (r9 & r5);
    r6 = (r8 + -12464);
    MemoryInline::FlatWrite32((r7 + 25656), r9);
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r4 = (r4_rot_2 & 1073741823);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801B2F14:
{
    r5 = 0;
    MemoryInline::FlatWriteRam32((r8 + -12464), r27);
    MemoryInline::FlatWriteRam32((r6 + 16), r31);
    MemoryInline::FlatWriteRam32((r6 + 8), r30);
    MemoryInline::FlatWriteRam32((r6 + 12), r26);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801B2FDC;
    }
}

loc_801B2F2C:
{
}

loc_801B2F30:
{
    r6 = (r4 + -8);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_801B2FA4;
    }
}

loc_801B2F38:
{
    r0 = (r6 + 7);
    r8 = r28;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r7 = (r7 + 25600);
    ctr = r0;
}

loc_801B2F50:
{
    if ((static_cast<uint32_t>(r6) <= static_cast<uint32_t>(0))) {
        goto loc_801B2FA4;
    }
}

loc_801B2F54:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r8, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r8);
    r5 = (r5 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost((r7 + 128), 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r7 + 128), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r8 + 4));
    MemoryInline::WriteResolved32(guest_range_1, 4u, (r7 + 132), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r8 + 8));
    MemoryInline::WriteResolved32(guest_range_1, 8u, (r7 + 136), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r8 + 12));
    MemoryInline::WriteResolved32(guest_range_1, 12u, (r7 + 140), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r8 + 16));
    MemoryInline::WriteResolved32(guest_range_1, 16u, (r7 + 144), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r8 + 20));
    MemoryInline::WriteResolved32(guest_range_1, 20u, (r7 + 148), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r8 + 24));
    MemoryInline::WriteResolved32(guest_range_1, 24u, (r7 + 152), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r8 + 28));
    r8 = (r8 + 32);
    MemoryInline::WriteResolved32(guest_range_1, 28u, (r7 + 156), r0);
    r7 = (r7 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B2F54;
    }
}

loc_801B2FA4:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r7 = (r7_rot_1 & -4);
    r0 = -855638016;
    r6 = (r0 + r7);
    r0 = (r4 - r5);
    r7 = (r28 + r7);
    r6 = (r6 + 25600);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
}

loc_801B2FC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801B2FDC;
    }
}

loc_801B2FC8:
{
    r0 = MemoryInline::FlatRead32(r7);
    r7 = (r7 + 4);
    MemoryInline::FlatWrite32((r6 + 128), r0);
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801B2FC8;
    }
}

loc_801B2FDC:
{
    r4 = (r29 + -128);
    r0 = (128 - r29);
    r0 = ~(r4 | r0);
    r9 = -855638016;
    r5 = (static_cast<int32_t>(r0) >> 31);
    r6 = (0 - r31);
    r4 = (r30 + -128);
    r0 = (128 - r30);
    r0 = ~(r4 | r0);
    r8 = MemoryInline::FlatRead32((r9 + 25652));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(31) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 31);
    r7 = (r6 | r31);
    r4 = (r29 & ~r5);
    r6 = (r8 | -2147483648);
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(31));
    r6_mrot_1 = (r6_rot_1 & 1073741824);
    r6_mdest_1 = (r6 & -1073741825);
    r6 = (r6_mdest_1 | r6_mrot_1);
    r0 = (r30 & ~r0);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r6_mrot_2 = (r6_rot_2 & 8323072);
    r6_mdest_2 = (r6 & -8323073);
    r6 = (r6_mdest_2 | r6_mrot_2);
    r6_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r6_mrot_3 = (r6_rot_3 & 32512);
    r6_mdest_3 = (r6 & -32513);
    r6 = (r6_mdest_3 | r6_mrot_3);
    r6_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r6_mrot_4 = (r6_rot_4 & 6);
    r6_mdest_4 = (r6 & -7);
    r6 = (r6_mdest_4 | r6_mrot_4);
    r0 = (r6 | 1);
    MemoryInline::FlatWrite32((r9 + 25652), r0);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
}

loc_801B3038:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
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

// RECOMP_GUEST_ABI gpr_read=0xFC0003FB gpr_write=0xFC000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801B2EA0 func_801B2EA0 preserves=true fpr_mask=0x00000000
