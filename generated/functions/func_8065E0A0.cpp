#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065E0A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_15 = 0;
    uint32_t r0_rot_16 = 0;
    uint32_t r0_rot_17 = 0;
    uint32_t r0_rot_18 = 0;
    uint32_t r0_rot_19 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_20 = 0;
    uint32_t r0_rot_21 = 0;
    uint32_t r0_rot_22 = 0;
    uint32_t r0_rot_23 = 0;
    uint32_t r0_rot_24 = 0;
    uint32_t r0_rot_25 = 0;
    uint32_t r0_rot_26 = 0;
    uint32_t r0_rot_27 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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
    uint32_t xer = ctx->xer;

    goto loc_8065E0A0;

loc_8065E0A0:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    r0 = 0x809C0000u;
    r4 = r0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 72u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r1 + 72), r14);
        MemoryInline::WriteResolved32(guest_range_1, 76u, (r1 + 76), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 80u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_1, 80u, (r1 + 80), r16);
        MemoryInline::WriteResolved32(guest_range_1, 84u, (r1 + 84), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 88u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_1, 88u, (r1 + 88), r18);
        MemoryInline::WriteResolved32(guest_range_1, 92u, (r1 + 92), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 96u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_1, 96u, (r1 + 96), r20);
        MemoryInline::WriteResolved32(guest_range_1, 100u, (r1 + 100), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 104u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_1, 104u, (r1 + 104), r22);
        MemoryInline::WriteResolved32(guest_range_1, 108u, (r1 + 108), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 112u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_1, 112u, (r1 + 112), r24);
        MemoryInline::WriteResolved32(guest_range_1, 116u, (r1 + 116), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 120u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_1, 120u, (r1 + 120), r26);
        MemoryInline::WriteResolved32(guest_range_1, 124u, (r1 + 124), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 128u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_1, 128u, (r1 + 128), r28);
        MemoryInline::WriteResolved32(guest_range_1, 132u, (r1 + 132), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 136u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_1, 136u, (r1 + 136), r30);
        MemoryInline::WriteResolved32(guest_range_1, 140u, (r1 + 140), r31);
    }
    r25 = 0;
    r31 = 0x809C0000u;
    r15 = r3;
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r0);
    r4 = (r4 + 12104);
    r0 = 0;
    r24 = r15;
    MemoryInline::WriteResolved32(guest_range_1, 56u, (r1 + 56), r4);
    r31 = (r31 + 13984);
    r26 = 0;
    r20 = 0;
    MemoryInline::WriteResolved32(guest_range_1, 60u, (r1 + 60), r0);
    r30 = 0x809C0000u;
    r27 = 0x809C0000u;
    r28 = 0x809C0000u;
    r14 = 0x809C0000u;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 112), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r3 + 112), r25);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r3 + 116), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r3 + 120), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 124), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 128), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r3 + 132), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r3 + 136), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r3 + 140), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r3 + 144), r25);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r3 + 148), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r3 + 152), r25);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r3 + 156), r25);
    }
}

loc_8065E128:
{
    r3 = 0x809C0000u;
    r4 = r20;
    r0 = MemoryInline::FlatRead32((r3 + 13848));
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13936));
    r18 = 0;
    r5 = (r0 + r25);
    r21 = 0;
    r17 = MemoryInline::FlatRead32((r5 + 92));
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BB380u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r19 = r3;
    r16 = r15;
    r22 = 0;
    goto loc_8065E4D0;
}

loc_8065E164:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E170u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E174:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E194;
    }
}

loc_8065E178:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E184u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065E1B4;
}

loc_8065E194:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E1A4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E1B0;
    }
}

loc_8065E1A8:
{
    r0 = MemoryInline::FlatRead8((r16 + 17));
    goto loc_8065E1B4;
}

loc_8065E1B0:
{
    r0 = 20;
}

loc_8065E1B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8065E1B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E30C;
    }
}

loc_8065E1BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E1C8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E1CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E1EC;
    }
}

loc_8065E1D0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E1DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065E20C;
}

loc_8065E1EC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E1FC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E208;
    }
}

loc_8065E200:
{
    r0 = MemoryInline::FlatRead8((r16 + 17));
    goto loc_8065E20C;
}

loc_8065E208:
{
    r0 = 20;
}

loc_8065E20C:
{
    r0 = (r0 * 28);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r0));
}

loc_8065E21C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E30C;
    }
}

loc_8065E220:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E22Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E230:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E250;
    }
}

loc_8065E234:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E240u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_7 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 3));
    goto loc_8065E270;
}

loc_8065E250:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E260:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E26C;
    }
}

loc_8065E264:
{
    r0 = MemoryInline::FlatRead8((r16 + 19));
    goto loc_8065E270;
}

loc_8065E26C:
{
    r0 = 0;
}

loc_8065E270:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8065E274:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E294;
    }
}

loc_8065E278:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8065E27C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E2F8;
    }
}

loc_8065E280:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_8065E284:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E300;
    }
}

loc_8065E288:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(6));
}

loc_8065E28C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E308;
    }
}

loc_8065E290:
{
    goto loc_8065E30C;
}

loc_8065E294:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E2A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E2A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E2C4;
    }
}

loc_8065E2A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E2B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065E2E4;
}

loc_8065E2C4:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E2D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E2E0;
    }
}

loc_8065E2D8:
{
    r0 = MemoryInline::FlatRead8((r16 + 17));
    goto loc_8065E2E4;
}

loc_8065E2E0:
{
    r0 = 20;
}

loc_8065E2E4:
{
    r0 = (r0 * 28);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r18 = (r18 + r0);
    goto loc_8065E30C;
}

loc_8065E2F8:
{
    r18 = (r18 + 3);
    goto loc_8065E30C;
}

loc_8065E300:
{
    r18 = (r18 + 2);
    goto loc_8065E30C;
}

loc_8065E308:
{
    r18 = (r18 + 1);
}

loc_8065E30C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r3));
}

loc_8065E31C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E334;
    }
}

loc_8065E320:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r3));
}

loc_8065E330:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E350;
    }
}

loc_8065E334:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E340u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_12 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8065E370;
}

loc_8065E350:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E360:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E36C;
    }
}

loc_8065E364:
{
    r0 = MemoryInline::FlatRead8((r16 + 18));
    goto loc_8065E370;
}

loc_8065E36C:
{
    r0 = 20;
}

loc_8065E370:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_8065E374:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E49C;
    }
}

loc_8065E378:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r3));
}

loc_8065E388:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E3A0;
    }
}

loc_8065E38C:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r3));
}

loc_8065E39C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E3BC;
    }
}

loc_8065E3A0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E3ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_14 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 2));
    goto loc_8065E3DC;
}

loc_8065E3BC:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E3CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E3D8;
    }
}

loc_8065E3D0:
{
    r0 = MemoryInline::FlatRead8((r16 + 18));
    goto loc_8065E3DC;
}

loc_8065E3D8:
{
    r0 = 20;
}

loc_8065E3DC:
{
    r0 = (r0 * 28);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(r0));
}

loc_8065E3EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E49C;
    }
}

loc_8065E3F0:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r3));
}

loc_8065E400:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E418;
    }
}

loc_8065E404:
{
    r3 = MemoryInline::FlatRead32((r27 + 8408));
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80659D58u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r3));
}

loc_8065E414:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065E434;
    }
}

loc_8065E418:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->lr = 0x8065E424u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_16 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 4));
    goto loc_8065E454;
}

loc_8065E434:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r22;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E444:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E450;
    }
}

loc_8065E448:
{
    r0 = MemoryInline::FlatRead8((r16 + 20));
    goto loc_8065E454;
}

loc_8065E450:
{
    r0 = 0;
}

loc_8065E454:
{
}

loc_8065E458:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8065E488;
    }
}

loc_8065E45C:
{
}

loc_8065E460:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_8065E488;
    }
}

loc_8065E464:
{
}

loc_8065E468:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_8065E490;
    }
}

loc_8065E46C:
{
}

loc_8065E470:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(6))) {
        goto loc_8065E490;
    }
}

loc_8065E474:
{
}

loc_8065E478:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_8065E498;
    }
}

loc_8065E47C:
{
}

loc_8065E480:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(7))) {
        goto loc_8065E498;
    }
}

loc_8065E484:
{
    goto loc_8065E49C;
}

loc_8065E488:
{
    r21 = (r21 + 3);
    goto loc_8065E49C;
}

loc_8065E490:
{
    r21 = (r21 + 2);
    goto loc_8065E49C;
}

loc_8065E498:
{
    r21 = (r21 + 1);
}

loc_8065E49C:
{
}

loc_8065E4A0:
{
    if ((static_cast<uint32_t>(r20) != static_cast<uint32_t>(13))) {
        goto loc_8065E4C8;
    }
}

loc_8065E4A4:
{
    r3 = MemoryInline::FlatRead32((r28 + 6392));
    r4 = r22;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80590100
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
}

loc_8065E4C0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8065E4C8;
    }
}

loc_8065E4C4:
{
    r19 = 1;
}

loc_8065E4C8:
{
    r16 = (r16 + 8);
    r22 = (r22 + 1);
}

loc_8065E4D0:
{
    r3 = MemoryInline::FlatRead32((r14 + -10456));
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r22), static_cast<uint32_t>(r0));
}

loc_8065E4DC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065E164;
    }
}

loc_8065E4E0:
{
    MemoryInline::FlatWrite32((r24 + 208), r18);
    r3 = r15;
    r4 = r20;
    r5 = (r1 + 8);
    MemoryInline::FlatWrite32((r24 + 212), r21);
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 48u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_2, 4u, (r1 + 12), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 16), r26);
        MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 20), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 16u, (r1 + 24), r26);
        MemoryInline::WriteResolved32(guest_range_2, 20u, (r1 + 28), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 24u, (r1 + 32), r26);
        MemoryInline::WriteResolved32(guest_range_2, 28u, (r1 + 36), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 32u, (r1 + 40), r26);
        MemoryInline::WriteResolved32(guest_range_2, 36u, (r1 + 44), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_2, 40u, (r1 + 48), r26);
        MemoryInline::WriteResolved32(guest_range_2, 44u, (r1 + 52), r26);
    }
    ctx->lr = 0x8065E528u;
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
    InvokeDirectCpu<0x8065F6DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
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
    r29 = r3;
    r3 = MemoryInline::FlatRead32((r1 + 56));
    r4 = (r21 + r17);
    r0 = MemoryInline::FlatRead32((r1 + 60));
    r21 = (r18 + r4);
    r23 = (r1 + 8);
    r22 = (r3 + r0);
    r18 = 0;
    r17 = 0;
    goto loc_8065E604;
}

loc_8065E550:
{
    r16 = MemoryInline::FlatRead32(r23);
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r16;
    ctx->lr = 0x8065E560u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x806548A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8065E564:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065E584;
    }
}

loc_8065E568:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r16;
    ctx->lr = 0x8065E574u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654918u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(3));
    r0 = (r0_rot_22 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 1));
    goto loc_8065E5AC;
}

loc_8065E584:
{
    r3 = MemoryInline::FlatRead32((r30 + 8016));
    r4 = r16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80654820u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8065E594:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8065E5A8;
    }
}

loc_8065E598:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(3));
    r0 = (r0_rot_23 & -8);
    r3 = (r15 + r0);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    goto loc_8065E5AC;
}

loc_8065E5A8:
{
    r0 = 20;
}

loc_8065E5AC:
{
    r0 = (r0 * 28);
}

loc_8065E5B4:
{
    r3 = (r31 + r0);
    r4 = MemoryInline::FlatRead32((r3 + 8));
    if ((static_cast<int32_t>(r19) != static_cast<int32_t>(0))) {
        goto loc_8065E5EC;
    }
}

loc_8065E5C0:
{
    r3 = (r4 + r18);
    r0 = MemoryInline::FlatRead32((r22 + 4));
    r3 = (r21 + r3);
}

loc_8065E5D0:
{
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(r0))) {
        goto loc_8065E5EC;
    }
}

loc_8065E5D4:
{
    r0_rot_25 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_25 & -4);
    r18 = (r18 + r4);
    r3 = (r15 + r0);
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 112), r0);
    goto loc_8065E5FC;
}

loc_8065E5EC:
{
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r16), static_cast<uint32_t>(2));
    r0 = (r0_rot_26 & -4);
    r3 = (r15 + r0);
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 112), r0);
}

loc_8065E5FC:
{
    r23 = (r23 + 4);
    r17 = (r17 + 1);
}

loc_8065E604:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r17), static_cast<uint32_t>(r29));
}

loc_8065E608:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065E550;
    }
}

loc_8065E60C:
{
    r20 = (r20 + 1);
    r3 = MemoryInline::FlatRead32((r1 + 60));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r20), static_cast<uint32_t>(15));
}

loc_8065E618:
{
    MemoryInline::FlatWrite32((r24 + 216), r18);
    r3 = (r3 + 116);
    r24 = (r24 + 12);
    MemoryInline::FlatWriteRam32((r1 + 60), r3);
    r25 = (r25 + 36);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8065E128;
    }
}

loc_8065E630:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 72), 0, 80u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_3, 0u, (r1 + 72));
            r15 = MemoryInline::ReadResolved32(guest_range_3, 4u, (r1 + 76));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_3, 8u, (r1 + 80));
            r17 = MemoryInline::ReadResolved32(guest_range_3, 12u, (r1 + 84));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_3, 16u, (r1 + 88));
            r19 = MemoryInline::ReadResolved32(guest_range_3, 20u, (r1 + 92));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_3, 24u, (r1 + 96));
            r21 = MemoryInline::ReadResolved32(guest_range_3, 28u, (r1 + 100));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_3, 32u, (r1 + 104));
            r23 = MemoryInline::ReadResolved32(guest_range_3, 36u, (r1 + 108));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_3, 40u, (r1 + 112));
            r25 = MemoryInline::ReadResolved32(guest_range_3, 44u, (r1 + 116));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_3, 48u, (r1 + 120));
            r27 = MemoryInline::ReadResolved32(guest_range_3, 52u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_3, 56u, (r1 + 128));
            r29 = MemoryInline::ReadResolved32(guest_range_3, 60u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_3, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_3, 64u, (r1 + 136));
            r31 = MemoryInline::ReadResolved32(guest_range_3, 68u, (r1 + 140));
        }
    }
    r0 = MemoryInline::ReadResolved32(guest_range_3, 76u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFC1FB gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8065E0A0 func_8065E0A0 preserves=true fpr_mask=0x00000000
