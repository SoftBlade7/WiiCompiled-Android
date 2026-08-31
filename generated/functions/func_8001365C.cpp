#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001365C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_28 = 0;
    uint32_t r0_rot_29 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_30 = 0;
    uint32_t r0_rot_31 = 0;
    uint32_t r0_rot_32 = 0;
    uint32_t r0_rot_33 = 0;
    uint32_t r0_rot_34 = 0;
    uint32_t r0_rot_35 = 0;
    uint32_t r0_rot_36 = 0;
    uint32_t r0_rot_37 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r26_addr_0 = 0;
    uint32_t r26_addr_1 = 0;
    uint32_t r26_addr_2 = 0;
    uint32_t r26_addr_3 = 0;
    uint32_t r26_addr_4 = 0;
    uint32_t r26_addr_5 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_13 = 0;
    uint32_t r3_addr_14 = 0;
    uint32_t r3_addr_15 = 0;
    uint32_t r3_addr_16 = 0;
    uint32_t r3_addr_17 = 0;
    uint32_t r3_addr_18 = 0;
    uint32_t r3_addr_19 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_20 = 0;
    uint32_t r3_addr_21 = 0;
    uint32_t r3_addr_22 = 0;
    uint32_t r3_addr_23 = 0;
    uint32_t r3_addr_24 = 0;
    uint32_t r3_addr_25 = 0;
    uint32_t r3_addr_26 = 0;
    uint32_t r3_addr_27 = 0;
    uint32_t r3_addr_28 = 0;
    uint32_t r3_addr_29 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_30 = 0;
    uint32_t r3_addr_31 = 0;
    uint32_t r3_addr_32 = 0;
    uint32_t r3_addr_33 = 0;
    uint32_t r3_addr_34 = 0;
    uint32_t r3_addr_35 = 0;
    uint32_t r3_addr_36 = 0;
    uint32_t r3_addr_37 = 0;
    uint32_t r3_addr_38 = 0;
    uint32_t r3_addr_39 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_40 = 0;
    uint32_t r3_addr_41 = 0;
    uint32_t r3_addr_42 = 0;
    uint32_t r3_addr_43 = 0;
    uint32_t r3_addr_44 = 0;
    uint32_t r3_addr_45 = 0;
    uint32_t r3_addr_46 = 0;
    uint32_t r3_addr_47 = 0;
    uint32_t r3_addr_48 = 0;
    uint32_t r3_addr_49 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_50 = 0;
    uint32_t r3_addr_51 = 0;
    uint32_t r3_addr_52 = 0;
    uint32_t r3_addr_53 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
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
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8001365C;

loc_8001365C:
{
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + -224), 0, 232u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r1 + -224), r1);
    r1 = (r1 + -224);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_2, 228u, (r1 + 228), r0);
    r11 = (r1 + 224);
    // inline leaf 0x8002156C (19 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r14)) << 32) | static_cast<uint32_t>(r15)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -72), r14);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -68), r15);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r16)) << 32) | static_cast<uint32_t>(r17)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -64), r16);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -60), r17);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 64u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 64u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 68u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002156C
    r8 = 0x80270000u;
    r31 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 88u, (r1 + 88), r31);
    r18 = r4;
    r8 = MemoryInline::FlatRead32((r8 + 3992));
    r19 = r5;
    MemoryInline::WriteResolved32(guest_range_2, 92u, (r1 + 92), r31);
    r0 = 0;
    r12 = r18;
    r20 = r7;
    MemoryInline::WriteResolved32(guest_range_2, 8u, (r1 + 8), r3);
    r3 = r19;
    r17 = 1;
    r14 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 144u, (r1 + 144), r0);
    r0 = 0;
    r29 = 0;
    r28 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 140u, (r1 + 140), r0);
    r0 = 0;
    r25 = 0;
    r23 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 136u, (r1 + 136), r0);
    r0 = 0;
    r30 = 1;
    r4 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r1 + 96), r31);
    r5 = 0;
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 100u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 100u, (r1 + 100), r31);
        MemoryInline::WriteResolved32(guest_range_2, 104u, (r1 + 104), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 108u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 108u, (r1 + 108), r31);
        MemoryInline::WriteResolved32(guest_range_2, 112u, (r1 + 112), r31);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 116u, ((static_cast<uint64_t>(static_cast<uint32_t>(r31)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_2, 116u, (r1 + 116), r31);
        MemoryInline::WriteResolved32(guest_range_2, 120u, (r1 + 120), r31);
    }
    MemoryInline::WriteResolved32(guest_range_2, 124u, (r1 + 124), r31);
    MemoryInline::WriteResolved16(guest_range_2, 128u, (r1 + 128), static_cast<uint16_t>(r31));
    r27 = MemoryInline::FlatRead8(r8);
    MemoryInline::WriteResolved32(guest_range_2, 12u, (r1 + 12), r6);
    MemoryInline::WriteResolved32(guest_range_2, 132u, (r1 + 132), r0);
    MemoryInline::FlatWrite32(r7, r31);
    ctr = r12;
    ctx->lr = 0x80013718u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r16 = 0x80270000u;
    r15 = 0x80240000u;
    r4 = r3;
    r16 = (r16 + 4424);
    r15 = (r15 + 26232);
    goto loc_80014638;
}

loc_80013730:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(128));
}

loc_80013734:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013F58;
    }
}

loc_80013738:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80013794;
    }
}

loc_8001373C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(8));
}

loc_80013740:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013D48;
    }
}

loc_80013744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80013770;
    }
}

loc_80013748:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(3));
}

loc_8001374C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014638;
    }
}

loc_80013750:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80013764;
    }
}

loc_80013754:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(1));
}

loc_80013758:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800137E4;
    }
}

loc_8001375C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80013C28;
    }
}

loc_80013760:
{
    goto loc_80014638;
}

loc_80013764:
{
}

loc_80013768:
{
    if ((static_cast<int32_t>(r17) >= static_cast<int32_t>(5))) {
        goto loc_80014638;
    }
}

loc_8001376C:
{
    goto loc_80013D14;
}

loc_80013770:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(32));
}

loc_80013774:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013E54;
    }
}

loc_80013778:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80013788;
    }
}

loc_8001377C:
{
}

loc_80013780:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(16))) {
        goto loc_80013E08;
    }
}

loc_80013784:
{
    goto loc_80014638;
}

loc_80013788:
{
}

loc_8001378C:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(64))) {
        goto loc_80013EF4;
    }
}

loc_80013790:
{
    goto loc_80014638;
}

loc_80013794:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(8192));
}

loc_80013798:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013A34;
    }
}

loc_8001379C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800137C4;
    }
}

loc_800137A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(512));
}

loc_800137A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014038;
    }
}

loc_800137A8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800137B8;
    }
}

loc_800137AC:
{
}

loc_800137B0:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(256))) {
        goto loc_80013FBC;
    }
}

loc_800137B4:
{
    goto loc_80014638;
}

loc_800137B8:
{
}

loc_800137BC:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(1024))) {
        goto loc_8001406C;
    }
}

loc_800137C0:
{
    goto loc_80014638;
}

loc_800137C4:
{
    r3 = 65536;
    r0 = (r3 + -32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r17), static_cast<int32_t>(r0));
}

loc_800137D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800140F0;
    }
}

loc_800137D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014638;
    }
}

loc_800137D8:
{
}

loc_800137DC:
{
    if ((static_cast<int32_t>(r17) == static_cast<int32_t>(16384))) {
        goto loc_80013920;
    }
}

loc_800137E0:
{
    goto loc_80014638;
}

loc_800137E4:
{
}

loc_800137E8:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_800137F4;
    }
}

loc_800137F0:
{
    r0 = 0;
}

loc_800137F4:
{
}

loc_800137F8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013804;
    }
}

loc_800137FC:
{
    r0 = 0;
    goto loc_80013818;
}

loc_80013804:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
    r0 = (r0 & 256);
}

loc_80013818:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001381C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013844;
    }
}

loc_80013820:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    ctx->lr = 0x80013838u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r14 = (r14 + 1);
    goto loc_80014638;
}

loc_80013844:
{
}

loc_80013848:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013854;
    }
}

loc_80013850:
{
    r0 = 0;
}

loc_80013854:
{
}

loc_80013858:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013864;
    }
}

loc_8001385C:
{
    r0 = r4;
    goto loc_80013870;
}

loc_80013864:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_6 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_6);
}

loc_80013870:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(45));
}

loc_80013874:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013894;
    }
}

loc_80013878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(43));
}

loc_8001387C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001389C;
    }
}

loc_80013880:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(73));
}

loc_80013884:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800138C8;
    }
}

loc_80013888:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(78));
}

loc_8001388C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800138F0;
    }
}

loc_80013890:
{
    goto loc_80013918;
}

loc_80013894:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 144), r0);
}

loc_8001389C:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x800138B8u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 136), r0);
    r4 = r3;
    goto loc_80014638;
}

loc_800138C8:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x800138E4u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r17 = 16384;
    goto loc_80014638;
}

loc_800138F0:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x8001390Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    r17 = 8192;
    goto loc_80014638;
}

loc_80013918:
{
    r17 = 2;
    goto loc_80014638;
}

loc_80013920:
{
    guest_range_3 = MemoryInline::ResolveRangeHost(r15, 0, 9u, true, false);
    r11 = MemoryInline::ReadResolved8(guest_range_3, 0u, r15);
    r17 = (r1 + 41);
    r10 = MemoryInline::ReadResolved8(guest_range_3, 1u, (r15 + 1));
    r21 = 1;
    r9 = MemoryInline::ReadResolved8(guest_range_3, 2u, (r15 + 2));
    r8 = MemoryInline::ReadResolved8(guest_range_3, 3u, (r15 + 3));
    r7 = MemoryInline::ReadResolved8(guest_range_3, 4u, (r15 + 4));
    r6 = MemoryInline::ReadResolved8(guest_range_3, 5u, (r15 + 5));
    r5 = MemoryInline::ReadResolved8(guest_range_3, 6u, (r15 + 6));
    r3 = MemoryInline::ReadResolved8(guest_range_3, 7u, (r15 + 7));
    r0 = MemoryInline::ReadResolved8(guest_range_3, 8u, (r15 + 8));
    guest_range_4 = MemoryInline::ResolveRangeHost((r1 + 40), 0, 9u, false, true);
    MemoryInline::WriteResolved8(guest_range_4, 0u, (r1 + 40), static_cast<uint8_t>(r11));
    MemoryInline::WriteResolved8(guest_range_4, 1u, (r1 + 41), static_cast<uint8_t>(r10));
    MemoryInline::WriteResolved8(guest_range_4, 2u, (r1 + 42), static_cast<uint8_t>(r9));
    MemoryInline::WriteResolved8(guest_range_4, 3u, (r1 + 43), static_cast<uint8_t>(r8));
    MemoryInline::WriteResolved8(guest_range_4, 4u, (r1 + 44), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_4, 5u, (r1 + 45), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_4, 6u, (r1 + 46), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_4, 7u, (r1 + 47), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_4, 8u, (r1 + 48), static_cast<uint8_t>(r0));
    goto loc_8001399C;
}

loc_80013974:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r17 = (r17 + 1);
    r21 = (r21 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x80013998u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_8001399C:
{
}

loc_800139A0:
{
    if ((static_cast<int32_t>(r21) >= static_cast<int32_t>(8))) {
        goto loc_800139E0;
    }
}

loc_800139A4:
{
}

loc_800139A8:
{
    r3 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_800139B4;
    }
}

loc_800139B0:
{
    r3 = 0;
}

loc_800139B4:
{
    r0 = MemoryInline::FlatRead8(r17);
}

loc_800139BC:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800139CC;
    }
}

loc_800139C4:
{
    r0 = r4;
    goto loc_800139D8;
}

loc_800139CC:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_21 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_21);
}

loc_800139D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_800139DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013974;
    }
}

loc_800139E0:
{
}

loc_800139E4:
{
    if ((static_cast<int32_t>(r21) == static_cast<int32_t>(3))) {
        goto loc_800139F0;
    }
}

loc_800139E8:
{
}

loc_800139EC:
{
    if ((static_cast<int32_t>(r21) != static_cast<int32_t>(8))) {
        goto loc_80013A2C;
    }
}

loc_800139F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800139F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013A0C;
    }
}

loc_800139FC:
{
    r3 = 0x80380000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 19492));
    f1.d = (-(f0.d));
    goto loc_80013A14;
}

loc_80013A0C:
{
    r3 = 0x80380000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19492));
}

loc_80013A14:
{
    r0 = MemoryInline::FlatRead32((r1 + 136));
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = (r0 + r14);
    r0 = (r21 + r0);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80014978;
}

loc_80013A2C:
{
    r17 = 4096;
    goto loc_80014638;
}

loc_80013A34:
{
    r7 = MemoryInline::FlatRead8((r2 + -32528));
    r21 = 0;
    r6 = MemoryInline::FlatRead8((r2 + -32527));
    r17 = (r1 + 25);
    r5 = MemoryInline::FlatRead8((r2 + -32526));
    r22 = 1;
    r3 = MemoryInline::FlatRead8((r2 + -32525));
    r0 = MemoryInline::FlatRead8((r2 + -32524));
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 24), 0, 64u, false, true);
    MemoryInline::WriteResolved8(guest_range_5, 0u, (r1 + 24), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_5, 1u, (r1 + 25), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_5, 2u, (r1 + 26), static_cast<uint8_t>(r5));
    MemoryInline::WriteResolved8(guest_range_5, 3u, (r1 + 27), static_cast<uint8_t>(r3));
    MemoryInline::WriteResolved8(guest_range_5, 4u, (r1 + 28), static_cast<uint8_t>(r0));
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 32u, (r1 + 56), r21);
        MemoryInline::WriteResolved32(guest_range_5, 36u, (r1 + 60), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 40u, (r1 + 64), r21);
        MemoryInline::WriteResolved32(guest_range_5, 44u, (r1 + 68), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 48u, (r1 + 72), r21);
        MemoryInline::WriteResolved32(guest_range_5, 52u, (r1 + 76), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_5, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_5, 56u, (r1 + 80), r21);
        MemoryInline::WriteResolved32(guest_range_5, 60u, (r1 + 84), r21);
    }
    goto loc_80013AB4;
}

loc_80013A8C:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r17 = (r17 + 1);
    r22 = (r22 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x80013AB0u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_80013AB4:
{
}

loc_80013AB8:
{
    if ((static_cast<int32_t>(r22) >= static_cast<int32_t>(4))) {
        goto loc_80013AF8;
    }
}

loc_80013ABC:
{
}

loc_80013AC0:
{
    r3 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013ACC;
    }
}

loc_80013AC8:
{
    r3 = 0;
}

loc_80013ACC:
{
    r0 = MemoryInline::FlatRead8(r17);
}

loc_80013AD4:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80013AE4;
    }
}

loc_80013ADC:
{
    r0 = r4;
    goto loc_80013AF0;
}

loc_80013AE4:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_39 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_39);
}

loc_80013AF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80013AF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013A8C;
    }
}

loc_80013AF8:
{
    r0 = (r22 + -3);
}

loc_80013B00:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(1))) {
        goto loc_80013C20;
    }
}

loc_80013B04:
{
}

loc_80013B08:
{
    if ((static_cast<int32_t>(r22) != static_cast<int32_t>(4))) {
        goto loc_80013BDC;
    }
}

loc_80013B0C:
{
    r17 = (r1 + 56);
    goto loc_80013B40;
}

loc_80013B14:
{
    r12 = r18;
    MemoryInline::FlatWrite8(r17, static_cast<uint8_t>(r4));
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r21 = (r21 + 1);
    r17 = (r17 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x80013B3Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_80013B40:
{
}

loc_80013B44:
{
    if ((static_cast<int32_t>(r21) >= static_cast<int32_t>(32))) {
        goto loc_80013BC8;
    }
}

loc_80013B48:
{
}

loc_80013B4C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013B58;
    }
}

loc_80013B54:
{
    r0 = 0;
}

loc_80013B58:
{
}

loc_80013B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013B68;
    }
}

loc_80013B60:
{
    r0 = 0;
    goto loc_80013B7C;
}

loc_80013B68:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_29 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_29 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_43 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_43);
    r0 = (r0 & 8);
}

loc_80013B7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80013B80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013B14;
    }
}

loc_80013B84:
{
}

loc_80013B88:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013B94;
    }
}

loc_80013B90:
{
    r0 = 0;
}

loc_80013B94:
{
}

loc_80013B98:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013BA4;
    }
}

loc_80013B9C:
{
    r0 = 0;
    goto loc_80013BB8;
}

loc_80013BA4:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_32 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_32 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_46 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_46);
    r0 = (r0 & 1);
}

loc_80013BB8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80013BBC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013B14;
    }
}

loc_80013BC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r27));
}

loc_80013BC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013B14;
    }
}

loc_80013BC8:
{
}

loc_80013BCC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(41))) {
        goto loc_80013BD8;
    }
}

loc_80013BD0:
{
    r17 = 4096;
    goto loc_80014638;
}

loc_80013BD8:
{
    r21 = (r21 + 1);
}

loc_80013BDC:
{
    r0 = MemoryInline::FlatRead32((r1 + 144));
    r3 = (r1 + 56);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80013BE8:
{
    r0 = 0;
    r3_addr_50 = (r3 + r21);
    MemoryInline::FlatWrite8(r3_addr_50, static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013C00;
    }
}

loc_80013BF4:
{
    // inline leaf 0x8001B1E0 (1 guest instruction(s))
    // end of inlined leaf 0x8001B1E0
    f1.d = (-(f1.d));
    goto loc_80013C04;
}

loc_80013C00:
{
    // inline leaf 0x8001B1E0 (1 guest instruction(s))
    // end of inlined leaf 0x8001B1E0
}

loc_80013C04:
{
    r0 = MemoryInline::FlatRead32((r1 + 136));
    r3 = (r0 + r22);
    r0 = (r21 + r14);
    r0 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_80014978;
}

loc_80013C20:
{
    r17 = 4096;
    goto loc_80014638;
}

loc_80013C28:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r27));
}

loc_80013C2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013C58;
    }
}

loc_80013C30:
{
    r12 = r18;
    r3 = r19;
    r17 = 16;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013C50u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80013C58:
{
}

loc_80013C5C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013C68;
    }
}

loc_80013C64:
{
    r0 = 0;
}

loc_80013C68:
{
}

loc_80013C6C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013C78;
    }
}

loc_80013C70:
{
    r0 = 0;
    goto loc_80013C8C;
}

loc_80013C78:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_2 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_2);
    r0 = (r0 & 8);
}

loc_80013C8C:
{
}

loc_80013C90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013C9C;
    }
}

loc_80013C94:
{
    r17 = 4096;
    goto loc_80014638;
}

loc_80013C9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_80013CA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013D0C;
    }
}

loc_80013CA4:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013CC0u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80013CC4:
{
    r4 = r3;
    r0 = 1;
    if ((static_cast<uint32_t>(r3) > static_cast<uint32_t>(255))) {
        goto loc_80013CD4;
    }
}

loc_80013CD0:
{
    r0 = 0;
}

loc_80013CD4:
{
}

loc_80013CD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013CE0;
    }
}

loc_80013CDC:
{
    goto loc_80013CEC;
}

loc_80013CE0:
{
    r5 = MemoryInline::FlatRead32((r16 + 56));
    r5 = MemoryInline::FlatRead32((r5 + 12));
    r5_addr_2 = (r5 + r3);
    r3 = MemoryInline::FlatRead8(r5_addr_2);
}

loc_80013CEC:
{
}

loc_80013CF0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(88))) {
        goto loc_80013D04;
    }
}

loc_80013CF4:
{
    r3 = 65536;
    r31 = 1;
    r17 = (r3 + -32768);
    goto loc_80014638;
}

loc_80013D04:
{
    r17 = 4;
    goto loc_80014638;
}

loc_80013D0C:
{
    r17 = 8;
    goto loc_80014638;
}

loc_80013D14:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_80013D18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013D40;
    }
}

loc_80013D1C:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013D38u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80013D40:
{
    r17 = 8;
    goto loc_80014638;
}

loc_80013D48:
{
}

loc_80013D4C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013D58;
    }
}

loc_80013D54:
{
    r0 = 0;
}

loc_80013D58:
{
}

loc_80013D5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013D68;
    }
}

loc_80013D60:
{
    r0 = 0;
    goto loc_80013D7C;
}

loc_80013D68:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_14 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_14);
    r0 = (r0 & 8);
}

loc_80013D7C:
{
}

loc_80013D80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013DBC;
    }
}

loc_80013D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r27));
}

loc_80013D88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013DB4;
    }
}

loc_80013D8C:
{
    r12 = r18;
    r3 = r19;
    r17 = 32;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013DACu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80013DB4:
{
    r17 = 64;
    goto loc_80014638;
}

loc_80013DBC:
{
    r5 = MemoryInline::FlatRead8((r1 + 92));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(20));
}

loc_80013DC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80013DE0;
    }
}

loc_80013DC8:
{
    r0 = (r1 + 88);
    r3 = (r0 + r5);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    r0 = (r5 + 1);
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
    goto loc_80013DE4;
}

loc_80013DE0:
{
    r28 = (r28 + 1);
}

loc_80013DE4:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013E00u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80013E08:
{
}

loc_80013E0C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013E18;
    }
}

loc_80013E14:
{
    r0 = 0;
}

loc_80013E18:
{
}

loc_80013E1C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013E28;
    }
}

loc_80013E20:
{
    r0 = 0;
    goto loc_80013E3C;
}

loc_80013E28:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_8 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_8);
    r0 = (r0 & 8);
}

loc_80013E3C:
{
}

loc_80013E40:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013E4C;
    }
}

loc_80013E44:
{
    r17 = 4096;
    goto loc_80014638;
}

loc_80013E4C:
{
    r17 = 32;
    goto loc_80014638;
}

loc_80013E54:
{
}

loc_80013E58:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013E64;
    }
}

loc_80013E60:
{
    r0 = 0;
}

loc_80013E64:
{
}

loc_80013E68:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013E74;
    }
}

loc_80013E6C:
{
    r0 = 0;
    goto loc_80013E88;
}

loc_80013E74:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_12 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_12);
    r0 = (r0 & 8);
}

loc_80013E88:
{
}

loc_80013E8C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80013E98;
    }
}

loc_80013E90:
{
    r17 = 64;
    goto loc_80014638;
}

loc_80013E98:
{
    r0 = MemoryInline::FlatRead8((r1 + 92));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(20));
}

loc_80013EA0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80013ED0;
    }
}

loc_80013EA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_80013EA8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013EB4;
    }
}

loc_80013EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80013EB0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80013ECC;
    }
}

loc_80013EB4:
{
    r5 = MemoryInline::FlatRead8((r1 + 92));
    r0 = (r1 + 88);
    r3 = (r0 + r5);
    r0 = (r5 + 1);
    MemoryInline::FlatWrite8((r3 + 5), static_cast<uint8_t>(r4));
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
}

loc_80013ECC:
{
    r28 = (r28 + -1);
}

loc_80013ED0:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013EECu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80013EF4:
{
}

loc_80013EF8:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013F04;
    }
}

loc_80013F00:
{
    r0 = 0;
}

loc_80013F04:
{
}

loc_80013F08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013F14;
    }
}

loc_80013F0C:
{
    r0 = r4;
    goto loc_80013F20;
}

loc_80013F14:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_10 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_10);
}

loc_80013F20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(69));
}

loc_80013F24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013F50;
    }
}

loc_80013F28:
{
    r12 = r18;
    r3 = r19;
    r17 = 128;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013F48u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80013F50:
{
    r17 = 2048;
    goto loc_80014638;
}

loc_80013F58:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(43));
}

loc_80013F5C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013F84;
    }
}

loc_80013F60:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013F7Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80013FB4;
}

loc_80013F84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(45));
}

loc_80013F88:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80013FB4;
    }
}

loc_80013F8C:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80013FA8u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 140), r0);
    r4 = r3;
}

loc_80013FB4:
{
    r17 = 256;
    goto loc_80014638;
}

loc_80013FBC:
{
}

loc_80013FC0:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80013FCC;
    }
}

loc_80013FC8:
{
    r0 = 0;
}

loc_80013FCC:
{
}

loc_80013FD0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013FDC;
    }
}

loc_80013FD4:
{
    r0 = 0;
    goto loc_80013FF0;
}

loc_80013FDC:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_12 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_16 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_16);
    r0 = (r0 & 8);
}

loc_80013FF0:
{
}

loc_80013FF4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80014000;
    }
}

loc_80013FF8:
{
    r17 = 4096;
    goto loc_80014638;
}

loc_80014000:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_80014004:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80014030;
    }
}

loc_80014008:
{
    r12 = r18;
    r3 = r19;
    r17 = 512;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014028u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014030:
{
    r17 = 1024;
    goto loc_80014638;
}

loc_80014038:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_8001403C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80014064;
    }
}

loc_80014040:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x8001405Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014064:
{
    r17 = 1024;
    goto loc_80014638;
}

loc_8001406C:
{
}

loc_80014070:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_8001407C;
    }
}

loc_80014078:
{
    r0 = 0;
}

loc_8001407C:
{
}

loc_80014080:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001408C;
    }
}

loc_80014084:
{
    r0 = 0;
    goto loc_800140A0;
}

loc_8001408C:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_14 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_14 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_18 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_18);
    r0 = (r0 & 8);
}

loc_800140A0:
{
}

loc_800140A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800140B0;
    }
}

loc_800140A8:
{
    r17 = 2048;
    goto loc_80014638;
}

loc_800140B0:
{
    r0 = (r29 * 10);
    r3 = (r4 + r0);
    r29 = (r3 + -48);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(308));
}

loc_800140C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800140CC;
    }
}

loc_800140C4:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r20, r0);
}

loc_800140CC:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x800140E8u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_800140F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(16));
}

loc_800140F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014448;
    }
}

loc_800140F8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001412C;
    }
}

loc_800140FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(4));
}

loc_80014100:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800141D4;
    }
}

loc_80014104:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014120;
    }
}

loc_80014108:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(2));
}

loc_8001410C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800141A0;
    }
}

loc_80014110:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014638;
    }
}

loc_80014114:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(1));
}

loc_80014118:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8001415C;
    }
}

loc_8001411C:
{
    goto loc_80014638;
}

loc_80014120:
{
}

loc_80014124:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(8))) {
        goto loc_80014328;
    }
}

loc_80014128:
{
    goto loc_80014638;
}

loc_8001412C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(128));
}

loc_80014130:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014584;
    }
}

loc_80014134:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014150;
    }
}

loc_80014138:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(64));
}

loc_8001413C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014508;
    }
}

loc_80014140:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014638;
    }
}

loc_80014144:
{
}

loc_80014148:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(32))) {
        goto loc_800144AC;
    }
}

loc_8001414C:
{
    goto loc_80014638;
}

loc_80014150:
{
}

loc_80014154:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(256))) {
        goto loc_800145B8;
    }
}

loc_80014158:
{
    goto loc_80014638;
}

loc_8001415C:
{
    r3 = (r1 + 32);
    r4 = 0;
    r5 = 8;
    ctx->lr = 0x8001416Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r12 = r18;
    r3 = r19;
    r26 = (r1 + 32);
    r23 = 0;
    r24 = 0;
    r31 = 2;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014198u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_800141A0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_800141A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800141CC;
    }
}

loc_800141A8:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x800141C4u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_800141CC:
{
    r31 = 4;
    goto loc_80014638;
}

loc_800141D4:
{
}

loc_800141D8:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_800141E4;
    }
}

loc_800141E0:
{
    r0 = 0;
}

loc_800141E4:
{
}

loc_800141E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800141F4;
    }
}

loc_800141EC:
{
    r0 = 0;
    goto loc_80014208;
}

loc_800141F4:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_20 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_20 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_28 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_28);
    r0 = (r0 & 1024);
}

loc_80014208:
{
}

loc_8001420C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80014248;
    }
}

loc_80014210:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r27));
}

loc_80014214:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80014240;
    }
}

loc_80014218:
{
    r12 = r18;
    r3 = r19;
    r31 = 8;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014238u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014240:
{
    r31 = 16;
    goto loc_80014638;
}

loc_80014248:
{
    r0 = 14;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(r0));
}

loc_80014250:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014304;
    }
}

loc_80014254:
{
    r0_rot_22 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_22 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_8001425C:
{
    r0 = (r0 + r24);
    r3 = 1;
    r0 = (static_cast<int32_t>(r0) >> 1);
    r23 = (r23 + 1);
    r26_addr_4 = (r26 + r0);
    r0 = MemoryInline::FlatRead8(r26_addr_4);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80014278;
    }
}

loc_80014274:
{
    r3 = 0;
}

loc_80014278:
{
}

loc_8001427C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80014284;
    }
}

loc_80014280:
{
    goto loc_80014290;
}

loc_80014284:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_30 = (r3 + r4);
    r4 = MemoryInline::FlatRead8(r3_addr_30);
}

loc_80014290:
{
}

loc_80014294:
{
    r6 = (r4 + -48);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(65))) {
        goto loc_800142A0;
    }
}

loc_8001429C:
{
    r6 = (r4 + -55);
}

loc_800142A0:
{
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r5 = (r5_rot_3 & 1);
    r3 = (r24 & 1);
    r4 = (r3 ^ r5);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r3 = (r3_rot_3 & 240);
    r4 = (r4 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    r3 = (r0 | r3);
    r4 = (r6 & 255);
    r5 = (r3 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800142CC;
    }
}

loc_800142C4:
{
    r0 = (r0 | r4);
    r5 = (r0 & 255);
}

loc_800142CC:
{
    r0_rot_23 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_23 & 1);
    r12 = r18;
    r0 = (r0 + r24);
    r3 = r19;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4 = 0;
    r26_addr_5 = (r26 + r0);
    MemoryInline::FlatWrite8(r26_addr_5, static_cast<uint8_t>(r5));
    r5 = 0;
    ctr = r12;
    r24 = (r24 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x800142FCu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014304:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014320u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014328:
{
}

loc_8001432C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80014338;
    }
}

loc_80014334:
{
    r0 = 0;
}

loc_80014338:
{
}

loc_8001433C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80014348;
    }
}

loc_80014340:
{
    r0 = 0;
    goto loc_8001435C;
}

loc_80014348:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_16 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_16 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_24 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_24);
    r0 = (r0 & 1024);
}

loc_8001435C:
{
}

loc_80014360:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001436C;
    }
}

loc_80014364:
{
    r31 = 16;
    goto loc_80014638;
}

loc_8001436C:
{
    r0 = 14;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r23), static_cast<uint32_t>(r0));
}

loc_80014374:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80014424;
    }
}

loc_80014378:
{
    r0_rot_18 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_18 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_80014380:
{
    r0 = (r0 + r24);
    r3 = 1;
    r0 = (static_cast<int32_t>(r0) >> 1);
    r26_addr_2 = (r26 + r0);
    r0 = MemoryInline::FlatRead8(r26_addr_2);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80014398;
    }
}

loc_80014394:
{
    r3 = 0;
}

loc_80014398:
{
}

loc_8001439C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800143A4;
    }
}

loc_800143A0:
{
    goto loc_800143B0;
}

loc_800143A4:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_26 = (r3 + r4);
    r4 = MemoryInline::FlatRead8(r3_addr_26);
}

loc_800143B0:
{
}

loc_800143B4:
{
    r6 = (r4 + -48);
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(65))) {
        goto loc_800143C0;
    }
}

loc_800143BC:
{
    r6 = (r4 + -55);
}

loc_800143C0:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r3 = (r24 & 1);
    r4 = (r3 ^ r5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(4));
    r3 = (r3_rot_2 & 240);
    r4 = (r4 - r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    r3 = (r0 | r3);
    r4 = (r6 & 255);
    r5 = (r3 & 255);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800143EC;
    }
}

loc_800143E4:
{
    r0 = (r0 | r4);
    r5 = (r0 & 255);
}

loc_800143EC:
{
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(1));
    r0 = (r0_rot_19 & 1);
    r12 = r18;
    r0 = (r0 + r24);
    r3 = r19;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    r4 = 0;
    r26_addr_3 = (r26 + r0);
    MemoryInline::FlatWrite8(r26_addr_3, static_cast<uint8_t>(r5));
    r5 = 0;
    ctr = r12;
    r24 = (r24 + 1);
    r30 = (r30 + 1);
    ctx->lr = 0x8001441Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014424:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014440u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014448:
{
}

loc_8001444C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80014458;
    }
}

loc_80014454:
{
    r0 = 0;
}

loc_80014458:
{
}

loc_8001445C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80014468;
    }
}

loc_80014460:
{
    r0 = r4;
    goto loc_80014474;
}

loc_80014468:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_36 = (r3 + r4);
    r0 = MemoryInline::FlatRead8(r3_addr_36);
}

loc_80014474:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(80));
}

loc_80014478:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800144A4;
    }
}

loc_8001447C:
{
    r12 = r18;
    r3 = r19;
    r31 = 32;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x8001449Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_800144A4:
{
    r17 = 2048;
    goto loc_80014638;
}

loc_800144AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(45));
}

loc_800144B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800144C0;
    }
}

loc_800144B4:
{
    r0 = 1;
    MemoryInline::FlatWriteRam32((r1 + 132), r0);
    goto loc_800144E0;
}

loc_800144C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(43));
}

loc_800144C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800144E0;
    }
}

loc_800144C8:
{
    r12 = r18;
    r3 = r19;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x800144DCu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r30 = (r30 + -1);
}

loc_800144E0:
{
    r12 = r18;
    r3 = r19;
    r31 = 64;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014500u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_80014508:
{
}

loc_8001450C:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_80014518;
    }
}

loc_80014514:
{
    r0 = 0;
}

loc_80014518:
{
}

loc_8001451C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80014528;
    }
}

loc_80014520:
{
    r0 = 0;
    goto loc_8001453C;
}

loc_80014528:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_24 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_24 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_32 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_32);
    r0 = (r0 & 8);
}

loc_8001453C:
{
}

loc_80014540:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001454C;
    }
}

loc_80014544:
{
    r17 = 4096;
    goto loc_80014638;
}

loc_8001454C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_80014550:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001457C;
    }
}

loc_80014554:
{
    r12 = r18;
    r3 = r19;
    r31 = 128;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014574u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_8001457C:
{
    r31 = 256;
    goto loc_80014638;
}

loc_80014584:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(48));
}

loc_80014588:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800145B0;
    }
}

loc_8001458C:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x800145A8u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
    goto loc_80014638;
}

loc_800145B0:
{
    r31 = 256;
    goto loc_80014638;
}

loc_800145B8:
{
}

loc_800145BC:
{
    r0 = 1;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(255))) {
        goto loc_800145C8;
    }
}

loc_800145C4:
{
    r0 = 0;
}

loc_800145C8:
{
}

loc_800145CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800145D8;
    }
}

loc_800145D0:
{
    r0 = 0;
    goto loc_800145EC;
}

loc_800145D8:
{
    r3 = MemoryInline::FlatRead32((r16 + 56));
    r0_rot_26 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r0 = (r0_rot_26 & -2);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3_addr_34 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_34);
    r0 = (r0 & 8);
}

loc_800145EC:
{
}

loc_800145F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800145FC;
    }
}

loc_800145F4:
{
    r17 = 2048;
    goto loc_80014638;
}

loc_800145FC:
{
    r0 = (r25 * 10);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(32767));
}

loc_80014604:
{
    r3 = (r4 + r0);
    r25 = (r3 + -48);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80014618;
    }
}

loc_80014610:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r20, r0);
}

loc_80014618:
{
    r12 = r18;
    r3 = r19;
    r4 = 0;
    r5 = 0;
    ctr = r12;
    r30 = (r30 + 1);
    ctx->lr = 0x80014634u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r4 = r3;
}

loc_80014638:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_80014640:
{
    if ((static_cast<int32_t>(r30) > static_cast<int32_t>(r0))) {
        goto loc_80014654;
    }
}

loc_80014644:
{
}

loc_80014648:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(-1))) {
        goto loc_80014654;
    }
}

loc_8001464C:
{
    r0 = (r17 & 6144);
}

loc_80014650:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80013730;
    }
}

loc_80014654:
{
    r0 = (r17 + 0);
}

loc_8001465C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32768))) {
        goto loc_80014670;
    }
}

loc_80014660:
{
    r0 = (r17 & 3628);
}

loc_80014664:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r3 = (r3_rot_4 & 134217727);
    goto loc_8001468C;
}

loc_80014670:
{
    r0 = (r30 + -1);
    r3 = 0;
}

loc_8001467C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(2))) {
        goto loc_80014688;
    }
}

loc_80014680:
{
    r0 = (r31 & 398);
}

loc_80014684:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8001468C;
    }
}

loc_80014688:
{
    r3 = 1;
}

loc_8001468C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80014690:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800146A4;
    }
}

loc_80014694:
{
    r3 = MemoryInline::FlatRead32((r1 + 12));
    r0 = 0;
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_800146B4;
}

loc_800146A4:
{
    r3 = (r30 + r14);
    r0 = (r3 + -1);
    r3 = MemoryInline::FlatRead32((r1 + 12));
    MemoryInline::FlatWrite32(r3, r0);
}

loc_800146B4:
{
    r12 = r18;
    r3 = r19;
    r5 = 1;
    ctr = r12;
    ctx->lr = 0x800146C8u;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r14 = ctx->gpr[14];
    r15 = ctx->gpr[15];
    r16 = ctx->gpr[16];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_800146CC:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_800147F8;
    }
}

loc_800146D0:
{
    r0 = MemoryInline::FlatRead32((r1 + 140));
}

loc_800146D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800146E0;
    }
}

loc_800146DC:
{
    r29 = (0 - r29);
}

loc_800146E0:
{
    r3 = MemoryInline::FlatRead8((r1 + 92));
    r4 = (r1 + 93);
    r4 = (r4 + r3);
    goto loc_800146F4;
}

loc_800146F0:
{
    r28 = (r28 + 1);
}

loc_800146F4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800146F8:
{
    r3 = (r3 + -1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001470C;
    }
}

loc_80014700:
{
    r4 = (r4 + -1);
    r0 = MemoryInline::FlatRead8(r4);
}

loc_80014708:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(48))) {
        goto loc_800146F0;
    }
}

loc_8001470C:
{
    r0 = (r3 + 1);
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
    r4 = (r0 & 255);
}

loc_80014718:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_80014730;
    }
}

loc_8001471C:
{
    r3 = (r1 + 93);
    r0 = 48;
    r3_addr_51 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_51, static_cast<uint8_t>(r0));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8((r1 + 92), static_cast<uint8_t>(r0));
}

loc_80014730:
{
    r29 = (r29 + r28);
    r0 = (r29 + 308);
}

loc_8001473C:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(616))) {
        goto loc_80014748;
    }
}

loc_80014740:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r20, r0);
}

loc_80014748:
{
    r0 = MemoryInline::FlatRead32(r20);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80014750:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014790;
    }
}

loc_80014754:
{
    r0 = MemoryInline::FlatRead32((r1 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001475C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014768;
    }
}

loc_80014760:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32520));
    goto loc_80014978;
}

loc_80014768:
{
    r0 = MemoryInline::FlatRead32((r1 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80014770:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014784;
    }
}

loc_80014774:
{
    r3 = 0x80380000u;
    f0.d = MemoryInline::FlatReadFloat64((r3 + 19496));
    f1.d = (-(f0.d));
    goto loc_80014978;
}

loc_80014784:
{
    r3 = 0x80380000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 19496));
    goto loc_80014978;
}

loc_80014790:
{
    MemoryInline::FlatWriteRam16((r1 + 90), static_cast<uint16_t>(r29));
    r3 = (r1 + 88);
    ctx->lr = 0x8001479Cu;
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000DC9Cu>(ctx);
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
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
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
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32520));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_800147A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800147C0;
    }
}

loc_800147A8:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32512));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800147B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800147C0;
    }
}

loc_800147B4:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r20, r0);
    goto loc_800147DC;
}

loc_800147C0:
{
    f0.d = MemoryInline::FlatReadFloat64((r2 + -32504));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_800147C8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800147DC;
    }
}

loc_800147CC:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r20, r0);
    r3 = 0x80380000u;
    f1.d = MemoryInline::FlatReadFloat64((r3 + 19496));
}

loc_800147DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 144));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800147E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014978;
    }
}

loc_800147E8:
{
    r0 = (r17 & 3628);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800147EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014978;
    }
}

loc_800147F0:
{
    f1.d = (-(f1.d));
    goto loc_80014978;
}

loc_800147F8:
{
    r0 = MemoryInline::FlatRead32((r1 + 132));
    r3 = (r1 + 16);
}

loc_80014804:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8001480C;
    }
}

loc_80014808:
{
    r25 = (0 - r25);
}

loc_8001480C:
{
    r0_rot_36 = PpcRotl32Inline(static_cast<uint32_t>(r23), static_cast<uint32_t>(2));
    r0 = (r0_rot_36 & -4);
    r5 = MemoryInline::FlatRead8((r1 + 32));
    r25 = (r25 + r0);
    r6 = 0;
    r4 = 128;
    goto loc_8001482C;
}

loc_80014824:
{
    r6 = (r6 + 1);
    r25 = (r25 + -1);
}

loc_8001482C:
{
}

loc_80014830:
{
    if ((static_cast<uint32_t>(r6) >= static_cast<uint32_t>(4))) {
        goto loc_80014840;
    }
}

loc_80014834:
{
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r4);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r4), static_cast<uint32_t>(r6));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80014824;
    }
}

loc_80014840:
{
    r5 = (r6 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r6)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80014844:
{
    r25 = (r25 + -1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014894;
    }
}

loc_8001484C:
{
    r26 = (r1 + 39);
    r4 = (r1 + 32);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r26), static_cast<uint32_t>(r4));
}

loc_80014858:
{
    r7 = 0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80014894;
    }
}

loc_80014860:
{
    r0 = (r26 + 1);
    r6 = (8 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r0 = (r0 - r4);
    ctr = r0;
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80014894;
    }
}

loc_80014874:
{
    r0 = MemoryInline::FlatRead8(r26);
    r4 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(r6) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = PPC_Sraw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r6));
    r4 = (r7 | r4);
    MemoryInline::FlatWrite8(r26, static_cast<uint8_t>(r4));
    r7 = (r0 & 255);
    r26 = (r26 + -1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80014874;
    }
}

loc_80014894:
{
    r4 = 0;
    r5 = 8;
    ctx->lr = 0x800148A0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 7;
    r4 = (r1 + 32);
    r3 = (r1 + 17);
    r8 = 0;
    r7 = 255;
    ctr = r0;
}

loc_800148B8:
{
    r0 = (r8 + 8);
    r9 = MemoryInline::FlatRead8(r4);
}

loc_800148C4:
{
    r5 = (r8 + 12);
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(52))) {
        goto loc_800148DC;
    }
}

loc_800148CC:
{
    r0 = (52 - r8);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(52) >= static_cast<uint32_t>(r8) ? 1u : 0u) << 29);
    r0 = PPC_Slw(static_cast<uint32_t>(r7), static_cast<uint32_t>(r0));
    r0 = (r9 & r0);
    r9 = (r0 & 255);
}

loc_800148DC:
{
    r10 = (r5 & 7);
    r6 = MemoryInline::FlatRead8(r3);
    r0 = PPC_Sraw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r10));
    r4 = (r4 + 1);
    r5 = (r0 & 255);
    r8 = (r8 + 8);
    r5 = (r6 | r5);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r5));
    r0 = (8 - r10);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(8) >= static_cast<uint32_t>(r10) ? 1u : 0u) << 29);
    r0 = PPC_Slw(static_cast<uint32_t>(r9), static_cast<uint32_t>(r0));
    r3 = (r3 + 1);
    r5 = MemoryInline::FlatRead8(r3);
    r0 = (r0 & 255);
    r0 = (r5 | r0);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_800148B8;
    }
}

loc_80014918:
{
    r3 = (r29 + r25);
    r25 = (r3 + 1023);
    r0 = (r25 & -2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80014924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014938;
    }
}

loc_80014928:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r20, r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32520));
    goto loc_80014978;
}

loc_80014938:
{
    r0 = MemoryInline::FlatRead32((r1 + 144));
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(21));
    r25 = (r25_rot_1 & -2097152);
    r6 = MemoryInline::FlatRead8((r1 + 16));
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(7));
    r5 = (r5_rot_4 & 127);
    r4 = MemoryInline::FlatRead8((r1 + 17));
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r25), static_cast<uint32_t>(15));
    r3 = (r3_rot_6 & 32767);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80014954:
{
    r5 = (r6 | r5);
    r0 = (r4 | r3);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r5));
    MemoryInline::FlatWriteRam8((r1 + 17), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80014974;
    }
}

loc_80014968:
{
    r0 = (r5 & 255);
    r0 = (r0 | 128);
    MemoryInline::FlatWriteRam8((r1 + 16), static_cast<uint8_t>(r0));
}

loc_80014974:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 16));
}

loc_80014978:
{
    r11 = (r1 + 224);
    // inline leaf 0x800215B8 (19 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -72), 0, 72u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r14 = resolved_pair.first;
            r15 = resolved_pair.second;
        } else {
            r14 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -72));
            r15 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -68));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r16 = resolved_pair.first;
            r17 = resolved_pair.second;
        } else {
            r16 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -64));
            r17 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -60));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 56u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 60u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 64u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 68u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215B8
    r0 = MemoryInline::FlatRead32((r1 + 228));
    ctx->lr = r0;
    r1 = (r1 + 224);
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
    ctx->gpr[12] = r12;
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
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001365C func_8001365C preserves=true fpr_mask=0x00000000
