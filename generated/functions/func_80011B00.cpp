#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80011B00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r3_stbu_ea_0 = 0;
    uint32_t r3_stbu_ea_1 = 0;
    uint32_t r3_stbu_ea_2 = 0;
    uint32_t r3_stbu_ea_3 = 0;
    uint32_t r3_stbu_ea_4 = 0;
    uint32_t r3_stbu_ea_5 = 0;
    uint32_t r4_stbu_ea_0 = 0;
    uint32_t r4_stbu_ea_1 = 0;
    uint32_t r4_stbu_ea_2 = 0;
    uint32_t r4_stbu_ea_3 = 0;
    uint32_t r4_stbu_ea_4 = 0;
    uint32_t r4_stbu_ea_5 = 0;
    uint32_t r5_addic_src_0 = 0;
    uint32_t r5_addic_src_1 = 0;
    uint32_t r5_addic_src_2 = 0;
    uint32_t r5_addic_src_3 = 0;
    uint32_t r5_addic_src_4 = 0;
    uint32_t r5_addic_src_5 = 0;
    uint32_t r5_addic_src_6 = 0;
    uint32_t r5_addic_src_7 = 0;
    uint32_t r5_addic_src_8 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80011B00;

loc_80011B00:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
}

loc_80011B0C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 60u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 12), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 16), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 20), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 24), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 28), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 36), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 40), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 60), r31);
    r27 = r3;
    r28 = r5;
    r29 = r6;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80011C5C;
    }
}

loc_80011B24:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
    r7 = (r7_rot_1 & 2147483647);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & -2);
    r31 = (r7 + 1);
    r6 = (r4 + -1);
    r7 = (r31 + -1);
    r30 = r4;
    r4 = (r5 * r7);
    r25 = (r5 - r0);
    r0 = (r5 * r6);
    r23 = (r3 + r4);
    r26 = (r31 * r5);
    r22 = (r3 + r0);
}

loc_80011B54:
{
}

loc_80011B58:
{
    if ((static_cast<uint32_t>(r31) <= static_cast<uint32_t>(1))) {
        goto loc_80011B6C;
    }
}

loc_80011B5C:
{
    r26 = (r26 - r28);
    r23 = (r23 - r28);
    r31 = (r31 + -1);
    goto loc_80011BA8;
}

loc_80011B6C:
{
    r3 = (r22 + -1);
    r4 = (r23 + -1);
    r5 = (r28 + 1);
    goto loc_80011B90;
}

loc_80011B7C:
{
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r4_stbu_ea_3 = (r4 + 1);
    MemoryInline::FlatWrite8(r4_stbu_ea_3, static_cast<uint8_t>(r0));
    r4 = r4_stbu_ea_3;
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r3_stbu_ea_3 = (r3 + 1);
    MemoryInline::FlatWrite8(r3_stbu_ea_3, static_cast<uint8_t>(r6));
    r3 = r3_stbu_ea_3;
}

loc_80011B90:
{
    r5_addic_src_3 = r5;
    r5 = (r5_addic_src_3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80011B94:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80011B7C;
    }
}

loc_80011B98:
{
    r30 = (r30 + -1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_80011BA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80011C5C;
    }
}

loc_80011BA4:
{
    r22 = (r22 - r28);
}

loc_80011BA8:
{
    r0 = (r26 + r25);
    r24 = r31;
    r20 = (r27 + r0);
    goto loc_80011C4C;
}

loc_80011BB8:
{
    r24_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r24 = (r24_rot_3 & -2);
    r21 = r20;
    r0 = (r24 + -1);
    r0 = (r28 * r0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r24), static_cast<uint32_t>(r30));
}

loc_80011BCC:
{
    r20 = (r27 + r0);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80011BFC;
    }
}

loc_80011BD4:
{
    r19 = (r20 + r28);
    r12 = r29;
    r3 = r20;
    r4 = r19;
    ctr = r12;
    ctx->lr = 0x80011BECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80011BF0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80011BFC;
    }
}

loc_80011BF4:
{
    r20 = r19;
    r24 = (r24 + 1);
}

loc_80011BFC:
{
    r12 = r29;
    r3 = r21;
    r4 = r20;
    ctr = r12;
    ctx->lr = 0x80011C10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r12 = ctx->gpr[12];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80011C14:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_80011B54;
    }
}

loc_80011C18:
{
    r3 = (r20 + -1);
    r4 = (r21 + -1);
    r5 = (r28 + 1);
    goto loc_80011C44;
}

loc_80011C28:
{
    r6 = MemoryInline::FlatRead8((r4 + 1));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r6 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    r4 = (r4 + 1);
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r6));
    r3 = (r3 + 1);
}

loc_80011C44:
{
    r5_addic_src_7 = r5;
    r5 = (r5_addic_src_7 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addic_src_7)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80011C48:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80011C28;
    }
}

loc_80011C4C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
}

loc_80011C54:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(r30))) {
        goto loc_80011BB8;
    }
}

loc_80011C58:
{
    goto loc_80011B54;
}

loc_80011C5C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 28));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 56));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 60));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80011B00 func_80011B00 preserves=true fpr_mask=0x00000000
