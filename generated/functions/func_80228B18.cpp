#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80228B18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

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
    uint32_t xer = ctx->xer;

    goto loc_80228B18;

loc_80228B18:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 148u, (r1 + 148), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r19);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r21);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r23);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r25);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 124u, (r1 + 124), r27);
        MemoryInline::WriteResolved32(guest_range_0, 128u, (r1 + 128), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r29);
        MemoryInline::WriteResolved32(guest_range_0, 136u, (r1 + 136), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 140u, (r1 + 140), r31);
    r19 = r3;
    r20 = r4;
    r21 = r5;
    r22 = r6;
    r23 = r7;
    r24 = r8;
    r25 = r9;
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80228B4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80228B58;
    }
}

loc_80228B50:
{
    r3 = 0;
    goto loc_80228DB8;
}

loc_80228B58:
{
    r31 = (r1 + 44);
    r28 = 0;
    r27 = 0;
    goto loc_80228DA0;
}

loc_80228B68:
{
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_80228B70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80228B7C;
    }
}

loc_80228B74:
{
    r4 = (r4 + r0);
    goto loc_80228B80;
}

loc_80228B7C:
{
    r4 = 0;
}

loc_80228B80:
{
    r0 = (r27 & 65535);
    r3 = r21;
    r0 = (r0 * 52);
    r30 = (r4 + r0);
    r4_addr_2 = (r4 + r0);
    r0 = MemoryInline::FlatRead32(r4_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80228B98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228BA4;
    }
}

loc_80228B9C:
{
    r4 = (r30 + r0);
    goto loc_80228BA8;
}

loc_80228BA4:
{
    r4 = 0;
}

loc_80228BA8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001329Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80228BB0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80228D9C;
    }
}

loc_80228BB4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(0));
}

loc_80228BB8:
{
    r26 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228BD8;
    }
}

loc_80228BC0:
{
    r3 = r20;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072E60u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_80228BD0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80228BD8;
    }
}

loc_80228BD4:
{
    r26 = 1;
}

loc_80228BD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80228BDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80228BF8;
    }
}

loc_80228BE0:
{
    r3 = r20;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072E60u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r4 = (r1 + 28);
    goto loc_80228C08;
}

loc_80228BF8:
{
    r3 = MemoryInline::FlatRead32(r19);
    r4 = (r1 + 24);
    r0 = (r3 + 64);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_80228C08:
{
    r0 = MemoryInline::FlatRead32(r4);
    r3 = (r1 + 84);
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r4 = MemoryInline::FlatRead32((r30 + 16));
    // inline leaf 0x80050660 (11 guest instruction(s))
}

loc_inl0_0x80050660:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_inl0_0x80050668:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80050684;
    }
}

loc_inl0_0x8005066C:
{
}

loc_inl0_0x80050670:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(7))) {
        goto loc_inl0_0x80050684;
    }
}

loc_inl0_0x80050674:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & -32);
    r3 = (r3 + r0);
    r3 = (r3 + 4);
    goto loc_inl0_cont_80050660;
}

loc_inl0_0x80050684:
{
    r3 = 0;
}

loc_inl0_cont_80050660:
{
    // end of inlined leaf 0x80050660
}

loc_80228C20:
{
    r29 = r3;
    if ((static_cast<int32_t>(r23) == static_cast<int32_t>(0))) {
        goto loc_80228CD4;
    }
}

loc_80228C28:
{
    r4 = (r1 + 80);
    r5 = (r1 + 22);
    r6 = (r1 + 20);
    r7 = (r1 + 76);
    r8 = (r1 + 72);
    r9 = (r1 + 68);
    r10 = (r1 + 18);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    InvokeDirectCpu<0x80170BF8u>(ctx);
    MemoryInline::FlatWriteRam32((r1 + 8), r31);
    r3 = r29;
    r4 = (r1 + 64);
    r5 = (r1 + 60);
    r6 = (r1 + 56);
    r7 = (r1 + 52);
    r8 = (r1 + 48);
    r9 = (r1 + 17);
    r10 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    InvokeDirectCpu<0x80170CBCu>(ctx);
    guest_range_1 = MemoryInline::ResolveRangeHost(r22, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 0u, r22);
    r3 = r29;
    guest_range_2 = MemoryInline::ResolveRangeHost(r29, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, r29, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r22 + 4));
    MemoryInline::WriteResolved32(guest_range_2, 4u, (r29 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r22 + 8));
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r29 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r22 + 12));
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r29 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r22 + 16));
    MemoryInline::WriteResolved32(guest_range_2, 16u, (r29 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r22 + 20));
    MemoryInline::WriteResolved32(guest_range_2, 20u, (r29 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r22 + 24));
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r29 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r22 + 28));
    MemoryInline::WriteResolved32(guest_range_2, 28u, (r29 + 28), r0);
    r4 = MemoryInline::FlatRead32((r1 + 64));
    r5 = MemoryInline::FlatRead32((r1 + 60));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80170B6Cu>(ctx);
    r4 = MemoryInline::FlatRead32((r1 + 72));
    r3 = r29;
    r5 = MemoryInline::FlatRead32((r1 + 68));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80170B50u>(ctx);
    goto loc_80228D14;
}

loc_80228CD4:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r22, 0, 32u, true, false);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 0u, r22);
    guest_range_4 = MemoryInline::ResolveRangeHost(r3, 0, 32u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, r3, r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r22 + 4));
    MemoryInline::WriteResolved32(guest_range_4, 4u, (r3 + 4), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r22 + 8));
    MemoryInline::WriteResolved32(guest_range_4, 8u, (r3 + 8), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r22 + 12));
    MemoryInline::WriteResolved32(guest_range_4, 12u, (r3 + 12), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r22 + 16));
    MemoryInline::WriteResolved32(guest_range_4, 16u, (r3 + 16), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r22 + 20));
    MemoryInline::WriteResolved32(guest_range_4, 20u, (r3 + 20), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r22 + 24));
    MemoryInline::WriteResolved32(guest_range_4, 24u, (r3 + 24), r0);
    r0 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r22 + 28));
    MemoryInline::WriteResolved32(guest_range_4, 28u, (r3 + 28), r0);
}

loc_80228D14:
{
}

loc_80228D18:
{
    if ((static_cast<int32_t>(r24) == static_cast<int32_t>(0))) {
        goto loc_80228D98;
    }
}

loc_80228D1C:
{
    r0 = (r28 & 65535);
}

loc_80228D24:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r25))) {
        goto loc_80228D98;
    }
}

loc_80228D28:
{
    r3 = r19;
    // inline leaf 0x800521C0 (8 guest instruction(s))
}

loc_inl1_0x800521C0:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r3 + 40));
}

loc_inl1_0x800521CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl1_0x800521D8;
    }
}

loc_inl1_0x800521D0:
{
    r3 = (r3 + r0);
    goto loc_inl1_cont_800521C0;
}

loc_inl1_0x800521D8:
{
    r3 = 0;
}

loc_inl1_cont_800521C0:
{
    // end of inlined leaf 0x800521C0
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r29 = (r24 + r0);
    r26 = 0;
    goto loc_80228D84;
}

loc_80228D44:
{
    r3 = (r1 + 40);
    r4 = (r26 & 255);
    r5 = (r1 + 36);
    r6 = (r1 + 32);
    r7 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004FDA0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80228D60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80228D80;
    }
}

loc_80228D64:
{
    r3 = MemoryInline::FlatRead32((r1 + 32));
    r0 = MemoryInline::FlatRead32((r30 + 16));
}

loc_80228D70:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(r0))) {
        goto loc_80228D80;
    }
}

loc_80228D74:
{
    MemoryInline::FlatWrite8((r29 + 2), static_cast<uint8_t>(r3));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    MemoryInline::FlatWrite8((r29 + 3), static_cast<uint8_t>(r0));
}

loc_80228D80:
{
    r26 = (r26 + 1);
}

loc_80228D84:
{
    r3 = MemoryInline::FlatRead32((r1 + 40));
    r4 = (r26 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80228D94:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80228D44;
    }
}

loc_80228D98:
{
    r28 = (r28 + 1);
}

loc_80228D9C:
{
    r27 = (r27 + 1);
}

loc_80228DA0:
{
    r4 = MemoryInline::FlatRead32(r19);
    r3 = (r27 & 65535);
    r0 = MemoryInline::FlatRead32((r4 + 44));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_80228DB0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80228B68;
    }
}

loc_80228DB4:
{
    r3 = r28;
}

loc_80228DB8:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 92), 0, 60u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 92));
            r20 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 100));
            r22 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 108));
            r24 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 116));
            r26 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_5, 32u, (r1 + 124));
            r28 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 128));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_5, 40u, (r1 + 132));
            r30 = MemoryInline::ReadResolved32(guest_range_5, 44u, (r1 + 136));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_5, 48u, (r1 + 140));
    r0 = MemoryInline::ReadResolved32(guest_range_5, 56u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF807FB gpr_write=0xFFF807FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80228B18 func_80228B18 preserves=true fpr_mask=0x00000000
