#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086817C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r25_addr_0 = 0;
    uint32_t r25_addr_1 = 0;
    uint32_t r25_addr_2 = 0;
    uint32_t r25_addr_3 = 0;
    uint32_t r27_addr_0 = 0;
    uint32_t r27_addr_1 = 0;
    uint32_t r27_addr_2 = 0;
    uint32_t r27_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
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

    goto loc_8086817C;

loc_8086817C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r1 + 8), r22);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r1 + 12), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r1 + 44), r31);
    }
    r29 = 0x808E0000u;
    r31 = r3;
    r28 = (r3 + 48);
    r26 = (r3 + 9288);
    r29 = (r29 + -17104);
    r23 = 0;
    r27 = 0;
    r30 = 0x808E0000u;
}

loc_808681AC:
{
    r25 = r28;
    r24 = (r30 + -16840);
    r22 = 0;
}

loc_808681B8:
{
    r0 = MemoryInline::FlatRead32(r24);
    r3 = r25;
    r6 = 100;
    r7 = 0;
    r5 = (r0 + r27);
    r27_addr_3 = (r27 + r0);
    r4 = MemoryInline::FlatRead16(r27_addr_3);
    r5 = MemoryInline::FlatRead16((r5 + 2));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80867788u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r22 = (r22 + 1);
    r25 = (r25 + 48);
}

loc_808681E4:
{
    r24 = (r24 + 4);
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(4))) {
        goto loc_808681B8;
    }
}

loc_808681EC:
{
    r24 = r26;
    r22 = 0;
    r25 = 0;
}

loc_808681F8:
{
    r0 = MemoryInline::FlatRead32(r29);
    r25_addr_3 = (r25 + r0);
    r4 = MemoryInline::FlatRead16(r25_addr_3);
    r3 = (r0 + r25);
}

loc_80868208:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(914))) {
        goto loc_80868228;
    }
}

loc_8086820C:
{
    r5 = MemoryInline::FlatRead16((r3 + 2));
}

loc_80868214:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(914))) {
        goto loc_80868228;
    }
}

loc_80868218:
{
    r3 = r24;
    r6 = 100;
    r7 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80867788u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
}

loc_80868228:
{
    r22 = (r22 + 1);
    r24 = (r24 + 48);
}

loc_80868234:
{
    r25 = (r25 + 4);
    if ((static_cast<int32_t>(r22) < static_cast<int32_t>(3))) {
        goto loc_808681F8;
    }
}

loc_8086823C:
{
    r23 = (r23 + 1);
    r28 = (r28 + 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(48));
}

loc_80868248:
{
    r29 = (r29 + 4);
    r26 = (r26 + 144);
    r27 = (r27 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808681AC;
    }
}

loc_80868258:
{
    r3 = 40;
    ctx->lr = 0x80868260u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_80868264:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80868274;
    }
}

loc_80868268:
{
    r5 = (r31 + 16200);
    r4 = 0;
    ctx->lr = 0x80868274u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80213F88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_80868274:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 16360), r3);
    r4 = r31;
    r3 = -1;
    ctr = r0;
}

loc_80868288:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r4 + 16216), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r4 + 16216), r3);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r4 + 16220), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r4 + 16224), r3);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r4 + 16228), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r4 + 16232), r3);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r4 + 16236), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r4 + 16240), r3);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r4 + 16244), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r4 + 16248), r3);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r4 + 16252), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r4 + 16256), r3);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r4 + 16260), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r4 + 16264), r3);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r4 + 16268), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r4 + 16272), r3);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r4 + 16276), r3);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r3)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r4 + 16280), r3);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r4 + 16284), r3);
    }
    r4 = (r4 + 72);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80868288;
    }
}

loc_808682D8:
{
    r3 = r31;
    ctx->lr = 0x808682E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x808683E0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r29 = (r31 + 16416);
    r30 = (r31 + 16704);
    r22 = 0;
}

loc_808682EC:
{
    r28 = r29;
    r27 = r30;
    r23 = 0;
}

loc_808682F8:
{
    r3 = r28;
    r4 = 0;
    r5 = 3;
    r6 = 100;
    // inline leaf 0x80867160 (13 guest instruction(s))
    r5 = (r5 - r4);
    r7 = 0;
    r5 = (r5 + 1);
    r8 = -1;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 28), r8);
    MemoryInline::FlatWrite32((r3 + 32), r7);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8((r3 + 38), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80867160
    r3 = r27;
    r4 = 0;
    r5 = 3;
    r6 = 100;
    // inline leaf 0x80867160 (13 guest instruction(s))
    r5 = (r5 - r4);
    r7 = 0;
    r5 = (r5 + 1);
    r8 = -1;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 24), r4);
    MemoryInline::FlatWrite32((r3 + 28), r8);
    MemoryInline::FlatWrite32((r3 + 32), r7);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r7));
    MemoryInline::FlatWrite8((r3 + 38), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r3 + 39), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r3 + 40), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x80867160
    r23 = (r23 + 1);
    r27 = (r27 + 48);
}

loc_8086832C:
{
    r28 = (r28 + 48);
    if ((static_cast<int32_t>(r23) < static_cast<int32_t>(2))) {
        goto loc_808682F8;
    }
}

loc_80868334:
{
    r22 = (r22 + 1);
    r30 = (r30 + 96);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(3));
}

loc_80868340:
{
    r29 = (r29 + 96);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_808682EC;
    }
}

loc_80868348:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 17056), r0);
    r3 = r31;
    ctx->lr = 0x80868358u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x808691FCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r30 = 0x808B0000u;
    r29 = (r31 + 17064);
    r30 = (r30 + 7744);
    r22 = 0;
}

loc_80868368:
{
    r4 = MemoryInline::FlatRead16(r30);
    r3 = r29;
    r5 = MemoryInline::FlatRead16((r30 + 2));
    r6 = 100;
    r7 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80867788u>(ctx);
    r0 = ctx->gpr[0];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r22 = (r22 + 1);
    r29 = (r29 + 48);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r22), static_cast<int32_t>(24));
}

loc_8086838C:
{
    r30 = (r30 + 4);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80868368;
    }
}

loc_80868394:
{
    r0 = 0;
    r3 = -1;
    MemoryInline::FlatWrite32((r31 + 24), r3);
    r3 = 40;
    MemoryInline::FlatWrite32((r31 + 16), r0);
    MemoryInline::FlatWrite8((r31 + 36), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite32((r31 + 40), r0);
    ctx->lr = 0x808683B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_808683B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808683C8;
    }
}

loc_808683BC:
{
    r5 = (r31 + 20);
    r4 = 2;
    ctx->lr = 0x808683C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80213F88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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

loc_808683C8:
{
    MemoryInline::FlatWrite32((r31 + 9280), r3);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r1 + 8));
            r23 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r1 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r1 + 52));
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
// RECOMP_REGISTRATION base 0x8086817C func_8086817C preserves=true fpr_mask=0x00000000
