#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051377C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
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
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8051377C;

loc_8051377C:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x8002158C (11 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002158C
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r23 = 0;
    r6 = 0;
    r7 = MemoryInline::FlatRead32(r5);
    r0 = MemoryInline::FlatRead16((r7 + 8));
    ctr = r0;
}

loc_805137BC:
{
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(0))) {
        goto loc_805137EC;
    }
}

loc_805137C0:
{
    r0 = MemoryInline::FlatRead16((r7 + 10));
    r3 = MemoryInline::FlatRead32((r5 + 4));
    r0 = (r7 + r0);
    r3_addr_2 = (r3 + r6);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_3);
    r3 = r3_addr_3;
}

loc_805137D8:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(r4))) {
        goto loc_805137E4;
    }
}

loc_805137DC:
{
    r23 = r3;
    goto loc_805137EC;
}

loc_805137E4:
{
    r6 = (r6 + 4);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805137C0;
    }
}

loc_805137EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_805137F0:
{
    r24 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80513AB0;
    }
}

loc_805137F8:
{
    r3 = 16;
    ctx->lr = 0x80513800u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
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
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80513804:
{
    r24 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80513AB0;
    }
}

loc_8051380C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32(r3, r0);
    r27 = (r23 + 8);
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r3 + 8), r23);
    r26 = MemoryInline::FlatRead16((r23 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_80513828:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051383C;
    }
}

loc_8051382C:
{
    MemoryInline::FlatWriteRam16((r3 + 4), static_cast<uint16_t>(r26));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & 262140);
    ctx->lr = 0x80513838u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWriteRam32(r24, r3);
}

loc_8051383C:
{
    r4 = 0x80890000u;
    r3 = 0x80890000u;
    f30.d = MemoryInline::FlatReadFloat32((r4 + -1468));
    r22 = 0;
    f31.d = MemoryInline::FlatReadFloat64((r3 + -1464));
    r25 = -1;
    r23 = 1127219200;
    goto loc_805138AC;
}

loc_8051385C:
{
    r3 = 12;
    ctx->lr = 0x80513864u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    r11 = ctx->gpr[11];
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
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80513868:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8051389C;
    }
}

loc_8051386C:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(4));
    r0 = (r0_rot_2 & 1048560);
    MemoryInline::FlatWriteRam32((r1 + 8), r23);
    r4 = (r27 + r0);
    MemoryInline::FlatWriteRam32(r3, r4);
    MemoryInline::FlatWriteRam8((r3 + 4), static_cast<uint8_t>(r25));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f30.d);
    r0 = MemoryInline::FlatRead8((r4 + 1));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f30.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r3 + 8), f0.d);
}

loc_8051389C:
{
    r4 = MemoryInline::FlatRead32(r24);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r22), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 262140);
    r22 = (r22 + 1);
    r4_addr_2 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_2, r3);
}

loc_805138AC:
{
    r0 = (r22 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r26));
}

loc_805138B4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8051385C;
    }
}

loc_805138B8:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805138C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80513AB0;
    }
}

loc_805138C4:
{
    r30 = -1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805138D8;
    }
}

loc_805138CC:
{
    r3 = MemoryInline::FlatRead32(r24);
    r29 = MemoryInline::FlatRead32(r3);
    goto loc_805138DC;
}

loc_805138D8:
{
    r29 = 0;
}

loc_805138DC:
{
    r0 = MemoryInline::FlatRead8((r29 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_805138E8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_80513A08;
    }
}

loc_805138EC:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r29 + 4), static_cast<uint8_t>(r0));
    r25 = 0;
    r23 = 2;
    r31 = 1;
}

loc_80513900:
{
    r3 = MemoryInline::FlatRead32(r29);
    r0 = (r25 & 65535);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80513914:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_805139FC;
    }
}

loc_80513918:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
}

loc_80513920:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80513934;
    }
}

loc_80513924:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 262140);
    r3_addr_6 = (r3 + r0);
    r26 = MemoryInline::FlatRead32(r3_addr_6);
    goto loc_80513938;
}

loc_80513934:
{
    r26 = 0;
}

loc_80513938:
{
    r0 = MemoryInline::FlatRead8((r26 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80513944:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805139FC;
    }
}

loc_80513948:
{
    MemoryInline::FlatWrite8((r26 + 4), static_cast<uint8_t>(r31));
    r27 = 0;
}

loc_80513950:
{
    r3 = MemoryInline::FlatRead32(r26);
    r0 = (r27 & 65535);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 8));
}

loc_80513964:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_805139F0;
    }
}

loc_80513968:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
}

loc_80513970:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r0))) {
        goto loc_80513984;
    }
}

loc_80513974:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & 262140);
    r3_addr_9 = (r3 + r0);
    r28 = MemoryInline::FlatRead32(r3_addr_9);
    goto loc_80513988;
}

loc_80513984:
{
    r28 = 0;
}

loc_80513988:
{
    r0 = MemoryInline::FlatRead8((r28 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80513994:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(-1))) {
        goto loc_805139F0;
    }
}

loc_80513998:
{
    MemoryInline::FlatWrite8((r28 + 4), static_cast<uint8_t>(r23));
    r22 = 0;
}

loc_805139A0:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = (r22 & 65535);
    r3 = (r3 + r0);
    r4 = MemoryInline::FlatRead8((r3 + 8));
}

loc_805139B4:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(255))) {
        goto loc_805139E4;
    }
}

loc_805139B8:
{
    r0 = MemoryInline::FlatRead16((r24 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_805139C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805139D4;
    }
}

loc_805139C4:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & 262140);
    r3_addr_12 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_12);
    goto loc_805139D8;
}

loc_805139D4:
{
    r3 = 0;
}

loc_805139D8:
{
    r5 = r24;
    r4 = 3;
    ctx->lr = 0x805139E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805150E0u>(ctx);
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
}

loc_805139E4:
{
    r22 = (r22 + 1);
}

loc_805139EC:
{
    if ((static_cast<uint32_t>(r22) < static_cast<uint32_t>(6))) {
        goto loc_805139A0;
    }
}

loc_805139F0:
{
    r27 = (r27 + 1);
}

loc_805139F8:
{
    if ((static_cast<uint32_t>(r27) < static_cast<uint32_t>(6))) {
        goto loc_80513950;
    }
}

loc_805139FC:
{
    r25 = (r25 + 1);
}

loc_80513A04:
{
    if ((static_cast<uint32_t>(r25) < static_cast<uint32_t>(6))) {
        goto loc_80513900;
    }
}

loc_80513A08:
{
    r5 = MemoryInline::FlatRead16((r24 + 4));
    r4 = 0;
    goto loc_80513A70;
}

loc_80513A14:
{
    r0 = (r4 & 65535);
}

loc_80513A1C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_80513A30;
    }
}

loc_80513A20:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_19 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_19 & 262140);
    r3_addr_19 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_19);
    goto loc_80513A34;
}

loc_80513A30:
{
    r3 = 0;
}

loc_80513A34:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80513A40:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(r30))) {
        goto loc_80513A6C;
    }
}

loc_80513A44:
{
    r0 = (r4 & 65535);
}

loc_80513A4C:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(r5))) {
        goto loc_80513A60;
    }
}

loc_80513A50:
{
    r3 = MemoryInline::FlatRead32(r24);
    r0_rot_21 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_21 & 262140);
    r3_addr_21 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_21);
    goto loc_80513A64;
}

loc_80513A60:
{
    r3 = 0;
}

loc_80513A64:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    r30 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80513A6C:
{
    r4 = (r4 + 1);
}

loc_80513A70:
{
    r0 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
}

loc_80513A78:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80513A14;
    }
}

loc_80513A7C:
{
    r3 = (r30 ^ -2147483648);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r4 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat64((r4 + -1456));
    r3 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + -1468));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    MemoryInline::FlatWriteRamFloat32((r24 + 12), f0.d);
}

loc_80513AB0:
{
    r3 = r24;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x800215D8 (11 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -40), 0, 40u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215D8
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8051377C func_8051377C preserves=false fpr_mask=0xC0000000
