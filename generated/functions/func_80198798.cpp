#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80198798(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mdest_1 = 0;
    uint32_t r3_mdest_2 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_mrot_1 = 0;
    uint32_t r3_mrot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r9_rot_0 = 0;
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
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80198798;

loc_80198798:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r8 = MemoryInline::FlatRead32((r4 + 8));
    r30 = (r6 + r5);
    r6 = MemoryInline::FlatRead16((r4 + 2));
    r29 = (r5 + -16);
    r0 = MemoryInline::FlatRead32((r4 + 4));
}

loc_801987C4:
{
    r9_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(24));
    r9 = (r9_rot_0 & 127);
    r10 = MemoryInline::FlatRead32((r4 + 12));
    r6 = (r4 + r0);
    r27 = r5;
    r26 = r3;
    r28 = r7;
    r31 = r29;
    r5 = (r4 - r9);
    r6 = (r6 + 16);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801987F4;
    }
}

loc_801987EC:
{
    MemoryInline::FlatWrite32((r8 + 12), r10);
    goto loc_801987F8;
}

loc_801987F4:
{
    MemoryInline::FlatWrite32(r3, r10);
}

loc_801987F8:
{
}

loc_801987FC:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_80198808;
    }
}

loc_80198800:
{
    MemoryInline::FlatWrite32((r10 + 8), r8);
    goto loc_8019880C;
}

loc_80198808:
{
    MemoryInline::FlatWrite32((r3 + 4), r8);
}

loc_8019880C:
{
    r0 = (r29 - r5);
}

loc_80198814:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(20))) {
        goto loc_80198820;
    }
}

loc_80198818:
{
    r31 = r5;
    goto loc_8019887C;
}

loc_80198820:
{
    r4 = 18002;
    r0 = (r5 + 16);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r4));
    r4 = 0;
    r0 = (r29 - r0);
}

loc_80198838:
{
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r5 + 4), r0);
    MemoryInline::FlatWrite32((r5 + 12), r4);
    MemoryInline::FlatWrite32((r5 + 8), r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_80198858;
    }
}

loc_8019884C:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r8 + 12), r5);
    goto loc_80198860;
}

loc_80198858:
{
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r3, r5);
}

loc_80198860:
{
}

loc_80198864:
{
    MemoryInline::FlatWrite32((r5 + 12), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80198874;
    }
}

loc_8019886C:
{
    MemoryInline::FlatWrite32((r4 + 8), r5);
    goto loc_80198878;
}

loc_80198874:
{
    MemoryInline::FlatWrite32((r3 + 4), r5);
}

loc_80198878:
{
    r8 = r5;
}

loc_8019887C:
{
    r0 = (r6 - r30);
}

loc_80198884:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(20))) {
        goto loc_80198890;
    }
}

loc_80198888:
{
    r30 = r6;
    goto loc_801988E8;
}

loc_80198890:
{
    r4 = 18002;
    r0 = (r30 + 16);
    MemoryInline::FlatWrite16(r30, static_cast<uint16_t>(r4));
    r4 = 0;
    r0 = (r6 - r0);
}

loc_801988A8:
{
    MemoryInline::FlatWrite16((r30 + 2), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r30 + 4), r0);
    MemoryInline::FlatWrite32((r30 + 12), r4);
    MemoryInline::FlatWrite32((r30 + 8), r8);
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_801988C8;
    }
}

loc_801988BC:
{
    r4 = MemoryInline::FlatRead32((r8 + 12));
    MemoryInline::FlatWrite32((r8 + 12), r30);
    goto loc_801988D0;
}

loc_801988C8:
{
    r4 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r3, r30);
}

loc_801988D0:
{
}

loc_801988D4:
{
    MemoryInline::FlatWrite32((r30 + 12), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_801988E4;
    }
}

loc_801988DC:
{
    MemoryInline::FlatWrite32((r4 + 8), r30);
    goto loc_801988E8;
}

loc_801988E4:
{
    MemoryInline::FlatWrite32((r3 + 4), r30);
}

loc_801988E8:
{
    r0 = MemoryInline::FlatRead32((r3 + -4));
    r5 = (r30 - r31);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801988F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80198904;
    }
}

loc_801988F8:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x80198904u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80198904:
{
    r5 = 0;
    r4 = (r29 + 16);
    r3 = r5;
    r6 = 21828;
    r4 = (r30 - r4);
    r0 = (r29 - r31);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(15));
    r3_mrot_0 = (r3_rot_0 & 32768);
    r3_mdest_0 = (r3 & -32769);
    r3 = (r3_mdest_0 | r3_mrot_0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r29, 0, 16u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r29, static_cast<uint16_t>(r6));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r3_mrot_1 = (r3_rot_1 & 32512);
    r3_mdest_1 = (r3 & -32513);
    r3 = (r3_mdest_1 | r3_mrot_1);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r29 + 4), r4);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 8), r5);
    }
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 12), r5);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r29 + 2), static_cast<uint16_t>(r3));
    r0 = MemoryInline::FlatRead16((r26 + 16));
    r3_mrot_2 = (r0 & 255);
    r3_mdest_2 = (r3 & -256);
    r3 = (r3_mdest_2 | r3_mrot_2);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r29 + 2), static_cast<uint16_t>(r3));
    r4 = MemoryInline::FlatRead32((r26 + 12));
}

loc_8019894C:
{
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r29 + 8), r4);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80198960;
    }
}

loc_80198954:
{
    r3 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r4 + 12), r29);
    goto loc_80198968;
}

loc_80198960:
{
    r3 = MemoryInline::FlatRead32((r26 + 8));
    MemoryInline::FlatWrite32((r26 + 8), r29);
}

loc_80198968:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8019896C:
{
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r29 + 12), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8019897C;
    }
}

loc_80198974:
{
    MemoryInline::FlatWrite32((r3 + 8), r29);
    goto loc_80198980;
}

loc_8019897C:
{
    MemoryInline::FlatWrite32((r26 + 12), r29);
}

loc_80198980:
{
    r11 = (r1 + 32);
    r3 = r27;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0005FB gpr_write=0xFC000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80198798 func_80198798 preserves=true fpr_mask=0x00000000
