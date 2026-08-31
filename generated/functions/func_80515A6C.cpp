#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80515A6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_80515A6C;

loc_80515A6C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r23);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 28u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r26 = r3;
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead8((r5 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80515A90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80515A9C;
    }
}

loc_80515A94:
{
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r4));
    goto loc_80515AA0;
}

loc_80515A9C:
{
    MemoryInline::FlatWrite8((r3 + 28), static_cast<uint8_t>(r5));
}

loc_80515AA0:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r29 = r26;
    r27 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r0));
    goto loc_80515C04;
}

loc_80515AB8:
{
}

loc_80515ABC:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r4))) {
        goto loc_80515AC8;
    }
}

loc_80515AC0:
{
    r3 = MemoryInline::FlatRead32((r29 + 56));
    goto loc_80515ACC;
}

loc_80515AC8:
{
    r3 = 0;
}

loc_80515ACC:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 & 1);
}

loc_80515AD4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80515BFC;
    }
}

loc_80515AD8:
{
}

loc_80515ADC:
{
    if ((static_cast<int32_t>(r27) >= static_cast<int32_t>(r4))) {
        goto loc_80515AE8;
    }
}

loc_80515AE0:
{
    r31 = MemoryInline::FlatRead32((r29 + 56));
    goto loc_80515AEC;
}

loc_80515AE8:
{
    r31 = 0;
}

loc_80515AEC:
{
    r3 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead8((r26 + 28));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80515B00:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80515B0C;
    }
}

loc_80515B04:
{
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r4));
    goto loc_80515B10;
}

loc_80515B0C:
{
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r3));
}

loc_80515B10:
{
    r0 = MemoryInline::FlatRead16((r31 + 24));
    r28 = r31;
    r30 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
    goto loc_80515BF0;
}

loc_80515B28:
{
}

loc_80515B2C:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r4))) {
        goto loc_80515B38;
    }
}

loc_80515B30:
{
    r3 = MemoryInline::FlatRead32((r28 + 56));
    goto loc_80515B3C;
}

loc_80515B38:
{
    r3 = 0;
}

loc_80515B3C:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 & 1);
}

loc_80515B44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80515BE8;
    }
}

loc_80515B48:
{
}

loc_80515B4C:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r4))) {
        goto loc_80515B58;
    }
}

loc_80515B50:
{
    r25 = MemoryInline::FlatRead32((r28 + 56));
    goto loc_80515B5C;
}

loc_80515B58:
{
    r25 = 0;
}

loc_80515B5C:
{
    r3 = MemoryInline::FlatRead32(r25);
    r4 = MemoryInline::FlatRead8((r31 + 28));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80515B70:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80515B7C;
    }
}

loc_80515B74:
{
    MemoryInline::FlatWrite8((r25 + 28), static_cast<uint8_t>(r4));
    goto loc_80515B80;
}

loc_80515B7C:
{
    MemoryInline::FlatWrite8((r25 + 28), static_cast<uint8_t>(r3));
}

loc_80515B80:
{
    r0 = MemoryInline::FlatRead16((r25 + 24));
    r23 = r25;
    r24 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r25 + 24), static_cast<uint16_t>(r0));
    goto loc_80515BDC;
}

loc_80515B98:
{
}

loc_80515B9C:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(r4))) {
        goto loc_80515BA8;
    }
}

loc_80515BA0:
{
    r3 = MemoryInline::FlatRead32((r23 + 56));
    goto loc_80515BAC;
}

loc_80515BA8:
{
    r3 = 0;
}

loc_80515BAC:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 & 1);
}

loc_80515BB4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80515BD4;
    }
}

loc_80515BB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r4));
}

loc_80515BBC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80515BC8;
    }
}

loc_80515BC0:
{
    r3 = MemoryInline::FlatRead32((r23 + 56));
    goto loc_80515BCC;
}

loc_80515BC8:
{
    r3 = 0;
}

loc_80515BCC:
{
    r4 = MemoryInline::FlatRead8((r25 + 28));
    ctx->lr = 0x80515BD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    InvokeDirectCpu<0x80515A6Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
}

loc_80515BD4:
{
    r23 = (r23 + 24);
    r24 = (r24 + 1);
}

loc_80515BDC:
{
    r4 = MemoryInline::FlatRead16((r25 + 4));
}

loc_80515BE4:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r4))) {
        goto loc_80515B98;
    }
}

loc_80515BE8:
{
    r28 = (r28 + 24);
    r30 = (r30 + 1);
}

loc_80515BF0:
{
    r4 = MemoryInline::FlatRead16((r31 + 4));
}

loc_80515BF8:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r4))) {
        goto loc_80515B28;
    }
}

loc_80515BFC:
{
    r29 = (r29 + 24);
    r27 = (r27 + 1);
}

loc_80515C04:
{
    r4 = MemoryInline::FlatRead16((r26 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(r4));
}

loc_80515C0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80515AB8;
    }
}

loc_80515C10:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 12));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 20));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 28));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 36));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 40));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 44));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFF8007FB gpr_write=0xFF80003B gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80515A6C func_80515A6C preserves=true fpr_mask=0x00000000
