#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078DE60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r22_rot_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
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

    goto loc_8078DE60;

loc_8078DE60:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -128), 0, 136u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -128), r1);
    r1 = (r1 + -128);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 132u, (r1 + 132), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 84u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 84u, (r1 + 84), r21);
        MemoryInline::WriteResolved32(guest_range_0, 88u, (r1 + 88), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 92u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 92u, (r1 + 92), r23);
        MemoryInline::WriteResolved32(guest_range_0, 96u, (r1 + 96), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r25);
        MemoryInline::WriteResolved32(guest_range_0, 104u, (r1 + 104), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 108u, (r1 + 108), r27);
        MemoryInline::WriteResolved32(guest_range_0, 112u, (r1 + 112), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 116u, (r1 + 116), r29);
        MemoryInline::WriteResolved32(guest_range_0, 120u, (r1 + 120), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 124u, (r1 + 124), r31);
    r22_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r22 = (r22_rot_0 & -4);
    r29 = r3;
    r5 = MemoryInline::FlatRead32((r5 + 6584));
    r5 = MemoryInline::FlatRead32((r5 + 24));
    r5_addr_0 = (r5 + r22);
    r5 = MemoryInline::FlatRead32(r5_addr_0);
    r0 = MemoryInline::FlatRead16((r5 + 820));
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r30 = (r30_rot_0 & 1);
    // inline leaf 0x805B92C8 (12 guest instruction(s))
}

loc_inl0_0x805B92C8:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r0 = MemoryInline::FlatRead32((r5 + 4));
    r3_addr_0 = (r3 + r4);
    r4 = MemoryInline::FlatRead32(r3_addr_0);
}

loc_inl0_0x805B92E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_inl0_0x805B92EC;
    }
}

loc_inl0_0x805B92E4:
{
    r3 = MemoryInline::FlatRead32(r5);
    goto loc_inl0_0x805B92F0;
}

loc_inl0_0x805B92EC:
{
    r3 = 0;
}

loc_inl0_0x805B92F0:
{
    MemoryInline::FlatWrite32((r3 + 360), r4);
}

loc_inl0_cont_805B92C8:
{
    // end of inlined leaf 0x805B92C8
    r31 = (r29 + r22);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r30));
    r0 = MemoryInline::FlatRead32((r31 + 116));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(27));
    r3 = (r3_rot_0 & 134217727);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r3));
}

loc_8078DEA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078DFD4;
    }
}

loc_8078DEAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8078DEB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078DEDC;
    }
}

loc_8078DEB4:
{
    r6 = 0x808A0000u;
    r6 = (r6 + 19296);
    r5 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWriteRam8((r1 + 72), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 73), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 74), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 75), static_cast<uint8_t>(r0));
    goto loc_8078DF00;
}

loc_8078DEDC:
{
    r6 = 0x808A0000u;
    r6 = (r6 + 19292);
    r5 = MemoryInline::FlatRead8(r6);
    MemoryInline::FlatWriteRam8((r1 + 72), static_cast<uint8_t>(r5));
    r4 = MemoryInline::FlatRead8((r6 + 1));
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 73), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 74), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 75), static_cast<uint8_t>(r0));
}

loc_8078DF00:
{
    r22 = 0x808D0000u;
    r28 = MemoryInline::FlatRead32((r1 + 72));
    r22 = (r22 + 6240);
    r21 = 0;
    r24 = 0x808B0000u;
    r25 = 0x808B0000u;
    r26 = 0x808B0000u;
    r27 = 0x808D0000u;
    goto loc_8078DFBC;
}

loc_8078DF24:
{
    r0 = MemoryInline::FlatRead32((r29 + 12));
    r3 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r4 = MemoryInline::FlatRead32(r22);
    ctx->lr = 0x8078DF38u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004E8F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8078DF3C:
{
    r23 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078DF60;
    }
}

loc_8078DF44:
{
    r3 = (r24 + 28952);
    r5 = (r25 + 28924);
    r6 = (r26 + 18456);
    r7 = (r27 + 6348);
    r4 = 621;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8078DF60u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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

loc_8078DF60:
{
    r4 = MemoryInline::FlatRead32((r29 + 16));
    r3 = (r1 + 20);
    r5 = MemoryInline::FlatRead32((r23 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8078DF74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8078DF80;
    }
}

loc_8078DF78:
{
    r4 = MemoryInline::FlatRead32(r4);
    goto loc_8078DF84;
}

loc_8078DF80:
{
    r4 = 0;
}

loc_8078DF84:
{
    ctx->lr = 0x8078DF88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800730B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = (r1 + 20);
    ctx->lr = 0x8078DF90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80072FC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r3 = (r1 + 16);
    r5 = (r1 + 8);
    r4 = 1;
    MemoryInline::FlatWriteRam32((r1 + 8), r28);
    ctx->lr = 0x8078DFA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80050EA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r3 = (r1 + 16);
    r4 = 0;
    ctx->lr = 0x8078DFB4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    InvokeDirectCpu<0x80050470u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    r22 = (r22 + 4);
    r21 = (r21 + 1);
}

loc_8078DFBC:
{
    r0 = MemoryInline::FlatRead16((r29 + 112));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r21), static_cast<uint32_t>(r0));
}

loc_8078DFC4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078DF24;
    }
}

loc_8078DFC8:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r30));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    MemoryInline::FlatWrite32((r31 + 116), r0);
}

loc_8078DFD4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 84), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 84));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 88));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 92));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 96));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 100));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 104));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 108));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 112));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 116));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 120));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 124));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 132));
    ctx->lr = r0;
    r1 = (r1 + 128);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8078DE60 func_8078DE60 preserves=true fpr_mask=0x00000000
