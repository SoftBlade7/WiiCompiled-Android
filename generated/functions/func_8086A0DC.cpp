#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086A0DC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_8 = 0;
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
    uint32_t xer = ctx->xer;

    goto loc_8086A0DC;

loc_8086A0DC:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r5));
}

loc_8086A0E8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 68), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + 8), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r1 + 12), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 16), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 20), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 24), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 28), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 36), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 44), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 48), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 52), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 56), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 60), r31);
    }
    r19 = r3;
    r20 = r4;
    r21 = r5;
    r22 = r8;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086A240;
    }
}

loc_8086A104:
{
    r8 = (r4 * 24);
    r4 = (r3 + r8);
    r0 = MemoryInline::FlatRead8((r4 + 964));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8086A114:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8086A240;
    }
}

loc_8086A118:
{
    r5 = (r5 * 24);
    r0 = MemoryInline::FlatRead32((r3 + 1252));
    r26 = (r0 + r6);
    r4 = (r3 + r5);
    r0 = MemoryInline::FlatRead8((r4 + 964));
}

loc_8086A130:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r7))) {
        goto loc_8086A138;
    }
}

loc_8086A134:
{
    r7 = r0;
}

loc_8086A138:
{
    r29 = (r3 + r5);
    r28 = (r3 + r8);
    r18 = (r7 & 255);
    r25 = 0;
    r30 = 5;
    r31 = 0;
    goto loc_8086A234;
}

loc_8086A154:
{
    r3 = MemoryInline::FlatRead8((r29 + 964));
    r5 = 0;
    r4 = MemoryInline::FlatRead8((r19 + 2));
    r0 = (r3 + -1);
    r24 = (r0 & 255);
    goto loc_8086A224;
}

loc_8086A16C:
{
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & 2040);
    r27 = (r19 + r0);
    r0 = MemoryInline::FlatRead8((r27 + 9));
}

loc_8086A17C:
{
    if ((static_cast<uint32_t>(r21) != static_cast<uint32_t>(r0))) {
        goto loc_8086A220;
    }
}

loc_8086A180:
{
    r0 = MemoryInline::FlatRead8((r27 + 10));
}

loc_8086A188:
{
    if ((static_cast<uint32_t>(r24) != static_cast<uint32_t>(r0))) {
        goto loc_8086A220;
    }
}

loc_8086A18C:
{
    r23 = MemoryInline::FlatRead8((r28 + 964));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(5));
}

loc_8086A194:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8086A1DC;
    }
}

loc_8086A198:
{
    r0 = (r25 & 255);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 * r22);
    r5 = r20;
    r6 = r23;
    r4 = (r26 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8086EE50u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    MemoryInline::FlatWrite8((r27 + 9), static_cast<uint8_t>(r20));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r3 = (r28 + r0);
    MemoryInline::FlatWrite8((r27 + 10), static_cast<uint8_t>(r23));
    r0 = MemoryInline::FlatRead32((r27 + 4));
    MemoryInline::FlatWrite32((r3 + 968), r0);
    r3 = MemoryInline::FlatRead8((r28 + 964));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite8((r28 + 964), static_cast<uint8_t>(r0));
    goto loc_8086A204;
}

loc_8086A1DC:
{
    r0 = (r25 & 255);
    r3 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 * r22);
    r5 = 1;
    r6 = 1;
    r4 = (r26 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x8086F01Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead8(r19);
    MemoryInline::FlatWrite8((r27 + 9), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r27 + 10), static_cast<uint8_t>(r30));
}

loc_8086A204:
{
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1020);
    r3 = (r29 + r0);
    MemoryInline::FlatWrite32((r3 + 968), r31);
    r3 = MemoryInline::FlatRead8((r29 + 964));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite8((r29 + 964), static_cast<uint8_t>(r0));
    goto loc_8086A230;
}

loc_8086A220:
{
    r5 = (r5 + 1);
}

loc_8086A224:
{
    r0 = (r5 & 255);
}

loc_8086A22C:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8086A16C;
    }
}

loc_8086A230:
{
    r25 = (r25 + 1);
}

loc_8086A234:
{
    r0 = (r25 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r18));
}

loc_8086A23C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8086A154;
    }
}

loc_8086A240:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 64u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 48));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 56));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 60));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC03FB gpr_write=0xFFFC03FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8086A0DC func_8086A0DC preserves=true fpr_mask=0x00000000
