#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805B052C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

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
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_805B052C;

loc_805B052C:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    r10 = 0;
    r7 = 2;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    r9 = 4;
    r0 = 3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r25);
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 124u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r27);
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 132u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r29);
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 136), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 140u, (r1 + 140), r31);
    r30 = 0x808B0000u;
    r28 = r3;
    r25 = r4;
    r29 = r5;
    r27 = r6;
    r26 = r8;
    r30 = (r30 + 28336);
    guest_range_0 = MemoryInline::ResolveRangeHost(r5, 0, 33u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r5, static_cast<uint8_t>(r7));
    r7 = 0x809C0000u;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 4u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r5 + 4), r10);
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r5 + 8), r10);
    }
    MemoryInline::WriteResolved8(guest_range_0, 12u, (r5 + 12), static_cast<uint8_t>(r9));
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r5 + 16), r10);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r5 + 20), r10);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r10)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r5 + 24), r0);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r5 + 28), r10);
    }
    r0 = MemoryInline::FlatRead32((r7 + 6260));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B0594:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B05AC;
    }
}

loc_805B0598:
{
    r3 = 0x808B0000u;
    r0 = MemoryInline::FlatRead32((r3 + 19444));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805B05A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B05AC;
    }
}

loc_805B05A8:
{
    r10 = 1;
}

loc_805B05AC:
{
    MemoryInline::WriteResolved8(guest_range_0, 32u, (r5 + 32), static_cast<uint8_t>(r10));
    r3 = r29;
    ctx->lr = 0x805B05B8u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C0ED0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r29;
    ctx->lr = 0x805B05C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800C0E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B38u>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x8017054Cu>(ctx);
    r6 = (r30 + 8);
    r8 = MemoryInline::FlatRead8((r30 + 8));
    r7 = MemoryInline::FlatRead8((r6 + 1));
    r4 = (r1 + 28);
    r5 = MemoryInline::FlatRead8((r6 + 2));
    r3 = 4;
    r0 = MemoryInline::FlatRead8((r6 + 3));
    MemoryInline::FlatWriteRam8((r1 + 28), static_cast<uint8_t>(r8));
    MemoryInline::FlatWriteRam8((r1 + 29), static_cast<uint8_t>(r7));
    MemoryInline::FlatWriteRam8((r1 + 30), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 31), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80170474u>(ctx);
    r7 = r27;
    r3 = 0;
    r4 = 1;
    r5 = 0;
    r6 = 0;
    r8 = 2;
    r9 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 2;
    r9 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    r3 = 5;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 0;
    r8 = 0;
    r9 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    InvokeDirectCpu<0x80170570u>(ctx);
    r31 = 0x808B0000u;
    r5 = MemoryInline::FlatRead32((r28 + 268));
    r4 = MemoryInline::FlatRead32((r31 + 19444));
    r3 = 0x809C0000u;
    r0 = 0;
}

loc_805B0678:
{
    r3 = (r3 + 6224);
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r4 = (r4_rot_0 & -4);
    r3_addr_0 = (r3 + r4);
    r3 = MemoryInline::FlatRead32(r3_addr_0);
    r28 = 0;
    MemoryInline::FlatWriteRam32((r1 + 32), r0);
    r27 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 48));
    r29 = MemoryInline::FlatRead32((r3 + 4));
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_805B076C;
    }
}

loc_805B069C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    // end of inlined leaf 0x80590100
    r31 = r3;
    // inline leaf 0x80591428 (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 68));
    // end of inlined leaf 0x80591428
    r7 = MemoryInline::FlatRead8((r3 + 76));
    r4 = (r1 + 20);
    r6 = MemoryInline::FlatRead8((r3 + 77));
    r5 = MemoryInline::FlatRead8((r3 + 78));
    r0 = MemoryInline::FlatRead8((r3 + 79));
    r3 = 4;
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 20), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_2, 4u, (r1 + 24), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 5u, (r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 6u, (r1 + 26), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 7u, (r1 + 27), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r7));
    MemoryInline::FlatWrite8((r26 + 1), static_cast<uint8_t>(r6));
    MemoryInline::FlatWrite8((r26 + 2), static_cast<uint8_t>(r5));
    MemoryInline::FlatWrite8((r26 + 3), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_2, 0u, (r1 + 20), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_2, 1u, (r1 + 21), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_2, 2u, (r1 + 22), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_2, 3u, (r1 + 23), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017039Cu>(ctx);
    r3 = r31;
    // inline leaf 0x8059107C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x8059107C
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
    r5 = (r5_rot_0 & 255);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & 255);
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r5));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r5 = (r5_rot_2 & 255);
    r4 = MemoryInline::FlatRead8((r1 + 16));
    r0 = MemoryInline::FlatRead8((r1 + 17));
    MemoryInline::FlatWriteRam8((r1 + 18), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 19), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 35), static_cast<uint8_t>(r3));
    r3 = r31;
    MemoryInline::FlatWriteRam8((r1 + 32), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 33), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 34), static_cast<uint8_t>(r5));
    // inline leaf 0x80590678 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x80590678
}

loc_805B0748:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805B075C;
    }
}

loc_805B074C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805B0750:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B07CC;
    }
}

loc_805B0754:
{
    r28 = 3;
    goto loc_805B07CC;
}

loc_805B075C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805B0760:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B07CC;
    }
}

loc_805B0764:
{
    r27 = 7;
    goto loc_805B07CC;
}

loc_805B076C:
{
    r5 = MemoryInline::FlatRead32((r29 + 16));
    r4 = (r1 + 12);
    r3 = 4;
    r0 = MemoryInline::FlatRead8(r5);
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 1));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 2));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r5 + 3));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x8017039Cu>(ctx);
    r0 = MemoryInline::FlatRead32((r31 + 19444));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_805B07A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B07CC;
    }
}

loc_805B07A8:
{
    r3 = 0x80380000u;
    r3 = MemoryInline::FlatRead32((r3 + 24520));
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_805B07BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805B07CC;
    }
}

loc_805B07C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805B07C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B07CC;
    }
}

loc_805B07C8:
{
    r27 = 7;
}

loc_805B07CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 32));
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r3 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80171E10u>(ctx);
    r3 = 1;
    r4 = 0;
    r5 = 1;
    r6 = 30;
    r7 = 1;
    r8 = 64;
    ctx->lr = 0x805B07FCu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8016E37Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
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
    r3 = 2;
    r4 = 0;
    r5 = 1;
    r6 = 2;
    r7 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x8017200Cu>(ctx);
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B58u>(ctx);
    r3 = 1;
    r4 = 2;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r3 = 1;
    r4 = 1;
    r5 = 1;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 1;
    r4 = 15;
    r5 = 8;
    r6 = 11;
    r7 = 10;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 1;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r3 = 1;
    r4 = 7;
    r5 = 7;
    r6 = 7;
    r7 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r3 = 1;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171DB8u>(ctx);
    r3 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B58u>(ctx);
    r3 = 2;
    r4 = 2;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r3 = 2;
    r4 = 255;
    r5 = 255;
    r6 = 255;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 2;
    r4 = 15;
    r5 = 6;
    r6 = 0;
    r7 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r3 = 2;
    r4 = 7;
    r5 = 7;
    r6 = 7;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r3 = 2;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171DB8u>(ctx);
    r3 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80171B58u>(ctx);
    r3 = 3;
    r4 = 2;
    r5 = 2;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80171FD0u>(ctx);
    r3 = 3;
    r4 = 1;
    r5 = 2;
    r6 = 4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017214Cu>(ctx);
    r3 = 3;
    r4 = 15;
    r5 = 8;
    r6 = 11;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171CE0u>(ctx);
    r3 = 3;
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171D60u>(ctx);
    r7 = r27;
    r3 = 3;
    r4 = 7;
    r5 = 7;
    r6 = 7;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80171D20u>(ctx);
    r6 = r28;
    r3 = 3;
    r4 = 0;
    r5 = 0;
    r7 = 1;
    r8 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    InvokeDirectCpu<0x80171DB8u>(ctx);
    r26 = MemoryInline::FlatRead32((r29 + 32));
    r4 = MemoryInline::FlatRead32(r30);
    r3 = r26;
    ctx->lr = 0x805B09E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8022EBE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_805B09E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B09F8;
    }
}

loc_805B09E8:
{
    r4 = MemoryInline::FlatRead32((r26 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    goto loc_805B09FC;
}

loc_805B09F8:
{
    r3 = 0;
}

loc_805B09FC:
{
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r1 + 72);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805B0A10u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
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
    r3 = (r1 + 72);
    r4 = 1;
    ctx->lr = 0x805B0A1Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
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
    r26 = MemoryInline::FlatRead32((r29 + 32));
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r3 = r26;
    ctx->lr = 0x805B0A2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8022EBE0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_805B0A30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B0A44;
    }
}

loc_805B0A34:
{
    r4 = MemoryInline::FlatRead32((r26 + 8));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r4_addr_3 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_3);
    goto loc_805B0A48;
}

loc_805B0A44:
{
    r3 = 0;
}

loc_805B0A48:
{
    r12 = MemoryInline::FlatRead32((r3 + 16));
    r4 = (r1 + 40);
    r12 = MemoryInline::FlatRead32((r12 + 16));
    ctr = r12;
    ctx->lr = 0x805B0A5Cu;
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
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
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
    r3 = (r1 + 40);
    r4 = 2;
    ctx->lr = 0x805B0A68u;
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
    ctx->gpr[12] = r12;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80170F2Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r12 = ctx->gpr[12];
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
    r3 = 0x809C0000u;
    r4 = 64;
    r3 = (r3 + 6904);
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80173234u>(ctx);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_805B0A80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805B0ACC;
    }
}

loc_805B0A84:
{
    r3 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80172858u>(ctx);
    r3 = 0;
    r4 = 4;
    r5 = 5;
    r6 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    r3 = 7;
    r4 = 0;
    r5 = 1;
    r6 = 0;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80172088u>(ctx);
    r3 = 1;
    r4 = 3;
    r5 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
    goto loc_805B0B14;
}

loc_805B0ACC:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r3 = (r3_rot_3 & 1);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x80172858u>(ctx);
    r3 = 1;
    r4 = 4;
    r5 = 5;
    r6 = 3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    InvokeDirectCpu<0x8017277Cu>(ctx);
    r3 = 4;
    r4 = 0;
    r5 = 1;
    r6 = 0;
    r7 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    InvokeDirectCpu<0x80172088u>(ctx);
    r3 = 1;
    r4 = 3;
    r5 = 0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    InvokeDirectCpu<0x80172824u>(ctx);
}

loc_805B0B14:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 116), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 116));
            r26 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 120));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 124));
            r28 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 128));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 132));
            r30 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 136));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 140));
    r0 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 148));
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
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x805B052C func_805B052C preserves=true fpr_mask=0x00000000
