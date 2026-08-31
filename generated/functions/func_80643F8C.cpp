#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80643F8C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r8_rot_0 = 0;
    uint32_t r8_rot_1 = 0;
    uint32_t r8_rot_2 = 0;
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
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
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

    goto loc_80643F8C;

loc_80643F8C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    r5 = 0x809C0000u;
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
    r24 = r3;
    r25 = r4;
    r3 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 584));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80643FB8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80643FC4;
    }
}

loc_80643FBC:
{
    r30 = 0;
    goto loc_80644018;
}

loc_80643FC4:
{
    r23 = 0x809C0000u;
    r23 = (r23 + 7968);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80644014;
    }
}

loc_80643FD0:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x80643FE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    r12 = ctx->gpr[12];
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
    goto loc_80643FFC;
}

loc_80643FE8:
{
}

loc_80643FEC:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r23))) {
        goto loc_80643FF8;
    }
}

loc_80643FF0:
{
    r0 = 1;
    goto loc_80644008;
}

loc_80643FF8:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80643FFC:
{
}

loc_80644000:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80643FE8;
    }
}

loc_80644004:
{
    r0 = 0;
}

loc_80644008:
{
}

loc_8064400C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80644014;
    }
}

loc_80644010:
{
    goto loc_80644018;
}

loc_80644014:
{
    r30 = 0;
}

loc_80644018:
{
}

loc_8064401C:
{
    r3 = 0;
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(0))) {
        goto loc_80644034;
    }
}

loc_80644024:
{
    r0 = MemoryInline::FlatRead32((r30 + 644));
}

loc_8064402C:
{
    if ((static_cast<int32_t>(r25) >= static_cast<int32_t>(r0))) {
        goto loc_80644034;
    }
}

loc_80644030:
{
    r3 = 1;
}

loc_80644034:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80644038:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80644044;
    }
}

loc_8064403C:
{
    r3 = 0;
    goto loc_806441D4;
}

loc_80644044:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r31 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r31 + 5736));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80644054:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80644060;
    }
}

loc_80644058:
{
    r3 = 0;
    goto loc_806441D4;
}

loc_80644060:
{
    r28 = (r25 * 12);
    r23 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r23 + 8448));
    r4 = (r30 + r28);
    r22 = MemoryInline::FlatRead8((r4 + 501));
    r29 = MemoryInline::FlatRead8((r4 + 500));
    r5 = r22;
    r4 = r29;
    // inline leaf 0x806604D4 (20 guest instruction(s))
}

loc_inl0_0x806604D4:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl0_0x806604F0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl0_0x80660508;
    }
}

loc_inl0_0x806604F4:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 28));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_inl0_cont_806604D4;
}

loc_inl0_0x80660508:
{
    r4 = (r4 * 56);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_3 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 84));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl0_cont_806604D4:
{
    // end of inlined leaf 0x806604D4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(48));
}

loc_80644088:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80644094;
    }
}

loc_8064408C:
{
    r3 = 0;
    goto loc_806441D4;
}

loc_80644094:
{
    r3 = MemoryInline::FlatRead32((r23 + 8448));
    r4 = r29;
    r5 = r22;
    // inline leaf 0x80660574 (20 guest instruction(s))
}

loc_inl1_0x80660574:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl1_0x80660590:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x806605A8;
    }
}

loc_inl1_0x80660594:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_5 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 30));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_inl1_cont_80660574;
}

loc_inl1_0x806605A8:
{
    r4 = (r4 * 56);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 86));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl1_cont_80660574:
{
    // end of inlined leaf 0x80660574
    r0 = MemoryInline::FlatRead32((r24 + 5788));
    r27 = r3;
}

loc_806440B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806440C0;
    }
}

loc_806440B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_806440B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8064410C;
    }
}

loc_806440BC:
{
    goto loc_80644164;
}

loc_806440C0:
{
}

loc_806440C4:
{
    r0 = 1;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_806440E8;
    }
}

loc_806440CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
}

loc_806440D0:
{
    r3 = 0;
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806440DC;
    }
}

loc_806440D8:
{
    r3 = 1;
}

loc_806440DC:
{
}

loc_806440E0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806440E8;
    }
}

loc_806440E4:
{
    r0 = 0;
}

loc_806440E8:
{
}

loc_806440EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806440F4;
    }
}

loc_806440F0:
{
    r27 = -1;
}

loc_806440F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(-1));
}

loc_806440F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80644104;
    }
}

loc_806440FC:
{
    r26 = 4353;
    goto loc_80644164;
}

loc_80644104:
{
    r26 = (r27 + 9300);
    goto loc_80644164;
}

loc_8064410C:
{
    r3 = MemoryInline::FlatRead32((r23 + 8448));
    r4 = r29;
    r5 = r22;
    // inline leaf 0x80660574 (20 guest instruction(s))
}

loc_inl2_0x80660574:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r6 = (r6 + r0);
    r0 = MemoryInline::FlatRead8((r6 + 89));
}

loc_inl2_0x80660590:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_inl2_0x806605A8;
    }
}

loc_inl2_0x80660594:
{
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_8 & -8);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 30));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    goto loc_inl2_cont_80660574;
}

loc_inl2_0x806605A8:
{
    r4 = (r4 * 56);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(3));
    r0 = (r0_rot_9 & -8);
    r3 = (r3 + r4);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 86));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_inl2_cont_80660574:
{
    // end of inlined leaf 0x80660574
}

loc_80644120:
{
    r4 = 1;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-1))) {
        goto loc_80644148;
    }
}

loc_80644128:
{
    r0 = (r3 + -32);
    r5 = 0;
}

loc_80644134:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(9))) {
        goto loc_8064413C;
    }
}

loc_80644138:
{
    r5 = 1;
}

loc_8064413C:
{
}

loc_80644140:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(0))) {
        goto loc_80644148;
    }
}

loc_80644144:
{
    r4 = 0;
}

loc_80644148:
{
}

loc_8064414C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80644154;
    }
}

loc_80644150:
{
    r3 = -1;
}

loc_80644154:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_80644158:
{
    r26 = 4353;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80644164;
    }
}

loc_80644160:
{
    r26 = (r3 + 9368);
}

loc_80644164:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r24 + 5784));
    r8 = MemoryInline::FlatRead32((r3 + 8408));
    r3 = (r30 + r28);
    r6 = (r0 * 376);
    r9 = MemoryInline::FlatRead32((r3 + 504));
    r0 = MemoryInline::FlatRead32((r8 + 10524));
    r4 = (r27 + 1);
    r5 = r26;
    r0 = (r0 * 88);
    r3 = (r24 + r6);
    r4 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r6 = (r8 + r0);
    r7 = r25;
    r0 = MemoryInline::FlatRead8((r6 + 89));
    r3 = (r3 + 1224);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 134217727);
    r6 = (r30 + 656);
    r0 = (r0 - r29);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r8_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r8 = (r8_rot_1 & 134217727);
    ctx->lr = 0x806441BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
    InvokeDirectCpu<0x80642CA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
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
    r0 = MemoryInline::FlatRead32((r24 + 5784));
    r3 = 1;
    MemoryInline::FlatWrite32((r31 + 5736), r0);
    r4 = MemoryInline::FlatRead32((r24 + 5784));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r24 + 5784), r0);
}

loc_806441D4:
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
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
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
// RECOMP_REGISTRATION base 0x80643F8C func_80643F8C preserves=true fpr_mask=0x00000000
