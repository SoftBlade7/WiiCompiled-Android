#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8078CA5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r7_addr_0 = 0;
    uint32_t r7_addr_1 = 0;
    uint32_t r7_addr_2 = 0;
    uint32_t r7_addr_3 = 0;
    uint32_t r7_addr_4 = 0;
    uint32_t r7_addr_5 = 0;
    uint32_t r7_addr_6 = 0;
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

    goto loc_8078CA5C;

loc_8078CA5C:
{
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_4, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_4, 52u, (r1 + 52), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_4, 16u, (r1 + 16), r24);
        MemoryInline::WriteResolved32(guest_range_4, 20u, (r1 + 20), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_4, 24u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_4, 28u, (r1 + 28), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_4, 32u, (r1 + 32), r28);
        MemoryInline::WriteResolved32(guest_range_4, 36u, (r1 + 36), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_4, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_4, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_4, 44u, (r1 + 44), r31);
    }
    r27 = r3;
    ctx->lr = 0x8078CA74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r3 = 0x808D0000u;
    r4 = 0x805A0000u;
    r3 = (r3 + 6224);
    r5 = 0x80510000u;
    MemoryInline::FlatWrite32(r27, r3);
    r3 = (r27 + 64);
    r4 = (r4 + 8112);
    r5 = (r5 + 13824);
    r6 = 12;
    r7 = 12;
    ctx->lr = 0x8078CAA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    r4 = 0x80520000u;
    r5 = 0x80520000u;
    r3 = (r27 + 432);
    r6 = 12;
    r4 = (r4 + -15500);
    r5 = (r5 + -15564);
    r7 = 5;
    ctx->lr = 0x8078CAC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80020FF4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807BD1D0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[24] = r24;
    ctx->gpr[25] = r25;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x807C71D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r24 = ctx->gpr[24];
    r25 = ctx->gpr[25];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    r0 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost((r27 + 16), 0, 337u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r27 + 16), r0);
    r3 = 0x809C0000u;
    MemoryInline::WriteResolved32(guest_range_0, 192u, (r27 + 208), r0);
    MemoryInline::WriteResolved32(guest_range_0, 240u, (r27 + 256), r0);
    MemoryInline::WriteResolved32(guest_range_0, 288u, (r27 + 304), r0);
    MemoryInline::WriteResolved32(guest_range_0, 4u, (r27 + 20), r0);
    MemoryInline::WriteResolved32(guest_range_0, 196u, (r27 + 212), r0);
    MemoryInline::WriteResolved32(guest_range_0, 244u, (r27 + 260), r0);
    MemoryInline::WriteResolved32(guest_range_0, 292u, (r27 + 308), r0);
    MemoryInline::WriteResolved32(guest_range_0, 8u, (r27 + 24), r0);
    MemoryInline::WriteResolved32(guest_range_0, 200u, (r27 + 216), r0);
    MemoryInline::WriteResolved32(guest_range_0, 248u, (r27 + 264), r0);
    MemoryInline::WriteResolved32(guest_range_0, 296u, (r27 + 312), r0);
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r27 + 28), r0);
    MemoryInline::WriteResolved32(guest_range_0, 204u, (r27 + 220), r0);
    MemoryInline::WriteResolved32(guest_range_0, 252u, (r27 + 268), r0);
    MemoryInline::WriteResolved32(guest_range_0, 300u, (r27 + 316), r0);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r27 + 32), r0);
    MemoryInline::WriteResolved32(guest_range_0, 208u, (r27 + 224), r0);
    MemoryInline::WriteResolved32(guest_range_0, 256u, (r27 + 272), r0);
    MemoryInline::WriteResolved32(guest_range_0, 304u, (r27 + 320), r0);
    MemoryInline::WriteResolved32(guest_range_0, 20u, (r27 + 36), r0);
    MemoryInline::WriteResolved32(guest_range_0, 212u, (r27 + 228), r0);
    MemoryInline::WriteResolved32(guest_range_0, 260u, (r27 + 276), r0);
    MemoryInline::WriteResolved32(guest_range_0, 308u, (r27 + 324), r0);
    MemoryInline::WriteResolved32(guest_range_0, 24u, (r27 + 40), r0);
    MemoryInline::WriteResolved32(guest_range_0, 216u, (r27 + 232), r0);
    MemoryInline::WriteResolved32(guest_range_0, 264u, (r27 + 280), r0);
    MemoryInline::WriteResolved32(guest_range_0, 312u, (r27 + 328), r0);
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r27 + 44), r0);
    MemoryInline::WriteResolved32(guest_range_0, 220u, (r27 + 236), r0);
    MemoryInline::WriteResolved32(guest_range_0, 268u, (r27 + 284), r0);
    MemoryInline::WriteResolved32(guest_range_0, 316u, (r27 + 332), r0);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r27 + 48), r0);
    MemoryInline::WriteResolved32(guest_range_0, 224u, (r27 + 240), r0);
    MemoryInline::WriteResolved32(guest_range_0, 272u, (r27 + 288), r0);
    MemoryInline::WriteResolved32(guest_range_0, 320u, (r27 + 336), r0);
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r27 + 52), r0);
    MemoryInline::WriteResolved32(guest_range_0, 228u, (r27 + 244), r0);
    MemoryInline::WriteResolved32(guest_range_0, 276u, (r27 + 292), r0);
    MemoryInline::WriteResolved32(guest_range_0, 324u, (r27 + 340), r0);
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r27 + 56), r0);
    MemoryInline::WriteResolved32(guest_range_0, 232u, (r27 + 248), r0);
    MemoryInline::WriteResolved32(guest_range_0, 280u, (r27 + 296), r0);
    MemoryInline::WriteResolved32(guest_range_0, 328u, (r27 + 344), r0);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r27 + 60), r0);
    MemoryInline::WriteResolved32(guest_range_0, 236u, (r27 + 252), r0);
    MemoryInline::WriteResolved32(guest_range_0, 284u, (r27 + 300), r0);
    MemoryInline::WriteResolved32(guest_range_0, 332u, (r27 + 348), r0);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2928));
}

loc_8078CB9C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(11))) {
        goto loc_8078CBC4;
    }
}

loc_8078CBA0:
{
    r0 = MemoryInline::FlatRead32((r3 + 2932));
}

loc_8078CBA8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(11))) {
        goto loc_8078CBC4;
    }
}

loc_8078CBAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(12));
}

loc_8078CBB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8078CBC4;
    }
}

loc_8078CBB4:
{
    r0 = 1;
    MemoryInline::WriteResolved8(guest_range_0, 336u, (r27 + 352), static_cast<uint8_t>(r0));
    ctx->lr = 0x8078CBC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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
    InvokeDirectCpu<0x80787EB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
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
    goto loc_8078CBCC;
}

loc_8078CBC4:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 336u, (r27 + 352), static_cast<uint8_t>(r0));
}

loc_8078CBCC:
{
    r3 = 0x809C0000u;
    r6 = 0;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r4 = MemoryInline::FlatRead8((r3 + 36));
}

loc_8078CBE0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8078CD14;
    }
}

loc_8078CBE4:
{
}

loc_8078CBE8:
{
    r0 = (r4 + 248);
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(8))) {
        goto loc_8078CCDC;
    }
}

loc_8078CBF0:
{
    r5 = (r0 & 255);
    r3 = 0x809C0000u;
    r0 = (r5 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8078CC08:
{
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(0))) {
        goto loc_8078CCDC;
    }
}

loc_8078CC0C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r3 + -10448), 0, 4u, true, false);
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r5 = (r6 & 255);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & 1020);
    r6 = (r6 + 8);
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r5 = (r27 + r5);
    r7_addr_2 = (r7 + r0);
    r7 = MemoryInline::FlatRead32(r7_addr_2);
    r7 = MemoryInline::FlatRead8((r7 + 32));
    guest_range_3 = MemoryInline::ResolveRangeHost((r5 + 353), 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_3, 0u, (r5 + 353), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 4));
    r7 = MemoryInline::FlatRead8((r7 + 32));
    MemoryInline::WriteResolved8(guest_range_3, 1u, (r5 + 354), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 8));
    r7 = MemoryInline::FlatRead8((r7 + 32));
    MemoryInline::WriteResolved8(guest_range_3, 2u, (r5 + 355), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = MemoryInline::FlatRead8((r7 + 32));
    MemoryInline::WriteResolved8(guest_range_3, 3u, (r5 + 356), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 16));
    r7 = MemoryInline::FlatRead8((r7 + 32));
    MemoryInline::WriteResolved8(guest_range_3, 4u, (r5 + 357), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 20));
    r7 = MemoryInline::FlatRead8((r7 + 32));
    MemoryInline::WriteResolved8(guest_range_3, 5u, (r5 + 358), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 24));
    r7 = MemoryInline::FlatRead8((r7 + 32));
    MemoryInline::WriteResolved8(guest_range_3, 6u, (r5 + 359), static_cast<uint8_t>(r7));
    r7 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r3 + -10448));
    r7 = MemoryInline::FlatRead32((r7 + 12));
    r7 = (r7 + r0);
    r7 = MemoryInline::FlatRead32((r7 + 28));
    r0 = MemoryInline::FlatRead8((r7 + 32));
    MemoryInline::WriteResolved8(guest_range_3, 7u, (r5 + 360), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8078CC0C;
    }
}

loc_8078CCDC:
{
    r8 = 0x809C0000u;
    goto loc_8078CD08;
}

loc_8078CCE4:
{
    r3 = MemoryInline::FlatRead32((r8 + -10448));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r0 = (r6 & 255);
    r6 = (r6 + 1);
    r7 = MemoryInline::FlatRead32((r3 + 12));
    r3 = (r27 + r0);
    r7_addr_5 = (r7 + r5);
    r5 = MemoryInline::FlatRead32(r7_addr_5);
    r0 = MemoryInline::FlatRead8((r5 + 32));
    MemoryInline::FlatWrite8((r3 + 353), static_cast<uint8_t>(r0));
}

loc_8078CD08:
{
    r0 = (r6 & 255);
}

loc_8078CD10:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r4))) {
        goto loc_8078CCE4;
    }
}

loc_8078CD14:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r27 + 368), r0);
    r28 = 0;
    r29 = 0;
    r30 = 0x809C0000u;
    r31 = 65536;
    r24 = 0x809C0000u;
    r26 = 0;
    r25 = 1;
}

loc_8078CD38:
{
    r4 = MemoryInline::FlatRead32((r30 + -10424));
    r0 = MemoryInline::FlatRead16((r4 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8078CD44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078CD60;
    }
}

loc_8078CD48:
{
    r3 = (r0 & 255);
    r0 = (r31 + -27664);
    r0 = (r0 * r3);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_8078CD64;
}

loc_8078CD60:
{
    r3 = 0;
}

loc_8078CD64:
{
    r5 = MemoryInline::FlatRead32((r24 + -10456));
    r4 = r28;
    r5 = MemoryInline::FlatRead32((r5 + 2920));
    ctx->lr = 0x8078CD74u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80548E30u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
}

loc_8078CD78:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8078CDB8;
    }
}

loc_8078CD7C:
{
    r0 = MemoryInline::FlatRead8((r3 + 86));
}

loc_8078CD84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8078CDB8;
    }
}

loc_8078CD88:
{
    r4 = (r27 + r28);
    r5 = (r27 + r29);
    MemoryInline::FlatWrite8((r4 + 424), static_cast<uint8_t>(r25));
    r0 = MemoryInline::FlatRead16((r3 + 80));
    MemoryInline::FlatWrite16((r5 + 436), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 82));
    MemoryInline::FlatWrite8((r5 + 438), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead16((r3 + 84));
    MemoryInline::FlatWrite16((r5 + 440), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 86));
    MemoryInline::FlatWrite8((r5 + 442), static_cast<uint8_t>(r0));
    goto loc_8078CDC0;
}

loc_8078CDB8:
{
    r3 = (r27 + r28);
    MemoryInline::FlatWrite8((r3 + 424), static_cast<uint8_t>(r26));
}

loc_8078CDC0:
{
    r28 = (r28 + 1);
    r29 = (r29 + 12);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(5));
}

loc_8078CDCC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8078CD38;
    }
}

loc_8078CDD0:
{
    r0 = 12;
    guest_range_1 = MemoryInline::ResolveRangeHost((r27 + 376), 0, 117u, false, true);
    MemoryInline::WriteResolved8(guest_range_1, 116u, (r27 + 492), static_cast<uint8_t>(r0));
    r0 = 4;
    r3 = r27;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 0u, (r27 + 376), r0);
        MemoryInline::WriteResolved32(guest_range_1, 4u, (r27 + 380), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 8u, (r27 + 384), r0);
        MemoryInline::WriteResolved32(guest_range_1, 12u, (r27 + 388), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 16u, (r27 + 392), r0);
        MemoryInline::WriteResolved32(guest_range_1, 20u, (r27 + 396), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 24u, (r27 + 400), r0);
        MemoryInline::WriteResolved32(guest_range_1, 28u, (r27 + 404), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 32u, (r27 + 408), r0);
        MemoryInline::WriteResolved32(guest_range_1, 36u, (r27 + 412), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_1, 40u, (r27 + 416), r0);
        MemoryInline::WriteResolved32(guest_range_1, 44u, (r27 + 420), r0);
    }
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 0u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_5, 0u, (r1 + 16));
            r25 = MemoryInline::ReadResolved32(guest_range_5, 4u, (r1 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 8u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_5, 8u, (r1 + 24));
            r27 = MemoryInline::ReadResolved32(guest_range_5, 12u, (r1 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 16u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_5, 16u, (r1 + 32));
            r29 = MemoryInline::ReadResolved32(guest_range_5, 20u, (r1 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 24u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_5, 24u, (r1 + 40));
            r31 = MemoryInline::ReadResolved32(guest_range_5, 28u, (r1 + 44));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_5, 36u, (r1 + 52));
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
// RECOMP_REGISTRATION base 0x8078CA5C func_8078CA5C preserves=true fpr_mask=0x00000000
