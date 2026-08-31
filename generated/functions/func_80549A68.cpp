#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80549A68(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
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
    uint32_t r25 = ctx->gpr[25];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80549A68;

loc_80549A68:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_80549A74:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 52), r0);
    r0 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 44), r31);
    r28 = r3;
    r29 = r4;
    r30 = r5;
    r31 = r6;
    r25 = r7;
    r8 = MemoryInline::FlatRead32((r3 + 24));
    MemoryInline::FlatWrite32(r8, r0);
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80549AB4;
    }
}

loc_80549AA0:
{
}

loc_80549AA4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_80549B44;
    }
}

loc_80549AA8:
{
}

loc_80549AAC:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(4))) {
        goto loc_80549B7C;
    }
}

loc_80549AB0:
{
    goto loc_80549BC8;
}

loc_80549AB4:
{
    r27 = 0;
    r26 = 0;
}

loc_80549ABC:
{
    r3 = (r26 & 255);
    // inline leaf 0x80552E74 (9 guest instruction(s))
}

loc_inl0_0x80552E74:
{
}

loc_inl0_0x80552E78:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(32))) {
        goto loc_inl0_0x80552E84;
    }
}

loc_inl0_0x80552E7C:
{
    r3 = 8;
    goto loc_inl0_cont_80552E74;
}

loc_inl0_0x80552E84:
{
    r4 = 0x80890000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r4 = (r4 + 4544);
    r4_addr_2 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_2);
}

loc_inl0_cont_80552E74:
{
    // end of inlined leaf 0x80552E74
}

loc_80549AC8:
{
    if ((static_cast<int32_t>(r25) != static_cast<int32_t>(r3))) {
        goto loc_80549AD8;
    }
}

loc_80549ACC:
{
    r31 = r26;
    r27 = 1;
    goto loc_80549AE4;
}

loc_80549AD8:
{
    r26 = (r26 + 1);
}

loc_80549AE0:
{
    if ((static_cast<uint32_t>(r26) < static_cast<uint32_t>(32))) {
        goto loc_80549ABC;
    }
}

loc_80549AE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_80549AE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80549B04;
    }
}

loc_80549AEC:
{
    r3 = (r28 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    r0 = 10;
    MemoryInline::FlatWrite32((r3 + 20484), r0);
    goto loc_80549C30;
}

loc_80549B04:
{
    r3 = 65536;
    r0 = (r31 & 255);
    r4 = (r3 + -27664);
    r4 = (r29 * r4);
    r3 = 1;
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r3 = (r28 + r4);
    r3 = (r3 + 65536);
    r3 = MemoryInline::FlatRead32((r3 + -28008));
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80549BC8;
    }
}

loc_80549B30:
{
    r3 = (r28 + 131072);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 20484), r0);
    goto loc_80549C30;
}

loc_80549B44:
{
    r7 = 65536;
    r5 = 1;
    r7 = (r7 + -27664);
    r7 = (r4 * r7);
    r4 = PPC_Slw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
    r5 = (r3 + r7);
    r5 = (r5 + 65536);
    r5 = MemoryInline::FlatRead32((r5 + -28004));
    r4 = (r5 & r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80549BC8;
    }
}

loc_80549B6C:
{
    r3 = (r3 + 131072);
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 20484), r0);
    goto loc_80549C30;
}

loc_80549B7C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(1));
}

loc_80549B80:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80549B98;
    }
}

loc_80549B84:
{
    r4 = (r3 + 131072);
    r3 = 10;
    MemoryInline::FlatWrite8((r4 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r4 + 20484), r3);
    goto loc_80549C30;
}

loc_80549B98:
{
    r5 = 65536;
    r5 = (r5 + -27664);
    r4 = (r4 * r5);
    r4 = (r3 + r4);
    r4 = (r4 + 65536);
    r4 = MemoryInline::FlatRead8((r4 + -28000));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80549BB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80549BC8;
    }
}

loc_80549BB8:
{
    r3 = (r3 + 131072);
    MemoryInline::FlatWrite8((r3 + 20480), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r3 + 20484), r0);
    goto loc_80549C30;
}

loc_80549BC8:
{
    r0 = (r30 + -2);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_80549BD0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80549BDC;
    }
}

loc_80549BD4:
{
    r3 = 0;
    goto loc_80549C08;
}

loc_80549BDC:
{
    r3 = 0x80890000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + 3368);
    r4 = (r31 & 255);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    r3 = (r29 * 66);
    r0 = (r4 + r0);
    r0 = (r3 + r0);
    r3 = (r0 * 10240);
    r3 = (r3 + 196608);
    r3 = (r3 + -32768);
}

loc_80549C08:
{
    r5 = (r28 + 131072);
    r0 = 1;
    r4 = 0x80550000u;
    MemoryInline::FlatWrite32((r28 + 32), r3);
    r3 = MemoryInline::FlatRead32((r28 + 28));
    r4 = (r4 + -26180);
    MemoryInline::FlatWrite8((r5 + 20480), static_cast<uint8_t>(r0));
    r5 = 0;
    r6 = 0;
    ctx->lr = 0x80549C30u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80242C18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_80549C30:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 52));
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
// RECOMP_REGISTRATION base 0x80549A68 func_80549A68 preserves=true fpr_mask=0x00000000
