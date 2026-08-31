#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80515244(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80515244;

loc_80515244:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    }
    r25 = r3;
    r0 = MemoryInline::FlatRead16((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80515260:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805154D0;
    }
}

loc_80515264:
{
    r26 = -1;
    r27 = -1;
    r28 = 0;
    goto loc_805152EC;
}

loc_80515274:
{
    r0 = (r28 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r3));
}

loc_8051527C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80515290;
    }
}

loc_80515280:
{
    r3 = MemoryInline::FlatRead32(r25);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 262140);
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    goto loc_80515294;
}

loc_80515290:
{
    r3 = 0;
}

loc_80515294:
{
    r4 = r25;
    r5 = (r28 & 65535);
    ctx->lr = 0x805152A0u;
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
    InvokeDirectCpu<0x80515624u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead16((r25 + 4));
    r3 = (r28 & 65535);
}

loc_805152AC:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(r0))) {
        goto loc_805152C0;
    }
}

loc_805152B0:
{
    r3 = MemoryInline::FlatRead32(r25);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r3_addr_4 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_4);
    goto loc_805152C4;
}

loc_805152C0:
{
    r3 = 0;
}

loc_805152C4:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805152D8;
    }
}

loc_805152D4:
{
    r27 = (static_cast<int32_t>(static_cast<int16_t>(r28)));
}

loc_805152D8:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r26)));
}

loc_805152E0:
{
    if ((static_cast<int32_t>(r3) <= static_cast<int32_t>(r0))) {
        goto loc_805152E8;
    }
}

loc_805152E4:
{
    r26 = r3;
}

loc_805152E8:
{
    r28 = (r28 + 1);
}

loc_805152EC:
{
    r3 = MemoryInline::FlatRead16((r25 + 4));
    r0 = (r28 & 65535);
}

loc_805152F8:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_80515274;
    }
}

loc_805152FC:
{
    r0 = (r27 & 65535);
    MemoryInline::FlatWrite8((r25 + 12), static_cast<uint8_t>(r26));
}

loc_80515308:
{
    MemoryInline::FlatWrite16((r25 + 14), static_cast<uint16_t>(r27));
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r3))) {
        goto loc_80515320;
    }
}

loc_80515310:
{
    r3 = MemoryInline::FlatRead32(r25);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r3_addr_6 = (r3 + r0);
    r31 = MemoryInline::FlatRead32(r3_addr_6);
    goto loc_80515324;
}

loc_80515320:
{
    r31 = 0;
}

loc_80515324:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80515334:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80515344;
    }
}

loc_80515338:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r0));
    goto loc_80515348;
}

loc_80515344:
{
    MemoryInline::FlatWrite8((r31 + 28), static_cast<uint8_t>(r3));
}

loc_80515348:
{
    r0 = MemoryInline::FlatRead16((r31 + 24));
    r27 = r31;
    r28 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r31 + 24), static_cast<uint16_t>(r0));
    goto loc_805154AC;
}

loc_80515360:
{
}

loc_80515364:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r4))) {
        goto loc_80515370;
    }
}

loc_80515368:
{
    r3 = MemoryInline::FlatRead32((r27 + 56));
    goto loc_80515374;
}

loc_80515370:
{
    r3 = 0;
}

loc_80515374:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 & 1);
}

loc_8051537C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805154A4;
    }
}

loc_80515380:
{
}

loc_80515384:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(r4))) {
        goto loc_80515390;
    }
}

loc_80515388:
{
    r29 = MemoryInline::FlatRead32((r27 + 56));
    goto loc_80515394;
}

loc_80515390:
{
    r29 = 0;
}

loc_80515394:
{
    r3 = MemoryInline::FlatRead32(r29);
    r4 = MemoryInline::FlatRead8((r31 + 28));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_805153A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805153B4;
    }
}

loc_805153AC:
{
    MemoryInline::FlatWrite8((r29 + 28), static_cast<uint8_t>(r4));
    goto loc_805153B8;
}

loc_805153B4:
{
    MemoryInline::FlatWrite8((r29 + 28), static_cast<uint8_t>(r3));
}

loc_805153B8:
{
    r0 = MemoryInline::FlatRead16((r29 + 24));
    r26 = r29;
    r30 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r29 + 24), static_cast<uint16_t>(r0));
    goto loc_80515498;
}

loc_805153D0:
{
}

loc_805153D4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r4))) {
        goto loc_805153E0;
    }
}

loc_805153D8:
{
    r3 = MemoryInline::FlatRead32((r26 + 56));
    goto loc_805153E4;
}

loc_805153E0:
{
    r3 = 0;
}

loc_805153E4:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 & 1);
}

loc_805153EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80515490;
    }
}

loc_805153F0:
{
}

loc_805153F4:
{
    if ((static_cast<int32_t>(r30) >= static_cast<int32_t>(r4))) {
        goto loc_80515400;
    }
}

loc_805153F8:
{
    r23 = MemoryInline::FlatRead32((r26 + 56));
    goto loc_80515404;
}

loc_80515400:
{
    r23 = 0;
}

loc_80515404:
{
    r3 = MemoryInline::FlatRead32(r23);
    r4 = MemoryInline::FlatRead8((r29 + 28));
    r3 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_80515418:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80515424;
    }
}

loc_8051541C:
{
    MemoryInline::FlatWrite8((r23 + 28), static_cast<uint8_t>(r4));
    goto loc_80515428;
}

loc_80515424:
{
    MemoryInline::FlatWrite8((r23 + 28), static_cast<uint8_t>(r3));
}

loc_80515428:
{
    r0 = MemoryInline::FlatRead16((r23 + 24));
    r22 = r23;
    r24 = 0;
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r23 + 24), static_cast<uint16_t>(r0));
    goto loc_80515484;
}

loc_80515440:
{
}

loc_80515444:
{
    if ((static_cast<int32_t>(r24) >= static_cast<int32_t>(r4))) {
        goto loc_80515450;
    }
}

loc_80515448:
{
    r3 = MemoryInline::FlatRead32((r22 + 56));
    goto loc_80515454;
}

loc_80515450:
{
    r3 = 0;
}

loc_80515454:
{
    r0 = MemoryInline::FlatRead16((r3 + 24));
    r0 = (r0 & 1);
}

loc_8051545C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8051547C;
    }
}

loc_80515460:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(r4));
}

loc_80515464:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80515470;
    }
}

loc_80515468:
{
    r3 = MemoryInline::FlatRead32((r22 + 56));
    goto loc_80515474;
}

loc_80515470:
{
    r3 = 0;
}

loc_80515474:
{
    r4 = MemoryInline::FlatRead8((r23 + 28));
    ctx->lr = 0x8051547Cu;
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

loc_8051547C:
{
    r22 = (r22 + 24);
    r24 = (r24 + 1);
}

loc_80515484:
{
    r4 = MemoryInline::FlatRead16((r23 + 4));
}

loc_8051548C:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r4))) {
        goto loc_80515440;
    }
}

loc_80515490:
{
    r26 = (r26 + 24);
    r30 = (r30 + 1);
}

loc_80515498:
{
    r4 = MemoryInline::FlatRead16((r29 + 4));
}

loc_805154A0:
{
    if ((static_cast<int32_t>(r30) < static_cast<int32_t>(r4))) {
        goto loc_805153D0;
    }
}

loc_805154A4:
{
    r27 = (r27 + 24);
    r28 = (r28 + 1);
}

loc_805154AC:
{
    r4 = MemoryInline::FlatRead16((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r4));
}

loc_805154B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80515360;
    }
}

loc_805154B8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->lr = 0x805154C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80511E00u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r25;
    ctx->lr = 0x805154CCu;
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
    InvokeDirectCpu<0x80512370u>(ctx);
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
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    MemoryInline::FlatWriteFloat32((r25 + 16), f1.d);
}

loc_805154D0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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

// RECOMP_GUEST_ABI gpr_read=0xFFC01FFF gpr_write=0xFFC01FFB gpr_return=0x00000018 fpr_read=0xF0003FFF fpr_write=0xF000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80515244 func_80515244 preserves=true fpr_mask=0x00000000
