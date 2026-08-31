#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070B490(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
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
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8070B490;

loc_8070B490:
{
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_3, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 65536;
    MemoryInline::WriteResolved32(guest_range_3, 68u, (r1 + 68), r0);
    r0 = -1;
    r4 = (r4 + -1);
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_3, 44u, (r1 + 44), r27);
        MemoryInline::WriteResolved32(guest_range_3, 48u, (r1 + 48), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_3, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_3, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_3, 56u, (r1 + 56), r30);
    }
    MemoryInline::WriteResolved32(guest_range_3, 60u, (r1 + 60), r31);
    r31 = r3;
    r27 = (r1 + 16);
    r28 = 0;
    r29 = 1;
    r30 = 4;
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 24u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 24u, (r1 + 24), r4);
        MemoryInline::WriteResolved16(guest_range_3, 26u, (r1 + 26), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 28u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r1 + 28), r4);
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r1 + 30), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 32u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 32u, (r1 + 32), r4);
        MemoryInline::WriteResolved16(guest_range_3, 34u, (r1 + 34), r0);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 36u, ((static_cast<uint32_t>(static_cast<uint16_t>(r4)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r1 + 36), r4);
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r1 + 38), r0);
    }
    goto loc_8070B5AC;
}

loc_8070B4E4:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r4 = r28;
    ctx->lr = 0x8070B4F0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80591138u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = 0;
    ctr = r30;
}

loc_8070B4F8:
{
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B508;
    }
}

loc_8070B504:
{
    goto loc_8070B5A0;
}

loc_8070B508:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B51C;
    }
}

loc_8070B518:
{
    goto loc_8070B5A0;
}

loc_8070B51C:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B530;
    }
}

loc_8070B52C:
{
    goto loc_8070B5A0;
}

loc_8070B530:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B544;
    }
}

loc_8070B540:
{
    goto loc_8070B5A0;
}

loc_8070B544:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B558;
    }
}

loc_8070B554:
{
    goto loc_8070B5A0;
}

loc_8070B558:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B56C;
    }
}

loc_8070B568:
{
    goto loc_8070B5A0;
}

loc_8070B56C:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B580;
    }
}

loc_8070B57C:
{
    goto loc_8070B5A0;
}

loc_8070B580:
{
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r29), static_cast<uint32_t>(r4));
    r0 = (r3 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8070B594;
    }
}

loc_8070B590:
{
    goto loc_8070B5A0;
}

loc_8070B594:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8070B4F8;
    }
}

loc_8070B59C:
{
    r4 = 0;
}

loc_8070B5A0:
{
    MemoryInline::FlatWrite16(r27, static_cast<uint16_t>(r4));
    r27 = (r27 + 2);
    r28 = (r28 + 1);
}

loc_8070B5AC:
{
    r0 = MemoryInline::FlatRead8((r31 + 226));
}

loc_8070B5B4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_8070B4E4;
    }
}

loc_8070B5B8:
{
    r29 = (r1 + 8);
    r28 = 0;
    goto loc_8070B5DC;
}

loc_8070B5C4:
{
    r3 = MemoryInline::FlatRead32((r31 + 220));
    r4 = r28;
    ctx->lr = 0x8070B5D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80591170u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    MemoryInline::FlatWrite16(r29, static_cast<uint16_t>(r3));
    r29 = (r29 + 2);
    r28 = (r28 + 1);
}

loc_8070B5DC:
{
    r0 = MemoryInline::FlatRead8((r31 + 226));
}

loc_8070B5E4:
{
    if ((static_cast<int32_t>(r28) < static_cast<int32_t>(r0))) {
        goto loc_8070B5C4;
    }
}

loc_8070B5E8:
{
    r8 = MemoryInline::FlatRead8((r31 + 226));
    r3 = 0;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_8070B5F4:
{
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8070B72C;
    }
}

loc_8070B5F8:
{
}

loc_8070B5FC:
{
    r5 = (r8 + -8);
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(8))) {
        goto loc_8070B6DC;
    }
}

loc_8070B604:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8070B620;
    }
}

loc_8070B60C:
{
    r4 = 0x80000000u;
    r0 = (r4 + -2);
}

loc_8070B618:
{
    if ((static_cast<int32_t>(r8) > static_cast<int32_t>(r0))) {
        goto loc_8070B620;
    }
}

loc_8070B61C:
{
    r6 = 1;
}

loc_8070B620:
{
}

loc_8070B624:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8070B6DC;
    }
}

loc_8070B628:
{
    r0 = (r5 + 7);
    r4 = (r1 + 16);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    r6 = (r1 + 24);
    r7 = (r1 + 8);
    ctr = r0;
}

loc_8070B644:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8070B6DC;
    }
}

loc_8070B648:
{
    guest_range_0 = MemoryInline::ResolveRangeHost(r4, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_0, 0u, r4);
    r3 = (r3 + 8);
    guest_range_1 = MemoryInline::ResolveRangeHost(r6, 0, 32u, false, true);
    MemoryInline::WriteResolved16(guest_range_1, 0u, r6, static_cast<uint16_t>(r0));
    guest_range_2 = MemoryInline::ResolveRangeHost(r7, 0, 16u, true, false);
    r0 = MemoryInline::ReadResolved16(guest_range_2, 0u, r7);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 2u, (r6 + 2), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 2u, (r4 + 2));
    MemoryInline::WriteResolved16(guest_range_1, 4u, (r6 + 4), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 2u, (r7 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 6u, (r6 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 4u, (r4 + 4));
    MemoryInline::WriteResolved16(guest_range_1, 8u, (r6 + 8), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 4u, (r7 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 10u, (r6 + 10), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 6u, (r4 + 6));
    MemoryInline::WriteResolved16(guest_range_1, 12u, (r6 + 12), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 6u, (r7 + 6));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 14u, (r6 + 14), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 8u, (r4 + 8));
    MemoryInline::WriteResolved16(guest_range_1, 16u, (r6 + 16), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 8u, (r7 + 8));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 18u, (r6 + 18), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 10u, (r4 + 10));
    MemoryInline::WriteResolved16(guest_range_1, 20u, (r6 + 20), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 10u, (r7 + 10));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 22u, (r6 + 22), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 12u, (r4 + 12));
    MemoryInline::WriteResolved16(guest_range_1, 24u, (r6 + 24), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 12u, (r7 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    MemoryInline::WriteResolved16(guest_range_1, 26u, (r6 + 26), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_0, 14u, (r4 + 14));
    r4 = (r4 + 16);
    MemoryInline::WriteResolved16(guest_range_1, 28u, (r6 + 28), static_cast<uint16_t>(r0));
    r0 = MemoryInline::ReadResolved16(guest_range_2, 14u, (r7 + 14));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r7 = (r7 + 16);
    MemoryInline::WriteResolved16(guest_range_1, 30u, (r6 + 30), static_cast<uint16_t>(r0));
    r6 = (r6 + 32);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8070B648;
    }
}

loc_8070B6DC:
{
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r7 = (r7_rot_1 & -2);
    r4 = (r1 + 16);
    r6 = (r1 + 8);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r5 = (r1 + 24);
    r4 = (r4 + r7);
    r5 = (r5 + r0);
    r6 = (r6 + r7);
    goto loc_8070B720;
}

loc_8070B700:
{
    r0 = MemoryInline::FlatRead16(r4);
    r4 = (r4 + 2);
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r0));
    r3 = (r3 + 1);
    r0 = MemoryInline::FlatRead16(r6);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r6 = (r6 + 2);
    MemoryInline::FlatWrite16((r5 + 2), static_cast<uint16_t>(r0));
    r5 = (r5 + 4);
}

loc_8070B720:
{
    r8 = MemoryInline::FlatRead8((r31 + 226));
}

loc_8070B728:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(r8))) {
        goto loc_8070B700;
    }
}

loc_8070B72C:
{
    r3 = 65536;
    r7 = (r1 + 24);
    r9 = (r3 + -1);
    r10 = 0;
    r3 = (r8 & 255);
    r6 = 0x808A0000u;
    r0 = 16;
    goto loc_8070B78C;
}

loc_8070B74C:
{
    r8 = (r6 + 5864);
    r5 = MemoryInline::FlatRead16(r7);
    r11 = 0;
    ctr = r0;
}

loc_8070B75C:
{
    r4 = MemoryInline::FlatRead32(r8);
}

loc_8070B764:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(r4))) {
        goto loc_8070B778;
    }
}

loc_8070B768:
{
}

loc_8070B76C:
{
    if ((static_cast<int32_t>(r9) <= static_cast<int32_t>(r11))) {
        goto loc_8070B784;
    }
}

loc_8070B770:
{
    r9 = r11;
    goto loc_8070B784;
}

loc_8070B778:
{
    r8 = (r8 + 4);
    r11 = (r11 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8070B75C;
    }
}

loc_8070B784:
{
    r7 = (r7 + 4);
    r10 = (r10 + 1);
}

loc_8070B78C:
{
}

loc_8070B790:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r3))) {
        goto loc_8070B74C;
    }
}

loc_8070B794:
{
    r0 = (r9 + 0);
}

loc_8070B79C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8070B7AC;
    }
}

loc_8070B7A0:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 240), static_cast<uint16_t>(r0));
    goto loc_8070B7C0;
}

loc_8070B7AC:
{
    r3 = 0x808A0000u;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r9), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r3 = (r3 + 5864);
    r3_addr_1 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_1);
    MemoryInline::FlatWrite16((r31 + 240), static_cast<uint16_t>(r0));
}

loc_8070B7C0:
{
    r0 = MemoryInline::FlatRead8((r31 + 226));
    r4 = (r1 + 24);
    r5 = 0;
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8070B7D4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8070B800;
    }
}

loc_8070B7D8:
{
    r3 = MemoryInline::FlatRead16((r31 + 240));
    r0 = MemoryInline::FlatRead16(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8070B7E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8070B7F8;
    }
}

loc_8070B7E8:
{
    r0 = MemoryInline::FlatRead16((r4 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r5));
}

loc_8070B7F0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8070B7F8;
    }
}

loc_8070B7F4:
{
    r5 = r0;
}

loc_8070B7F8:
{
    r4 = (r4 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8070B7D8;
    }
}

loc_8070B800:
{
    MemoryInline::FlatWrite16((r31 + 242), static_cast<uint16_t>(r5));
    r27 = MemoryInline::FlatRead32((r1 + 44));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r0 = MemoryInline::FlatRead32((r1 + 68));
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
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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

// RECOMP_GUEST_ABI gpr_read=0xF8000FFB gpr_write=0xF8000FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x03 cr_write=0x03 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8070B490 func_8070B490 preserves=true fpr_mask=0x00000000
