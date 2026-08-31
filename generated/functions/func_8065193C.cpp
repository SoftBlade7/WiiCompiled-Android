#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065193C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r20_rot_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

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

    goto loc_8065193C;

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
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & 1020);
    r3 = (r0 + r3);
    r24 = MemoryInline::FlatRead8((r3 + 91));
}

loc_80651970:
{
    r25 = (r17 & 255);
    r20_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r17), static_cast<uint32_t>(3));
    r20 = (r20_rot_0 & 2040);
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
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(15));
}

loc_80651A6C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80651B1C;
    }
}

loc_80651A70:
{
    r3 = (r14 + 1564);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    ctr = r3;
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
    return;
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
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_0, 0u, (r1 + 8));
            r15 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_0, 8u, (r1 + 16));
            r17 = MemoryInline::ReadResolved32(guest_range_0, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_0, 16u, (r1 + 24));
            r19 = MemoryInline::ReadResolved32(guest_range_0, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_0, 24u, (r1 + 32));
            r21 = MemoryInline::ReadResolved32(guest_range_0, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_0, 32u, (r1 + 40));
            r23 = MemoryInline::ReadResolved32(guest_range_0, 36u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_0, 40u, (r1 + 48));
            r25 = MemoryInline::ReadResolved32(guest_range_0, 44u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_0, 48u, (r1 + 56));
            r27 = MemoryInline::ReadResolved32(guest_range_0, 52u, (r1 + 60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_0, 56u, (r1 + 64));
            r29 = MemoryInline::ReadResolved32(guest_range_0, 60u, (r1 + 68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_0, 64u, (r1 + 72));
            r31 = MemoryInline::ReadResolved32(guest_range_0, 68u, (r1 + 76));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_0, 76u, (r1 + 84));
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
// RECOMP_REGISTRATION base 0x8065193C func_8065193C preserves=true fpr_mask=0x00000000
