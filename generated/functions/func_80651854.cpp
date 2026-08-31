#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80651854(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r19_rot_0 = 0;
    uint32_t r19_rot_1 = 0;
    uint32_t r19_rot_2 = 0;
    uint32_t r19_rot_3 = 0;
    uint32_t r19_rot_4 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r20_rot_1 = 0;
    uint32_t r20_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;
    uint32_t r4_rot_4 = 0;
    uint32_t r4_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_80651854;

loc_80651854:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -80), 0, 88u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r14);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r16);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r18);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r19);
    }
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
    r14 = 0x809C0000u;
    r15 = r3;
    r5 = MemoryInline::FlatRead32((r14 + 7736));
    r4 = MemoryInline::FlatRead32(r5);
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r4 + -88);
}

loc_80651880:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_80651914;
    }
}

loc_80651884:
{
    r4 = 0x808C0000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4 = (r4 + 1628);
    r4_addr_1 = (r4 + r0);
    r4 = MemoryInline::FlatRead32(r4_addr_1);
    ctr = r4;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x8065189Cu:
        goto loc_8065189C;
        break;
    case 0x806518B0u:
        goto loc_806518B0;
        break;
    case 0x80651914u:
        goto loc_80651914;
        break;
    case 0x806518C4u:
        goto loc_806518C4;
        break;
    case 0x80651900u:
        goto loc_80651900;
        break;
    case 0x8065190Cu:
        goto loc_8065190C;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_8065189C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8448));
    // inline leaf 0x8066048C (7 guest instruction(s))
}

loc_inl0_0x8066048C:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
}

loc_inl0_0x80660494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x806604A0;
    }
}

loc_inl0_0x80660498:
{
    r3 = MemoryInline::FlatRead8((r3 + 63));
    goto loc_inl0_cont_8066048C;
}

loc_inl0_0x806604A0:
{
    r3 = 0;
}

loc_inl0_cont_8066048C:
{
    // end of inlined leaf 0x8066048C
    MemoryInline::FlatWrite32((r15 + 648), r3);
    goto loc_80651914;
}

loc_806518B0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8448));
    // inline leaf 0x806604A8 (9 guest instruction(s))
}

loc_inl1_0x806604A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
}

loc_inl1_0x806604B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x806604C4;
    }
}

loc_inl1_0x806604B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 44));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
    r3 = (r0 ^ 1);
    goto loc_inl1_cont_806604A8;
}

loc_inl1_0x806604C4:
{
    r3 = 2;
}

loc_inl1_cont_806604A8:
{
    // end of inlined leaf 0x806604A8
    MemoryInline::FlatWrite32((r15 + 652), r3);
    goto loc_80651914;
}

loc_806518C4:
{
    r4 = MemoryInline::FlatRead32((r5 + 152));
    r0 = MemoryInline::FlatRead32((r4 + 720));
}

loc_806518D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_806518E0;
    }
}

loc_806518D4:
{
    r0 = MemoryInline::FlatRead32((r4 + 724));
    MemoryInline::FlatWrite32((r3 + 648), r0);
    goto loc_80651914;
}

loc_806518E0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8448));
    // inline leaf 0x8066048C (7 guest instruction(s))
}

loc_inl2_0x8066048C:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
}

loc_inl2_0x80660494:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl2_0x806604A0;
    }
}

loc_inl2_0x80660498:
{
    r3 = MemoryInline::FlatRead8((r3 + 63));
    goto loc_inl2_cont_8066048C;
}

loc_inl2_0x806604A0:
{
    r3 = 0;
}

loc_inl2_cont_8066048C:
{
    // end of inlined leaf 0x8066048C
    MemoryInline::FlatWrite32((r15 + 648), r3);
    r4 = MemoryInline::FlatRead32((r14 + 7736));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite32((r4 + 724), r3);
    goto loc_80651914;
}

loc_80651900:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 652), r0);
    goto loc_80651914;
}

loc_8065190C:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 652), r0);
}

loc_80651914:
{
    r22 = r15;
    r18 = 0;
    r17 = 0;
    r31 = 0x809C0000u;
    r27 = 0x809C0000u;
    r28 = 65536;
    r26 = 0x809C0000u;
    r29 = 0x809C0000u;
    r30 = 0x809C0000u;
    r14 = 0x808C0000u;
}

loc_8065193C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8408));
    r4 = (r17 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_80651958:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80651964;
    }
}

loc_8065195C:
{
    r24 = MemoryInline::FlatRead8((r3 + 88));
    goto loc_80651970;
}

loc_80651964:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1020);
    r3 = (r0 + r3);
    r24 = MemoryInline::FlatRead8((r3 + 91));
}

loc_80651970:
{
    r25 = (r17 & 255);
    r20_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(3));
    r20 = (r20_rot_2 & 2040);
    r21 = (r25 * 192);
    r16 = 0;
    goto loc_80651B78;
}

loc_80651984:
{
    MemoryInline::FlatWrite8((r22 + 500), static_cast<uint8_t>(r17));
    r0 = (r16 & 255);
}

loc_8065198C:
{
    MemoryInline::FlatWrite8((r22 + 501), static_cast<uint8_t>(r16));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80651A4C;
    }
}

loc_80651994:
{
    r3 = MemoryInline::FlatRead32((r26 + 8408));
    r4 = (r17 & 255);
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
}

loc_806519B0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_80651A28;
    }
}

loc_806519B4:
{
    r4 = MemoryInline::FlatRead32((r27 + -10424));
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806519C0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_806519DC;
    }
}

loc_806519C4:
{
    r3 = (r0 & 255);
    r0 = (r28 + -27664);
    r0 = (r0 * r3);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_806519E0;
}

loc_806519DC:
{
    r3 = 0;
}

loc_806519E0:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -28648));
    MemoryInline::FlatWrite16((r22 + 508), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r27 + -10424));
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_806519F8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80651A14;
    }
}

loc_806519FC:
{
    r3 = (r0 & 255);
    r0 = (r28 + -27664);
    r0 = (r0 * r3);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_80651A18;
}

loc_80651A14:
{
    r3 = 0;
}

loc_80651A18:
{
    r3 = (r3 + 65536);
    r0 = MemoryInline::FlatRead16((r3 + -28640));
    MemoryInline::FlatWrite16((r22 + 510), static_cast<uint16_t>(r0));
    goto loc_80651A58;
}

loc_80651A28:
{
    r0 = MemoryInline::FlatRead32((r29 + 8456));
    r3 = (r21 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 384));
    MemoryInline::FlatWrite16((r22 + 508), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r29 + 8456));
    r3 = (r21 + r0);
    r0 = MemoryInline::FlatRead16((r3 + 386));
    MemoryInline::FlatWrite16((r22 + 510), static_cast<uint16_t>(r0));
    goto loc_80651A58;
}

loc_80651A4C:
{
    r0 = (r28 + -1);
    MemoryInline::FlatWrite16((r22 + 508), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r22 + 510), static_cast<uint16_t>(r0));
}

loc_80651A58:
{
    r4 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32(r4);
    r3 = MemoryInline::FlatRead32(r3);
    r0 = (r3 + -88);
}

loc_80651A6C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(15))) {
        goto loc_80651B1C;
    }
}

loc_80651A70:
{
    r3 = (r14 + 1564);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    ctr = r3;
    switch (static_cast<uint32_t>(ctr)) {
    case 0x80651A84u:
        goto loc_80651A84;
        break;
    case 0x80651A90u:
        goto loc_80651A90;
        break;
    case 0x80651B1Cu:
        goto loc_80651B1C;
        break;
    case 0x80651AD0u:
        goto loc_80651AD0;
        break;
    default:
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[6] = r6;
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
        InvokeIndirectJump(ctr, ctx);
        return;
    }
}

loc_80651A84:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r22 + 504), r0);
    goto loc_80651B1C;
}

loc_80651A90:
{
    r23 = MemoryInline::FlatRead32((r4 + 152));
    r19_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r19 = (r19_rot_3 & 1020);
    r3 = MemoryInline::FlatRead32((r30 + 8448));
    r4 = (r17 & 255);
    r5 = (r16 & 255);
    // inline leaf 0x80660654 (14 guest instruction(s))
}

loc_inl3_0x80660654:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
}

loc_inl3_0x8066065C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_0x80660684;
    }
}

loc_inl3_0x80660660:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r5 + r0);
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_3 & 134217727);
    goto loc_inl3_cont_80660654;
}

loc_inl3_0x80660684:
{
    r3 = 2;
}

loc_inl3_cont_80660654:
{
    // end of inlined leaf 0x80660654
    r4 = (r20 + r23);
    r0 = (r19 + r20);
    r4 = (r19 + r4);
    MemoryInline::FlatWrite32((r4 + 740), r3);
    r3 = MemoryInline::FlatRead32((r31 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 740));
    MemoryInline::FlatWrite32((r22 + 504), r0);
    goto loc_80651B1C;
}

loc_80651AD0:
{
    r19 = MemoryInline::FlatRead32((r4 + 152));
    r0 = MemoryInline::FlatRead32((r19 + 720));
}

loc_80651ADC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80651B00;
    }
}

loc_80651AE0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8448));
    r4 = (r17 & 255);
    r5 = (r16 & 255);
    // inline leaf 0x80660654 (14 guest instruction(s))
}

loc_inl4_0x80660654:
{
    r0 = MemoryInline::FlatRead8((r3 + 61));
}

loc_inl4_0x8066065C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl4_0x80660684;
    }
}

loc_inl4_0x80660660:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r4 = MemoryInline::FlatRead32((r3 + 44));
    r0 = (r5 + r0);
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_5 & 134217727);
    goto loc_inl4_cont_80660654;
}

loc_inl4_0x80660684:
{
    r3 = 2;
}

loc_inl4_cont_80660654:
{
    // end of inlined leaf 0x80660654
    r4_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r4 = (r4_rot_3 & 1020);
    r0 = (r20 + r19);
    r4 = (r4 + r0);
    MemoryInline::FlatWrite32((r4 + 740), r3);
}

loc_80651B00:
{
    r4 = MemoryInline::FlatRead32((r31 + 7736));
    r3_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r3 = (r3_rot_8 & 1020);
    r0 = MemoryInline::FlatRead32((r4 + 152));
    r0 = (r20 + r0);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 740));
    MemoryInline::FlatWrite32((r22 + 504), r0);
}

loc_80651B1C:
{
    r3 = MemoryInline::FlatRead32((r26 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 89));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r25), static_cast<uint32_t>(r0));
}

loc_80651B34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80651B58;
    }
}

loc_80651B38:
{
    r4 = MemoryInline::FlatRead32((r31 + 7736));
    r6 = r18;
    r3 = (r15 + 656);
    r5 = (r16 & 255);
    r4 = MemoryInline::FlatRead32((r4 + 152));
    r4 = (r4 + 568);
    ctx->lr = 0x80651B54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x805FAF34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80651B6C;
}

loc_80651B58:
{
    r4 = r18;
    r5 = r25;
    r3 = (r15 + 656);
    r6 = (r16 & 255);
    ctx->lr = 0x80651B6Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x805FA8B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80651B6C:
{
    r22 = (r22 + 12);
    r18 = (r18 + 1);
    r16 = (r16 + 1);
}

loc_80651B78:
{
    r0 = (r16 & 255);
}

loc_80651B80:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r24))) {
        goto loc_80651984;
    }
}

loc_80651B84:
{
    r17 = (r17 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(12));
}

loc_80651B8C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065193C;
    }
}

loc_80651B90:
{
    MemoryInline::FlatWrite32((r15 + 644), r18);
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 48));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 64));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 72));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r1 + 76));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 76u, (r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80651854 func_80651854 preserves=true fpr_mask=0x00000000
