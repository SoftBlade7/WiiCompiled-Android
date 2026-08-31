#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000DC9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addc_left_0 = 0;
    uint32_t r0_addc_left_1 = 0;
    uint32_t r0_addc_left_2 = 0;
    uint32_t r0_addc_left_3 = 0;
    uint32_t r0_addc_left_4 = 0;
    uint32_t r0_addc_left_5 = 0;
    uint32_t r0_addc_left_6 = 0;
    uint32_t r0_ca_0 = 0;
    uint32_t r0_ca_1 = 0;
    uint32_t r0_ca_2 = 0;
    uint32_t r0_ca_3 = 0;
    uint32_t r0_ca_4 = 0;
    uint32_t r0_ca_5 = 0;
    uint32_t r0_ca_6 = 0;
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r28_rot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;
    uint8_t* guest_range_3 = nullptr;
    uint8_t* guest_range_4 = nullptr;
    uint8_t* guest_range_5 = nullptr;
    uint8_t* guest_range_6 = nullptr;

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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8000DC9C;

loc_8000DC9C:
{
    MemoryInline::FlatWriteRam32((r1 + -384), r1);
    r1 = (r1 + -384);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 388), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 368), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 376);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    r11 = (r1 + 368);
    // inline leaf 0x80021580 (14 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r19)) << 32) | static_cast<uint32_t>(r20)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -52), r19);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -48), r20);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -4), r31);
    // end of inlined leaf 0x80021580
    guest_range_1 = MemoryInline::ResolveRangeHost(r3, 0, 42u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r3 + 4));
    r4 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 296), r4);
    r27 = r3;
}

loc_8000DCCC:
{
    MemoryInline::FlatWriteRam32((r1 + 304), r4);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8000DCF8;
    }
}

loc_8000DCD4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000DCE8;
    }
}

loc_8000DCE0:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32616));
    goto loc_8000DCEC;
}

loc_8000DCE8:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32608));
}

loc_8000DCEC:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32624));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    goto loc_8000E414;
}

loc_8000DCF8:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r3 + 5));
}

loc_8000DD00:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(48))) {
        goto loc_8000DD18;
    }
}

loc_8000DD04:
{
}

loc_8000DD08:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(73))) {
        goto loc_8000DD3C;
    }
}

loc_8000DD0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(78));
}

loc_8000DD10:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000DD64;
    }
}

loc_8000DD14:
{
    goto loc_8000DDA4;
}

loc_8000DD18:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000DD2C;
    }
}

loc_8000DD24:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32616));
    goto loc_8000DD30;
}

loc_8000DD2C:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32608));
}

loc_8000DD30:
{
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32624));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    goto loc_8000E414;
}

loc_8000DD3C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000DD50;
    }
}

loc_8000DD48:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32616));
    goto loc_8000DD54;
}

loc_8000DD50:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32608));
}

loc_8000DD54:
{
    r3 = 0x80380000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19492));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    goto loc_8000E414;
}

loc_8000DD64:
{
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r3);
    r4 = 0;
    r3 = 2146435072;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    MemoryInline::FlatWriteRam32((r1 + 24), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000DD90;
    }
}

loc_8000DD80:
{
    r0 = 0x80000000u;
    MemoryInline::FlatWriteRam32((r1 + 28), r4);
    r0 = (r0 | 2146435072);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
}

loc_8000DD90:
{
    r0 = MemoryInline::FlatRead32((r1 + 24));
    r0 = (r0 | 524288);
    MemoryInline::FlatWriteRam32((r1 + 24), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 24));
    goto loc_8000E414;
}

loc_8000DDA4:
{
    r0 = MemoryInline::ReadResolved16(guest_range_1, 4u, (r3 + 4));
    r4 = (r1 + 257);
    MemoryInline::FlatWriteRam16((r1 + 256), static_cast<uint16_t>(r0));
    r19 = MemoryInline::ReadResolved16(guest_range_1, 0u, r3);
    r0 = MemoryInline::FlatRead8((r1 + 256));
    r20 = MemoryInline::ReadResolved16(guest_range_1, 2u, (r3 + 2));
    r28 = (r4 + r0);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 6u);
        if (resolved_pair.valid) {
            r31 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r31 = MemoryInline::ReadResolved16(guest_range_1, 6u, (r3 + 6));
            r30 = MemoryInline::ReadResolved16(guest_range_1, 8u, (r3 + 8));
        }
    }
    SetCRResident(cr, xer, 1, static_cast<uint32_t>(r4), static_cast<uint32_t>(r28));
}

loc_8000DDCC:
{
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 10u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved16(guest_range_1, 10u, (r3 + 10));
            r26 = MemoryInline::ReadResolved16(guest_range_1, 12u, (r3 + 12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 14u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved16(guest_range_1, 14u, (r3 + 14));
            r24 = MemoryInline::ReadResolved16(guest_range_1, 16u, (r3 + 16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 18u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved16(guest_range_1, 18u, (r3 + 18));
            r22 = MemoryInline::ReadResolved16(guest_range_1, 20u, (r3 + 20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 22u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r12 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved16(guest_range_1, 22u, (r3 + 22));
            r12 = MemoryInline::ReadResolved16(guest_range_1, 24u, (r3 + 24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 26u);
        if (resolved_pair.valid) {
            r11 = resolved_pair.first;
            r10 = resolved_pair.second;
        } else {
            r11 = MemoryInline::ReadResolved16(guest_range_1, 26u, (r3 + 26));
            r10 = MemoryInline::ReadResolved16(guest_range_1, 28u, (r3 + 28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 30u);
        if (resolved_pair.valid) {
            r9 = resolved_pair.first;
            r8 = resolved_pair.second;
        } else {
            r9 = MemoryInline::ReadResolved16(guest_range_1, 30u, (r3 + 30));
            r8 = MemoryInline::ReadResolved16(guest_range_1, 32u, (r3 + 32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 34u);
        if (resolved_pair.valid) {
            r7 = resolved_pair.first;
            r6 = resolved_pair.second;
        } else {
            r7 = MemoryInline::ReadResolved16(guest_range_1, 34u, (r3 + 34));
            r6 = MemoryInline::ReadResolved16(guest_range_1, 36u, (r3 + 36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair16(guest_range_1, 38u);
        if (resolved_pair.valid) {
            r5 = resolved_pair.first;
            r0 = resolved_pair.second;
        } else {
            r5 = MemoryInline::ReadResolved16(guest_range_1, 38u, (r3 + 38));
            r0 = MemoryInline::ReadResolved16(guest_range_1, 40u, (r3 + 40));
        }
    }
    guest_range_3 = MemoryInline::ResolveRangeHost((r1 + 252), 0, 42u, false, true);
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 0u, ((static_cast<uint32_t>(static_cast<uint16_t>(r19)) << 16) | static_cast<uint16_t>(r20)))) {
        MemoryInline::WriteResolved16(guest_range_3, 0u, (r1 + 252), r19);
        MemoryInline::WriteResolved16(guest_range_3, 2u, (r1 + 254), r20);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 6u, ((static_cast<uint32_t>(static_cast<uint16_t>(r31)) << 16) | static_cast<uint16_t>(r30)))) {
        MemoryInline::WriteResolved16(guest_range_3, 6u, (r1 + 258), r31);
        MemoryInline::WriteResolved16(guest_range_3, 8u, (r1 + 260), r30);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 10u, ((static_cast<uint32_t>(static_cast<uint16_t>(r29)) << 16) | static_cast<uint16_t>(r26)))) {
        MemoryInline::WriteResolved16(guest_range_3, 10u, (r1 + 262), r29);
        MemoryInline::WriteResolved16(guest_range_3, 12u, (r1 + 264), r26);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 14u, ((static_cast<uint32_t>(static_cast<uint16_t>(r25)) << 16) | static_cast<uint16_t>(r24)))) {
        MemoryInline::WriteResolved16(guest_range_3, 14u, (r1 + 266), r25);
        MemoryInline::WriteResolved16(guest_range_3, 16u, (r1 + 268), r24);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 18u, ((static_cast<uint32_t>(static_cast<uint16_t>(r23)) << 16) | static_cast<uint16_t>(r22)))) {
        MemoryInline::WriteResolved16(guest_range_3, 18u, (r1 + 270), r23);
        MemoryInline::WriteResolved16(guest_range_3, 20u, (r1 + 272), r22);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 22u, ((static_cast<uint32_t>(static_cast<uint16_t>(r21)) << 16) | static_cast<uint16_t>(r12)))) {
        MemoryInline::WriteResolved16(guest_range_3, 22u, (r1 + 274), r21);
        MemoryInline::WriteResolved16(guest_range_3, 24u, (r1 + 276), r12);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 26u, ((static_cast<uint32_t>(static_cast<uint16_t>(r11)) << 16) | static_cast<uint16_t>(r10)))) {
        MemoryInline::WriteResolved16(guest_range_3, 26u, (r1 + 278), r11);
        MemoryInline::WriteResolved16(guest_range_3, 28u, (r1 + 280), r10);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 30u, ((static_cast<uint32_t>(static_cast<uint16_t>(r9)) << 16) | static_cast<uint16_t>(r8)))) {
        MemoryInline::WriteResolved16(guest_range_3, 30u, (r1 + 282), r9);
        MemoryInline::WriteResolved16(guest_range_3, 32u, (r1 + 284), r8);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 34u, ((static_cast<uint32_t>(static_cast<uint16_t>(r7)) << 16) | static_cast<uint16_t>(r6)))) {
        MemoryInline::WriteResolved16(guest_range_3, 34u, (r1 + 286), r7);
        MemoryInline::WriteResolved16(guest_range_3, 36u, (r1 + 288), r6);
    }
    if (!MemoryInline::WriteResolvedPair16(guest_range_3, 38u, ((static_cast<uint32_t>(static_cast<uint16_t>(r5)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_3, 38u, (r1 + 290), r5);
        MemoryInline::WriteResolved16(guest_range_3, 40u, (r1 + 292), r0);
    }
    if (((cr & 0x08000000u) == 0)) {
        goto loc_8000DF18;
    }
}

loc_8000DE60:
{
    r0 = (r28 - r4);
    r3 = (r28 + -8);
}

loc_8000DE6C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8000DEF4;
    }
}

loc_8000DE70:
{
    if (((cr & 0x04000000u) != 0)) {
        goto loc_8000DEF4;
    }
}

loc_8000DE74:
{
    r0 = (r3 + 7);
    r0 = (r0 - r4);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8000DE88:
{
    if ((static_cast<uint32_t>(r4) >= static_cast<uint32_t>(r3))) {
        goto loc_8000DEF4;
    }
}

loc_8000DE8C:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 1));
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8((r4 + 1), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 2));
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 3));
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8((r4 + 3), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 4));
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8((r4 + 4), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 5));
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8((r4 + 5), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 6));
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead8((r4 + 7));
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8((r4 + 7), static_cast<uint8_t>(r0));
    r4 = (r4 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000DE8C;
    }
}

loc_8000DEF4:
{
    r0 = (r28 - r4);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r28));
}

loc_8000DF00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000DF18;
    }
}

loc_8000DF04:
{
    r3 = MemoryInline::FlatRead8(r4);
    r0 = (r3 + -48);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000DF04;
    }
}

loc_8000DF18:
{
    r6 = MemoryInline::FlatRead16((r1 + 254));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r4 = 0x80240000u;
    r0 = MemoryInline::FlatRead8((r1 + 256));
    r4 = (r4 + 24640);
    r3 = (r1 + 208);
    r5 = 308;
    r6 = (r0 + r6);
    r4 = (r4 + 184);
    r0 = (r6 + -1);
    MemoryInline::FlatWriteRam16((r1 + 254), static_cast<uint16_t>(r0));
    r29 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000CE40u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    r3 = (r1 + 208);
    r4 = (r1 + 252);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D37Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8000DF58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000DF84;
    }
}

loc_8000DF5C:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000DF70;
    }
}

loc_8000DF68:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32616));
    goto loc_8000DF74;
}

loc_8000DF70:
{
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32608));
}

loc_8000DF74:
{
    r3 = 0x80380000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 19492));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B564u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f1 = ctx->fpr[1];
    goto loc_8000E414;
}

loc_8000DF84:
{
    r0 = MemoryInline::FlatRead8((r1 + 257));
    r7 = 0x80270000u;
    MemoryInline::FlatWriteRam32((r1 + 300), r0);
    r4 = (r1 + 258);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32584));
    r7 = (r7 + 3928);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 296));
    r3 = 0x80000000u;
    f31.d = (f0.d - f2.d);
    goto loc_8000E0E8;
}

loc_8000DFAC:
{
    r5 = (r28 - r4);
    r10 = 0;
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(29));
    r0 = (r0_rot_5 & -536870912);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r5 = (r5_rot_2 & 1);
    r0 = (r0 - r5);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_6 & -1);
    r6 = (r0 + r5);
    if ((static_cast<int32_t>(r6) != static_cast<int32_t>(0))) {
        goto loc_8000DFD0;
    }
}

loc_8000DFCC:
{
    r6 = 8;
}

loc_8000DFD0:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8000DFD4:
{
    r5 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8000E0B0;
    }
}

loc_8000DFDC:
{
}

loc_8000DFE0:
{
    r8 = (r6 + -8);
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(8))) {
        goto loc_8000E088;
    }
}

loc_8000DFE8:
{
    r9 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8000E000;
    }
}

loc_8000DFF0:
{
    r0 = (r3 + -2);
}

loc_8000DFF8:
{
    if ((static_cast<int32_t>(r6) > static_cast<int32_t>(r0))) {
        goto loc_8000E000;
    }
}

loc_8000DFFC:
{
    r9 = 1;
}

loc_8000E000:
{
}

loc_8000E004:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8000E088;
    }
}

loc_8000E008:
{
    r0 = (r8 + 7);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_7 & 536870911);
    ctr = r0;
}

loc_8000E018:
{
    if ((static_cast<int32_t>(r8) <= static_cast<int32_t>(0))) {
        goto loc_8000E088;
    }
}

loc_8000E01C:
{
    r0 = (r10 * 10);
    guest_range_4 = MemoryInline::ResolveRangeHost(r4, 0, 8u, true, false);
    r9 = MemoryInline::ReadResolved8(guest_range_4, 0u, r4);
    r8 = MemoryInline::ReadResolved8(guest_range_4, 1u, (r4 + 1));
    r5 = (r5 + 8);
    r21 = MemoryInline::ReadResolved8(guest_range_4, 2u, (r4 + 2));
    r0 = (r9 + r0);
    r0 = (r0 * 10);
    r12 = MemoryInline::ReadResolved8(guest_range_4, 3u, (r4 + 3));
    r11 = MemoryInline::ReadResolved8(guest_range_4, 4u, (r4 + 4));
    r10 = MemoryInline::ReadResolved8(guest_range_4, 5u, (r4 + 5));
    r0 = (r8 + r0);
    r9 = MemoryInline::ReadResolved8(guest_range_4, 6u, (r4 + 6));
    r0 = (r0 * 10);
    r8 = MemoryInline::ReadResolved8(guest_range_4, 7u, (r4 + 7));
    r4 = (r4 + 8);
    r0 = (r21 + r0);
    r0 = (r0 * 10);
    r0 = (r12 + r0);
    r0 = (r0 * 10);
    r0 = (r11 + r0);
    r0 = (r0 * 10);
    r0 = (r10 + r0);
    r0 = (r0 * 10);
    r0 = (r9 + r0);
    r0 = (r0 * 10);
    r10 = (r8 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000E01C;
    }
}

loc_8000E088:
{
    r0 = (r6 - r5);
    ctr = r0;
}

loc_8000E094:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r6))) {
        goto loc_8000E0B0;
    }
}

loc_8000E098:
{
    r0 = (r10 * 10);
    r8 = MemoryInline::FlatRead8(r4);
    r5 = (r5 + 1);
    r4 = (r4 + 1);
    r10 = (r8 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8000E098;
    }
}

loc_8000E0B0:
{
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(3));
    r0 = (r0_rot_10 & -8);
    MemoryInline::FlatWriteRam32((r1 + 308), r10);
    r5 = (r7 + r0);
}

loc_8000E0C0:
{
    f1.d = MemoryInline::FlatReadFloat64((r5 + -8));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 304));
    f1.d = (f31.d * f1.d);
    f0.d = (f0.d - f2.d);
    f0.d = (f1.d + f0.d);
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8000E0E0;
    }
}

loc_8000E0D8:
{
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8000E0DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E0F0;
    }
}

loc_8000E0E0:
{
    f31.d = f0.d;
    r29 = (r29 - r6);
}

loc_8000E0E8:
{
}

loc_8000E0EC:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r28))) {
        goto loc_8000DFAC;
    }
}

loc_8000E0F0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8000E0F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8000E120;
    }
}

loc_8000E0F8:
{
    r0 = (0 - r29);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32576));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 300), r0);
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32600));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 296));
    f2.d = (f0.d - f2.d);
    ctx->lr = 0x8000E118u;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f31.d = (f31.d / f1.d);
    goto loc_8000E140;
}

loc_8000E120:
{
    r0 = (r29 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 308), r0);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -32576));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 304));
    f1.d = MemoryInline::FlatReadFloat64((r2 + -32600));
    f2.d = (f0.d - f2.d);
    ctx->lr = 0x8000E13Cu;
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
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001BBF0u>(ctx);
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
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    f31.d = (f31.d * f1.d);
}

loc_8000E140:
{
    f1.d = f31.d;
    r3 = r29;
    ctx->lr = 0x8000E14Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001B830u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    f31.d = f1.d;
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f1.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000EF7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8000E15C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E168;
    }
}

loc_8000E160:
{
    f31.d = MemoryInline::FlatReadFloat64((r2 + -32592));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
}

loc_8000E168:
{
    f1.d = f31.d;
    r3 = (r1 + 164);
    r27 = 0;
    ctx->lr = 0x8000E178u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D998u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = (r1 + 164);
    r4 = (r1 + 252);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D298u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E188:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E400;
    }
}

loc_8000E18C:
{
    r3 = (r1 + 164);
    r4 = (r1 + 252);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D37Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8000E19C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8000E1A4;
    }
}

loc_8000E1A0:
{
    r27 = 1;
}

loc_8000E1A4:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r27));
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f31.d);
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_1 & 134217727);
    r29 = 1;
    r30 = 0;
    r31 = -1;
}

loc_8000E1BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8000E1C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E1F0;
    }
}

loc_8000E1C4:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0_addc_left_2 = r0;
    r0 = (r0_addc_left_2 + r29);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_2)) + static_cast<uint64_t>(static_cast<uint32_t>(r29)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0_ca_2 = (xer >> 29) & 1u;
    r0 = (r3 + r30);
    r0 = (r0 + r0_ca_2);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(r30)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_2)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000EF7Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_8000E1E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E400;
    }
}

loc_8000E1EC:
{
    goto loc_8000E208;
}

loc_8000E1F0:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0_addc_left_3 = r0;
    r0 = (r0_addc_left_3 + r31);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_left_3)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0_ca_3 = (xer >> 29) & 1u;
    r0 = (r3 + r31);
    r0 = (r0 + r0_ca_3);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(r31)) + (static_cast<uint64_t>(static_cast<uint32_t>(r0_ca_3)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
}

loc_8000E208:
{
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r3 = (r1 + 120);
    ctx->lr = 0x8000E214u;
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D998u>(ctx);
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
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8000E218:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E230;
    }
}

loc_8000E21C:
{
    r3 = (r1 + 120);
    r4 = (r1 + 252);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D37Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E22C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E3A0;
    }
}

loc_8000E230:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_8000E234:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E33C;
    }
}

loc_8000E238:
{
    r3 = (r1 + 252);
    r4 = (r1 + 120);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D37Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E248:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8000E33C;
    }
}

loc_8000E24C:
{
    f0.d = f31.d;
    f31.d = MemoryInline::FlatReadFloat64((r1 + 8));
    r21 = MemoryInline::FlatRead32((r1 + 164));
    r12 = MemoryInline::FlatRead32((r1 + 120));
    r22 = MemoryInline::FlatRead32((r1 + 168));
    r11 = MemoryInline::FlatRead32((r1 + 124));
    r23 = MemoryInline::FlatRead32((r1 + 172));
    r10 = MemoryInline::FlatRead32((r1 + 128));
    r24 = MemoryInline::FlatRead32((r1 + 176));
    r9 = MemoryInline::FlatRead32((r1 + 132));
    r25 = MemoryInline::FlatRead32((r1 + 180));
    r8 = MemoryInline::FlatRead32((r1 + 136));
    r26 = MemoryInline::FlatRead32((r1 + 184));
    r7 = MemoryInline::FlatRead32((r1 + 140));
    r31 = MemoryInline::FlatRead32((r1 + 188));
    r6 = MemoryInline::FlatRead32((r1 + 144));
    r30 = MemoryInline::FlatRead32((r1 + 192));
    r5 = MemoryInline::FlatRead32((r1 + 148));
    r29 = MemoryInline::FlatRead32((r1 + 196));
    r4 = MemoryInline::FlatRead32((r1 + 152));
    r28 = MemoryInline::FlatRead32((r1 + 200));
    r3 = MemoryInline::FlatRead32((r1 + 156));
    r27 = MemoryInline::FlatRead16((r1 + 204));
    r0 = MemoryInline::FlatRead16((r1 + 160));
    MemoryInline::FlatWriteRam32((r1 + 76), r21);
    MemoryInline::FlatWriteRam32((r1 + 80), r22);
    MemoryInline::FlatWriteRam32((r1 + 84), r23);
    MemoryInline::FlatWriteRam32((r1 + 88), r24);
    MemoryInline::FlatWriteRam32((r1 + 92), r25);
    MemoryInline::FlatWriteRam32((r1 + 96), r26);
    MemoryInline::FlatWriteRam32((r1 + 100), r31);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    MemoryInline::FlatWriteRam32((r1 + 108), r29);
    MemoryInline::FlatWriteRam32((r1 + 112), r28);
    MemoryInline::FlatWriteRam16((r1 + 116), static_cast<uint16_t>(r27));
    MemoryInline::FlatWriteRam32((r1 + 164), r12);
    MemoryInline::FlatWriteRam32((r1 + 168), r11);
    MemoryInline::FlatWriteRam32((r1 + 172), r10);
    MemoryInline::FlatWriteRam32((r1 + 176), r9);
    MemoryInline::FlatWriteRam32((r1 + 180), r8);
    MemoryInline::FlatWriteRam32((r1 + 184), r7);
    MemoryInline::FlatWriteRam32((r1 + 188), r6);
    MemoryInline::FlatWriteRam32((r1 + 192), r5);
    MemoryInline::FlatWriteRam32((r1 + 196), r4);
    MemoryInline::FlatWriteRam32((r1 + 200), r3);
    MemoryInline::FlatWriteRam16((r1 + 204), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 120), r21);
    MemoryInline::FlatWriteRam32((r1 + 124), r22);
    MemoryInline::FlatWriteRam32((r1 + 128), r23);
    MemoryInline::FlatWriteRam32((r1 + 132), r24);
    MemoryInline::FlatWriteRam32((r1 + 136), r25);
    MemoryInline::FlatWriteRam32((r1 + 140), r26);
    MemoryInline::FlatWriteRam32((r1 + 144), r31);
    MemoryInline::FlatWriteRam32((r1 + 148), r30);
    MemoryInline::FlatWriteRam32((r1 + 152), r29);
    MemoryInline::FlatWriteRam32((r1 + 156), r28);
    MemoryInline::FlatWriteRam16((r1 + 160), static_cast<uint16_t>(r27));
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f31.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 8), f0.d);
    goto loc_8000E3A0;
}

loc_8000E33C:
{
    guest_range_5 = MemoryInline::ResolveRangeHost((r1 + 8), 0, 154u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 112u);
        if (resolved_pair.valid) {
            r12 = resolved_pair.first;
            r11 = resolved_pair.second;
        } else {
            r12 = MemoryInline::ReadResolved32(guest_range_5, 112u, (r1 + 120));
            r11 = MemoryInline::ReadResolved32(guest_range_5, 116u, (r1 + 124));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 120u);
        if (resolved_pair.valid) {
            r10 = resolved_pair.first;
            r9 = resolved_pair.second;
        } else {
            r10 = MemoryInline::ReadResolved32(guest_range_5, 120u, (r1 + 128));
            r9 = MemoryInline::ReadResolved32(guest_range_5, 124u, (r1 + 132));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 128u);
        if (resolved_pair.valid) {
            r8 = resolved_pair.first;
            r7 = resolved_pair.second;
        } else {
            r8 = MemoryInline::ReadResolved32(guest_range_5, 128u, (r1 + 136));
            r7 = MemoryInline::ReadResolved32(guest_range_5, 132u, (r1 + 140));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 136u);
        if (resolved_pair.valid) {
            r6 = resolved_pair.first;
            r5 = resolved_pair.second;
        } else {
            r6 = MemoryInline::ReadResolved32(guest_range_5, 136u, (r1 + 144));
            r5 = MemoryInline::ReadResolved32(guest_range_5, 140u, (r1 + 148));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_5, 144u);
        if (resolved_pair.valid) {
            r4 = resolved_pair.first;
            r3 = resolved_pair.second;
        } else {
            r4 = MemoryInline::ReadResolved32(guest_range_5, 144u, (r1 + 152));
            r3 = MemoryInline::ReadResolved32(guest_range_5, 148u, (r1 + 156));
        }
    }
    r0 = MemoryInline::ReadResolved16(guest_range_5, 152u, (r1 + 160));
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_5, 0u, (r1 + 8));
    guest_range_6 = MemoryInline::ResolveRangeHost((r1 + 16), 0, 190u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 148u, ((static_cast<uint64_t>(static_cast<uint32_t>(r12)) << 32) | static_cast<uint32_t>(r11)))) {
        MemoryInline::WriteResolved32(guest_range_6, 148u, (r1 + 164), r12);
        MemoryInline::WriteResolved32(guest_range_6, 152u, (r1 + 168), r11);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 156u, ((static_cast<uint64_t>(static_cast<uint32_t>(r10)) << 32) | static_cast<uint32_t>(r9)))) {
        MemoryInline::WriteResolved32(guest_range_6, 156u, (r1 + 172), r10);
        MemoryInline::WriteResolved32(guest_range_6, 160u, (r1 + 176), r9);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 164u, ((static_cast<uint64_t>(static_cast<uint32_t>(r8)) << 32) | static_cast<uint32_t>(r7)))) {
        MemoryInline::WriteResolved32(guest_range_6, 164u, (r1 + 180), r8);
        MemoryInline::WriteResolved32(guest_range_6, 168u, (r1 + 184), r7);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 172u, ((static_cast<uint64_t>(static_cast<uint32_t>(r6)) << 32) | static_cast<uint32_t>(r5)))) {
        MemoryInline::WriteResolved32(guest_range_6, 172u, (r1 + 188), r6);
        MemoryInline::WriteResolved32(guest_range_6, 176u, (r1 + 192), r5);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_6, 180u, ((static_cast<uint64_t>(static_cast<uint32_t>(r4)) << 32) | static_cast<uint32_t>(r3)))) {
        MemoryInline::WriteResolved32(guest_range_6, 180u, (r1 + 196), r4);
        MemoryInline::WriteResolved32(guest_range_6, 184u, (r1 + 200), r3);
    }
    MemoryInline::WriteResolved16(guest_range_6, 188u, (r1 + 204), static_cast<uint16_t>(r0));
    MemoryInline::WriteResolvedFloat64(guest_range_6, 0u, (r1 + 16), f31.d);
    goto loc_8000E1BC;
}

loc_8000E3A0:
{
    r3 = (r1 + 76);
    r4 = (r1 + 252);
    r5 = (r1 + 164);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D47Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 32);
    r4 = (r1 + 120);
    r5 = (r1 + 252);
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
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D47Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
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
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = (r1 + 76);
    r4 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D298u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8000E3D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E3E8;
    }
}

loc_8000E3D4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r0 = (r0 & 1);
}

loc_8000E3DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8000E400;
    }
}

loc_8000E3E0:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 8));
    goto loc_8000E400;
}

loc_8000E3E8:
{
    r3 = (r1 + 76);
    r4 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8000D37Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8000E3F8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8000E400;
    }
}

loc_8000E3FC:
{
    f31.d = MemoryInline::FlatReadFloat64((r1 + 8));
}

loc_8000E400:
{
    r0 = MemoryInline::FlatRead8((r1 + 252));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000E410;
    }
}

loc_8000E40C:
{
    f31.d = (-(f31.d));
}

loc_8000E410:
{
    f1.d = f31.d;
}

loc_8000E414:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 368);
    f31.d = MemoryInline::FlatReadFloat64((r1 + 368));
    // inline leaf 0x800215CC (14 guest instruction(s))
    guest_range_2 = MemoryInline::ResolveRangeHost((r11 + -52), 0, 52u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r19 = resolved_pair.first;
            r20 = resolved_pair.second;
        } else {
            r19 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -52));
            r20 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -48));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 16u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_2, 20u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 24u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_2, 24u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_2, 28u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 32u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 32u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 36u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 40u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 40u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 44u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 48u, (r11 + -4));
    // end of inlined leaf 0x800215CC
    r0 = MemoryInline::FlatRead32((r1 + 388));
    ctx->lr = r0;
    r1 = (r1 + 384);
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
    ctx->fpr[2] = f2;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFF83FFF gpr_write=0xFFF81FFB gpr_return=0x00000018 fpr_read=0xFC003FFF fpr_write=0xFC003FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8000DC9C func_8000DC9C preserves=false fpr_mask=0x80000000
