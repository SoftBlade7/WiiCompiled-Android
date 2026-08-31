#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806706AC(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r17_rot_0 = 0;
    uint32_t r17_rot_1 = 0;
    uint32_t r17_rot_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_10 = 0;
    uint32_t r3_rot_11 = 0;
    uint32_t r3_rot_12 = 0;
    uint32_t r3_rot_13 = 0;
    uint32_t r3_rot_14 = 0;
    uint32_t r3_rot_15 = 0;
    uint32_t r3_rot_16 = 0;
    uint32_t r3_rot_17 = 0;
    uint32_t r3_rot_18 = 0;
    uint32_t r3_rot_19 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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

    goto loc_806706AC;

loc_806706AC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -1232), 0, 1240u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -1232), r1);
    r1 = (r1 + -1232);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 1236u, (r1 + 1236), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r17)) << 32) | static_cast<uint32_t>(r18)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1172u, (r1 + 1172), r17);
        MemoryInline::WriteResolved32(guest_range_0, 1176u, (r1 + 1176), r18);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1180u, (r1 + 1180), r19);
        MemoryInline::WriteResolved32(guest_range_0, 1184u, (r1 + 1184), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1188u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1188u, (r1 + 1188), r21);
        MemoryInline::WriteResolved32(guest_range_0, 1192u, (r1 + 1192), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1196u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1196u, (r1 + 1196), r23);
        MemoryInline::WriteResolved32(guest_range_0, 1200u, (r1 + 1200), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1204u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1204u, (r1 + 1204), r25);
        MemoryInline::WriteResolved32(guest_range_0, 1208u, (r1 + 1208), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1212u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1212u, (r1 + 1212), r27);
        MemoryInline::WriteResolved32(guest_range_0, 1216u, (r1 + 1216), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 1220u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 1220u, (r1 + 1220), r29);
        MemoryInline::WriteResolved32(guest_range_0, 1224u, (r1 + 1224), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 1228u, (r1 + 1228), r31);
    r18 = r4;
    r20 = r5;
    r19 = r6;
    r4 = (r1 + 20);
    r3 = r18;
    // inline leaf 0x801DE574 (11 guest instruction(s))
}

loc_inl0_0x801DE574:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 8192);
}

loc_inl0_0x801DE57C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x801DE590;
    }
}

loc_inl0_0x801DE580:
{
    r0 = 0;
    r3 = -13;
    MemoryInline::FlatWriteRam32(r4, r0);
    goto loc_inl0_cont_801DE574;
}

loc_inl0_0x801DE590:
{
    r0 = MemoryInline::FlatRead32((r3 + 236));
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
}

loc_inl0_cont_801DE574:
{
    // end of inlined leaf 0x801DE574
    r3 = r18;
    r5 = (r1 + 16);
    r4 = 0;
    // inline leaf 0x801DE43C (13 guest instruction(s))
}

loc_inl1_0x801DE43C:
{
}

loc_inl1_0x801DE440:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(2))) {
        goto loc_inl1_0x801DE450;
    }
}

loc_inl1_0x801DE444:
{
    r0 = MemoryInline::FlatRead8((r3 + 201));
}

loc_inl1_0x801DE44C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_inl1_0x801DE458;
    }
}

loc_inl1_0x801DE450:
{
    r3 = -3;
    goto loc_inl1_cont_801DE43C;
}

loc_inl1_0x801DE458:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r3 + r0);
    r3 = 0;
    r0 = MemoryInline::FlatRead32((r4 + 120));
    MemoryInline::FlatWriteRam32(r5, r0);
}

loc_inl1_cont_801DE43C:
{
    // end of inlined leaf 0x801DE43C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806706E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806706F8;
    }
}

loc_806706EC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r17 = r3;
    goto loc_80670894;
}

loc_806706F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80670700:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8067070C;
    }
}

loc_80670704:
{
    r17 = 1;
    goto loc_80670894;
}

loc_8067070C:
{
    r3 = r18;
    r5 = (r20 + 12);
    r4 = 0;
    r6 = 10260;
    ctx->lr = 0x80670720u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x801E4DECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670724:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670734;
    }
}

loc_80670728:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r17 = r3;
    goto loc_80670894;
}

loc_80670734:
{
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r17 = (r3 + -20);
    // inline leaf 0x801D2724 (3 guest instruction(s))
    r3 = 0x80250000u;
    r3 = (r3 + 12176);
    // end of inlined leaf 0x801D2724
    r5 = 0x808A0000u;
    r4 = r3;
    r3 = (r1 + 48);
    r6 = 20;
    r5 = (r5 + -22136);
    ctx->lr = 0x80670758u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x801D2ACCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r5 = r17;
    r3 = (r1 + 48);
    r4 = (r20 + 32);
    ctx->lr = 0x80670768u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x801D2D08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r3 = (r1 + 48);
    r4 = (r1 + 24);
    ctx->lr = 0x80670774u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x801D2D18u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    r0 = 2;
    r5 = (r20 + 12);
    r6 = (r1 + 24);
    r4 = 0;
    ctr = r0;
}

loc_80670788:
{
    r3 = MemoryInline::FlatRead8(r6);
    r0 = MemoryInline::FlatRead8(r5);
}

loc_80670794:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806707A0;
    }
}

loc_80670798:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_806707A0:
{
    r3 = MemoryInline::FlatRead8((r6 + 1));
    r0 = MemoryInline::FlatRead8((r5 + 1));
}

loc_806707AC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806707B8;
    }
}

loc_806707B0:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_806707B8:
{
    r3 = MemoryInline::FlatRead8((r6 + 2));
    r0 = MemoryInline::FlatRead8((r5 + 2));
}

loc_806707C4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806707D0;
    }
}

loc_806707C8:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_806707D0:
{
    r3 = MemoryInline::FlatRead8((r6 + 3));
    r0 = MemoryInline::FlatRead8((r5 + 3));
}

loc_806707DC:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_806707E8;
    }
}

loc_806707E0:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_806707E8:
{
    r3 = MemoryInline::FlatRead8((r6 + 4));
    r0 = MemoryInline::FlatRead8((r5 + 4));
}

loc_806707F4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670800;
    }
}

loc_806707F8:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_80670800:
{
    r3 = MemoryInline::FlatRead8((r6 + 5));
    r0 = MemoryInline::FlatRead8((r5 + 5));
}

loc_8067080C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670818;
    }
}

loc_80670810:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_80670818:
{
    r3 = MemoryInline::FlatRead8((r6 + 6));
    r0 = MemoryInline::FlatRead8((r5 + 6));
}

loc_80670824:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670830;
    }
}

loc_80670828:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_80670830:
{
    r3 = MemoryInline::FlatRead8((r6 + 7));
    r0 = MemoryInline::FlatRead8((r5 + 7));
}

loc_8067083C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670848;
    }
}

loc_80670840:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_80670848:
{
    r3 = MemoryInline::FlatRead8((r6 + 8));
    r0 = MemoryInline::FlatRead8((r5 + 8));
}

loc_80670854:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670860;
    }
}

loc_80670858:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_80670860:
{
    r3 = MemoryInline::FlatRead8((r6 + 9));
    r0 = MemoryInline::FlatRead8((r5 + 9));
}

loc_8067086C:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_80670878;
    }
}

loc_80670870:
{
    r0 = 0;
    goto loc_8067088C;
}

loc_80670878:
{
    r5 = (r5 + 10);
    r6 = (r6 + 10);
    r4 = (r4 + 9);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80670788;
    }
}

loc_80670888:
{
    r0 = 1;
}

loc_8067088C:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r17_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r17 = (r17_rot_1 & 134217727);
}

loc_80670894:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(0));
}

loc_80670898:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806708EC;
    }
}

loc_8067089C:
{
    r3 = r18;
    r4 = (r1 + 12);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    r4 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 1;
    ctx->lr = 0x806708B4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x801DEA58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806708B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806708C8;
    }
}

loc_806708BC:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r18 = r3;
    goto loc_806708CC;
}

loc_806708C8:
{
    r18 = 0;
}

loc_806708CC:
{
    r3 = r18;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl4_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl4_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl4_0x8023320C;
    }
}

loc_inl4_0x80233204:
{
}

loc_inl4_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl4_0x80233214;
    }
}

loc_inl4_0x8023320C:
{
    r3 = 1;
    goto loc_inl4_cont_802331F8;
}

loc_inl4_0x80233214:
{
    r3 = 0;
}

loc_inl4_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806708D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806708E4;
    }
}

loc_806708DC:
{
    r3 = r18;
    goto loc_80670BF4;
}

loc_806708E4:
{
    r3 = r17;
    goto loc_80670BF4;
}

loc_806708EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r19), static_cast<int32_t>(0));
}

loc_806708F0:
{
    r22 = MemoryInline::FlatRead32((r20 + 32));
    r21 = MemoryInline::FlatRead32((r20 + 36));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670AB8;
    }
}

loc_806708FC:
{
    r30 = 65536;
    r31 = 0x808B0000u;
    r20 = 0;
    r28 = 0x809C0000u;
    r31 = (r31 + 11400);
    r29 = (r30 + -29504);
}

loc_80670914:
{
    r4 = (r20 & 255);
    r5 = MemoryInline::FlatRead32((r28 + -10424));
    r0 = (r29 * r4);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 + -1380646912);
}

loc_80670934:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(20548))) {
        goto loc_80670A5C;
    }
}

loc_80670938:
{
    r0 = (r30 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r25 = (r3 + 56);
    r3 = (r25 + 65536);
    r3 = (r3 + -28744);
    // inline leaf 0x800EC150 (13 guest instruction(s))
}

loc_inl5_0x800EC150:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
    r4 = 0;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(21));
    r0 = (r0_rot_4 & 3);
}

loc_inl5_0x800EC160:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(1))) {
        goto loc_inl5_0x800EC174;
    }
}

loc_inl5_0x800EC164:
{
    r0 = MemoryInline::FlatRead32((r3 + 28));
}

loc_inl5_0x800EC16C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(0))) {
        goto loc_inl5_0x800EC174;
    }
}

loc_inl5_0x800EC170:
{
    r4 = 1;
}

loc_inl5_0x800EC174:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
}

loc_inl5_cont_800EC150:
{
    // end of inlined leaf 0x800EC150
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670958:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670A5C;
    }
}

loc_8067095C:
{
    r3 = (r25 + 65536);
    r3 = (r3 + -28744);
    ctx->lr = 0x80670968u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x800EC6BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r21 ^ r4);
    r0 = (r22 ^ r3);
    r0 = (r4 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80670A5C;
    }
}

loc_80670978:
{
    MemoryInline::FlatWriteRam32((r1 + 704), r31);
    r3 = (r1 + 712);
    r27 = MemoryInline::FlatRead32((r1 + 20));
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80670990u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r24 = (r25 + 65536);
    r23 = (r25 + 22984);
    r26 = 0;
    r24 = (r24 + -29104);
}

loc_806709A0:
{
    r0 = (r26 & 65535);
    r3 = (r1 + 704);
    r0 = (r0 * 448);
    r4 = (r25 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x806709B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806709BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80670A38;
    }
}

loc_806709C0:
{
    r4 = MemoryInline::FlatRead16((r1 + 728));
    r3 = (r23 + 13448);
    r0 = (r4 & 1);
}

loc_806709CC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806709D8;
    }
}

loc_806709D0:
{
    r0 = 0;
    goto loc_806709E8;
}

loc_806709D8:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806709DC:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806709E8;
    }
}

loc_806709E4:
{
    r0 = 1;
}

loc_806709E8:
{
}

loc_806709EC:
{
    r17 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80670A10;
    }
}

loc_806709F4:
{
    r0 = MemoryInline::FlatRead8((r1 + 814));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x800EB870 (9 guest instruction(s))
}

loc_inl6_0x800EB870:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_6 & 3);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_4 & 2097151);
}

loc_inl6_0x800EB880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl6_0x800EB88C;
    }
}

loc_inl6_0x800EB884:
{
    r3_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_5 & 1);
    goto loc_inl6_cont_800EB870;
}

loc_inl6_0x800EB88C:
{
    r3 = 0;
}

loc_inl6_cont_800EB870:
{
    // end of inlined leaf 0x800EB870
}

loc_80670A08:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80670A10;
    }
}

loc_80670A0C:
{
    r17 = 1;
}

loc_80670A10:
{
}

loc_80670A14:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(0))) {
        goto loc_80670A38;
    }
}

loc_80670A18:
{
    r0 = MemoryInline::FlatRead8((r1 + 814));
    r0 = (r0 * 12);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80670A2C:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_80670A38;
    }
}

loc_80670A30:
{
    r0 = 1;
    goto loc_80670A48;
}

loc_80670A38:
{
    r26 = (r26 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(30));
}

loc_80670A40:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806709A0;
    }
}

loc_80670A44:
{
    r0 = 0;
}

loc_80670A48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670A4C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670A5C;
    }
}

loc_80670A50:
{
    MemoryInline::FlatWrite32(r19, r20);
    r3 = 0;
    goto loc_80670BF4;
}

loc_80670A5C:
{
    r20 = (r20 + 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r20), static_cast<int32_t>(4));
}

loc_80670A64:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80670914;
    }
}

loc_80670A68:
{
    r3 = r18;
    r4 = (r1 + 8);
    // inline leaf 0x801DE4EC (4 guest instruction(s))
    r0 = MemoryInline::FlatRead32(r3);
    r3 = 0;
    MemoryInline::FlatWriteRam32(r4, r0);
    // end of inlined leaf 0x801DE4EC
    r4 = MemoryInline::FlatRead32((r1 + 8));
    r3 = 1;
    ctx->lr = 0x80670A80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    InvokeDirectCpu<0x801DEA58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670A84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670A94;
    }
}

loc_80670A88:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8023318Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r17 = r3;
    goto loc_80670A98;
}

loc_80670A94:
{
    r17 = 0;
}

loc_80670A98:
{
    r3 = r17;
    // inline leaf 0x802331F8 (9 guest instruction(s))
}

loc_inl8_0x802331F8:
{
    r0 = (r3 + -4);
}

loc_inl8_0x80233200:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1))) {
        goto loc_inl8_0x8023320C;
    }
}

loc_inl8_0x80233204:
{
}

loc_inl8_0x80233208:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_inl8_0x80233214;
    }
}

loc_inl8_0x8023320C:
{
    r3 = 1;
    goto loc_inl8_cont_802331F8;
}

loc_inl8_0x80233214:
{
    r3 = 0;
}

loc_inl8_cont_802331F8:
{
    // end of inlined leaf 0x802331F8
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80670AA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670AB0;
    }
}

loc_80670AA8:
{
    r3 = r17;
    goto loc_80670BF4;
}

loc_80670AB0:
{
    r3 = 1;
    goto loc_80670BF4;
}

loc_80670AB8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8464));
    ctx->lr = 0x80670AC4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80663618u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = (r21 ^ r4);
    r0 = (r22 ^ r3);
    r0 = (r4 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80670BF0;
    }
}

loc_80670AD4:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670AE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80670B04;
    }
}

loc_80670AE8:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r26 = (r3 + 56);
    goto loc_80670B08;
}

loc_80670B04:
{
    r26 = 0;
}

loc_80670B08:
{
    r3 = 0x808B0000u;
    r27 = MemoryInline::FlatRead32((r1 + 20));
    r3 = (r3 + 11400);
    MemoryInline::FlatWriteRam32((r1 + 248), r3);
    r3 = (r1 + 256);
    r4 = 0;
    r5 = 448;
    ctx->lr = 0x80670B28u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r24 = (r26 + 65536);
    r25 = (r26 + 22984);
    r28 = 0;
    r24 = (r24 + -29104);
}

loc_80670B38:
{
    r0 = (r28 & 65535);
    r3 = (r1 + 248);
    r0 = (r0 * 448);
    r4 = (r26 + r0);
    r4 = (r4 + 22992);
    ctx->lr = 0x80670B50u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x805196B0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80670B54:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80670BD0;
    }
}

loc_80670B58:
{
    r4 = MemoryInline::FlatRead16((r1 + 272));
    r3 = (r25 + 13448);
    r0 = (r4 & 1);
}

loc_80670B64:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80670B70;
    }
}

loc_80670B68:
{
    r0 = 0;
    goto loc_80670B80;
}

loc_80670B70:
{
    r0 = (r4 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670B74:
{
    r0 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670B80;
    }
}

loc_80670B7C:
{
    r0 = 1;
}

loc_80670B80:
{
}

loc_80670B84:
{
    r18 = 0;
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80670BA8;
    }
}

loc_80670B8C:
{
    r0 = MemoryInline::FlatRead8((r1 + 358));
    r0 = (r0 * 12);
    r3 = (r3 + r0);
    // inline leaf 0x800EB870 (9 guest instruction(s))
}

loc_inl9_0x800EB870:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r0 = (r0_rot_12 & 3);
    r3_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(21));
    r3 = (r3_rot_12 & 2097151);
}

loc_inl9_0x800EB880:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(3))) {
        goto loc_inl9_0x800EB88C;
    }
}

loc_inl9_0x800EB884:
{
    r3_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(30));
    r3 = (r3_rot_13 & 1);
    goto loc_inl9_cont_800EB870;
}

loc_inl9_0x800EB88C:
{
    r3 = 0;
}

loc_inl9_cont_800EB870:
{
    // end of inlined leaf 0x800EB870
}

loc_80670BA0:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80670BA8;
    }
}

loc_80670BA4:
{
    r18 = 1;
}

loc_80670BA8:
{
}

loc_80670BAC:
{
    if ((static_cast<int32_t>(r18) == static_cast<int32_t>(0))) {
        goto loc_80670BD0;
    }
}

loc_80670BB0:
{
    r0 = MemoryInline::FlatRead8((r1 + 358));
    r0 = (r0 * 12);
    r3 = (r24 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_80670BC4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(r0))) {
        goto loc_80670BD0;
    }
}

loc_80670BC8:
{
    r0 = 1;
    goto loc_80670BE0;
}

loc_80670BD0:
{
    r28 = (r28 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(30));
}

loc_80670BD8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80670B38;
    }
}

loc_80670BDC:
{
    r0 = 0;
}

loc_80670BE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80670BE4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80670BF0;
    }
}

loc_80670BE8:
{
    r3 = 0;
    goto loc_80670BF4;
}

loc_80670BF0:
{
    r3 = 1;
}

loc_80670BF4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 1172), 0, 68u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r17 = resolved_pair.first;
            r18 = resolved_pair.second;
        } else {
            r17 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r1 + 1172));
            r18 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r1 + 1176));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r1 + 1180));
            r20 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r1 + 1184));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r1 + 1188));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r1 + 1192));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r1 + 1196));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r1 + 1200));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r1 + 1204));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r1 + 1208));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r1 + 1212));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r1 + 1216));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r1 + 1220));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r1 + 1224));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 1228));
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 1236));
    ctx->lr = r0;
    r1 = (r1 + 1232);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
// RECOMP_REGISTRATION base 0x806706AC func_806706AC preserves=true fpr_mask=0x00000000
