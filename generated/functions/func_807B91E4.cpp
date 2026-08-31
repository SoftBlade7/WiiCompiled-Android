#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B91E4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_14 = 0;
    uint32_t r0_rot_2 = 0;
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
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_psq_tmp_0 = 0;
    uint32_t r3_psq_tmp_1 = 0;
    uint32_t r3_psq_tmp_2 = 0;
    uint32_t r3_psq_tmp_3 = 0;
    uint32_t r3_psq_tmp_4 = 0;
    uint32_t r3_psq_tmp_5 = 0;
    uint32_t r3_psq_tmp_6 = 0;
    uint32_t r3_psq_tmp_7 = 0;
    uint32_t r3_psq_tmp_8 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;
    uint32_t r3_rot_9 = 0;
    uint32_t r4_psq_tmp_0 = 0;
    uint32_t r4_psq_tmp_1 = 0;
    uint32_t r4_psq_tmp_2 = 0;
    uint32_t r4_psq_tmp_3 = 0;
    uint32_t r4_psq_tmp_4 = 0;
    uint32_t r4_psq_tmp_5 = 0;
    uint32_t r4_psq_tmp_6 = 0;
    uint32_t r4_psq_tmp_7 = 0;
    uint32_t r4_psq_tmp_8 = 0;
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    [[maybe_unused]] uint32_t mkw_gqr0 = ctx->gqr[0];

    goto loc_807B91E4;

loc_807B91E4:
{
    MemoryInline::FlatWriteRam32((r1 + -192), r1);
    r1 = (r1 + -192);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 196), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 176), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 184);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 160);
    // inline leaf 0x8002157C (15 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r18)) << 32) | static_cast<uint32_t>(r19)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -56), r18);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -52), r19);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r20)) << 32) | static_cast<uint32_t>(r21)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -48), r20);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -44), r21);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r22)) << 32) | static_cast<uint32_t>(r23)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -40), r22);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -36), r23);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r24)) << 32) | static_cast<uint32_t>(r25)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -32), r24);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -28), r25);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 40u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002157C
    r0 = MemoryInline::FlatRead8((r3 + 1));
    r25 = 0x808A0000u;
    r29 = r3;
    r30 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B921C:
{
    r18 = r5;
    r31 = r6;
    r25 = (r25 + 25248);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B9268;
    }
}

loc_807B922C:
{
    r19 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r19 + -10520));
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805181F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r19 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80518268u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r22 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r19 + -10520));
    r4 = (r1 + 9);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80518344u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r21 = (r3 & 255);
    goto loc_807B92A0;
}

loc_807B9268:
{
    r19 = 0x809C0000u;
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r19 + -10520));
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805182CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r3));
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r19 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80518344u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r22 = (r3 & 255);
    r3 = MemoryInline::FlatRead32((r19 + -10520));
    r4 = (r1 + 9);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80518268u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r21 = (r3 & 255);
}

loc_807B92A0:
{
}

loc_807B92A4:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_807B94C0;
    }
}

loc_807B92A8:
{
}

loc_807B92AC:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(1))) {
        goto loc_807B92B8;
    }
}

loc_807B92B0:
{
}

loc_807B92B4:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(1))) {
        goto loc_807B94C0;
    }
}

loc_807B92B8:
{
}

loc_807B92BC:
{
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(12))) {
        goto loc_807B94C0;
    }
}

loc_807B92C0:
{
    r19 = (r1 + 72);
    r23 = 0;
    r24 = 0;
    r20 = 0x809C0000u;
    goto loc_807B9314;
}

loc_807B92D4:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B92DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B92F4;
    }
}

loc_807B92E0:
{
    r3 = MemoryInline::FlatRead32((r20 + -10520));
    r4 = r29;
    r5 = (r24 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805181F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_807B9304;
}

loc_807B92F4:
{
    r3 = MemoryInline::FlatRead32((r20 + -10520));
    r4 = r29;
    r5 = (r24 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805182CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_807B9304:
{
    MemoryInline::FlatWrite8(r19, static_cast<uint8_t>(r3));
    r24 = (r24 + 1);
    r23 = (r23 + 1);
    r19 = (r19 + 1);
}

loc_807B9314:
{
}

loc_807B9318:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r22))) {
        goto loc_807B92D4;
    }
}

loc_807B931C:
{
    r0 = (r1 + 72);
    r24 = 0;
    r19 = (r0 + r23);
    r20 = 0x809C0000u;
    goto loc_807B9370;
}

loc_807B9330:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B9338:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B9350;
    }
}

loc_807B933C:
{
    r3 = MemoryInline::FlatRead32((r20 + -10520));
    r4 = (r1 + 9);
    r5 = (r24 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805182CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_807B9360;
}

loc_807B9350:
{
    r3 = MemoryInline::FlatRead32((r20 + -10520));
    r4 = (r1 + 9);
    r5 = (r24 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805181F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_807B9360:
{
    MemoryInline::FlatWrite8(r19, static_cast<uint8_t>(r3));
    r24 = (r24 + 1);
    r23 = (r23 + 1);
    r19 = (r19 + 1);
}

loc_807B9370:
{
}

loc_807B9374:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r21))) {
        goto loc_807B9330;
    }
}

loc_807B9378:
{
    r3 = 0x809C0000u;
    r0 = 1127219200;
    r3 = MemoryInline::FlatRead32((r3 + 13932));
    r4 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r4 + 13848));
    r4 = (r18 * 584);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 92), r3);
    r3 = MemoryInline::FlatRead32((r5 + 20));
    r24 = 0;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    f2.d = MemoryInline::FlatReadFloat64((r25 + 16));
    r3 = (r3 + r4);
    f1.d = MemoryInline::FlatReadFloat64((r1 + 88));
    r19 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r25 + 8));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r3 = MemoryInline::FlatRead8((r3 + 68));
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f0.d);
    r20 = fctiwzword0;
    goto loc_807B94B8;
}

loc_807B93D8:
{
    r4 = (r1 + 72);
    r5 = (r3 & 255);
    r7 = 0;
    ctr = r23;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_807B93EC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B94A0;
    }
}

loc_807B93F0:
{
    r6 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(r6));
}

loc_807B93F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B9494;
    }
}

loc_807B93FC:
{
    r0 = MemoryInline::FlatRead8(r29);
}

loc_807B9404:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r0))) {
        goto loc_807B9438;
    }
}

loc_807B9408:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(1));
}

loc_807B940C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B9494;
    }
}

loc_807B9410:
{
    r3 = (r7 + 1);
    r0 = (r1 + 72);
    r4 = (r3 - r22);
    r7 = 0;
    r3 = PPC_Divw(static_cast<int32_t>(r4), static_cast<int32_t>(r21));
    r3 = (r3 * r21);
    r3 = (r4 - r3);
    r3 = (r22 + r3);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead8(r3_addr_1);
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
}

loc_807B9438:
{
}

loc_807B943C:
{
    if ((static_cast<int32_t>(r7) >= static_cast<int32_t>(r22))) {
        goto loc_807B9448;
    }
}

loc_807B9440:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    goto loc_807B9454;
}

loc_807B9448:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_807B9454:
{
    r4 = (r3 & 255);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r3));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_807B9460:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B99AC;
    }
}

loc_807B9468:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_807B99AC;
}

loc_807B9494:
{
    r4 = (r4 + 1);
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_807B93F0;
    }
}

loc_807B94A0:
{
    r3 = MemoryInline::FlatRead32((r19 + -10520));
    r4 = (r1 + 8);
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805181F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    MemoryInline::FlatWriteRam8((r1 + 8), static_cast<uint8_t>(r3));
    r24 = (r24 + 1);
}

loc_807B94B8:
{
}

loc_807B94BC:
{
    if ((static_cast<int32_t>(r24) < static_cast<int32_t>(r20))) {
        goto loc_807B93D8;
    }
}

loc_807B94C0:
{
}

loc_807B94C4:
{
    if ((static_cast<int32_t>(r22) > static_cast<int32_t>(1))) {
        goto loc_807B9514;
    }
}

loc_807B94C8:
{
}

loc_807B94CC:
{
    if ((static_cast<int32_t>(r21) > static_cast<int32_t>(1))) {
        goto loc_807B9514;
    }
}

loc_807B94D0:
{
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_807B94DC:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B99AC;
    }
}

loc_807B94E8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_807B99AC;
}

loc_807B9514:
{
}

loc_807B9518:
{
    f31.d = MemoryInline::FlatReadFloat32((r25 + 4));
    if ((static_cast<uint32_t>(r18) >= static_cast<uint32_t>(12))) {
        goto loc_807B96FC;
    }
}

loc_807B9520:
{
    r3 = 0x809C0000u;
    r4 = r18;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3_addr_3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_3);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f1.d = MemoryInline::FlatReadFloat32(r3);
    r4 = (r1 + 60);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    r24 = r3;
    f30.d = MemoryInline::FlatReadFloat32(r25);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r25 + 12));
    MemoryInline::FlatWriteRamFloat32((r1 + 64), f30.d);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 60), f1.d);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 12));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f3, PPC_PsqLStackInline<0u, 0u>(ctx, r4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 68), f1.d);
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(PPC_PsFromScalarInline(f1.d), PPC_PsFromScalarInline(f1.d), f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f0.d);
}

loc_807B9580:
{
    r0 = cr;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_807B9588:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f1.d = PPC_PsToScalarInline(f1.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807B96FC;
    }
}

loc_807B958C:
{
    r4 = 1374420992;
    r3 = 1717960704;
    r28 = (r4 + -31457);
    r20 = 255;
    r27 = (r3 + 26215);
    r19 = 0;
    r26 = 0x809C0000u;
    f1.d = PPC_PsToScalarInline(f1.d);
    f3.d = PPC_PsToScalarInline(f3.d);
    goto loc_807B96E0;
}

loc_807B95AC:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B95B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B95D0;
    }
}

loc_807B95B8:
{
    r3 = MemoryInline::FlatRead32((r26 + -10520));
    r4 = r29;
    r5 = (r19 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805181F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r23 = r3;
    goto loc_807B95E4;
}

loc_807B95D0:
{
    r3 = MemoryInline::FlatRead32((r26 + -10520));
    r4 = r29;
    r5 = (r19 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805182CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r23 = r3;
}

loc_807B95E4:
{
    r3 = MemoryInline::FlatRead32((r26 + -10520));
    r4 = (r23 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead16((r5 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r28)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_2 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r27)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & 1);
    r0 = (r0 + r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B96DC;
    }
}

loc_807B9624:
{
    f7.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f5.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f4.d = MemoryInline::FlatReadFloat32(r24);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 48), f5.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 52), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 56), f7.d);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807B966C:
{
    r0 = cr;
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_6 & 1);
}

loc_807B9674:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B96DC;
    }
}

loc_807B9678:
{
    r4 = (r23 & 255);
    r0 = (r20 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807B9684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B96DC;
    }
}

loc_807B9688:
{
    r3 = MemoryInline::FlatRead32((r26 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32(r3);
    r4 = r24;
    r3 = (r1 + 36);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRamFloat32((r1 + 36), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 40), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 44), f0.d);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_2 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_2 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_2));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f31.d);
}

loc_807B96BC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B96CC;
    }
}

loc_807B96C0:
{
    f31.d = f1.d;
    r0 = 1;
    f31.d = PPC_PsToScalarInline(f31.d);
    goto loc_807B96D0;
}

loc_807B96CC:
{
    r0 = 0;
}

loc_807B96D0:
{
}

loc_807B96D4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807B96DC;
    }
}

loc_807B96D8:
{
    r20 = r23;
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
}

loc_807B96DC:
{
    r19 = (r19 + 1);
}

loc_807B96E0:
{
    r0 = (r19 & 255);
}

loc_807B96E8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r22))) {
        goto loc_807B95AC;
    }
}

loc_807B96EC:
{
    r0 = (r20 & 255);
}

loc_807B96F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(255))) {
        goto loc_807B96FC;
    }
}

loc_807B96F8:
{
    MemoryInline::FlatWriteRam8((r1 + 9), static_cast<uint8_t>(r20));
}

loc_807B96FC:
{
}

loc_807B9700:
{
    if ((static_cast<int32_t>(r21) <= static_cast<int32_t>(1))) {
        goto loc_807B9728;
    }
}

loc_807B9704:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_807B970C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B9718;
    }
}

loc_807B9710:
{
}

loc_807B9714:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_807B9728;
    }
}

loc_807B9718:
{
}

loc_807B971C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B9728;
    }
}

loc_807B9720:
{
}

loc_807B9724:
{
    if ((static_cast<uint32_t>(r18) < static_cast<uint32_t>(12))) {
        goto loc_807B976C;
    }
}

loc_807B9728:
{
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_807B9734:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B99AC;
    }
}

loc_807B9740:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_807B99AC;
}

loc_807B976C:
{
    r3 = 0x809C0000u;
    r4 = r18;
    r3 = MemoryInline::FlatRead32((r3 + 6392));
    r19 = 255;
    // inline leaf 0x80590100 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 32));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r3_addr_5 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_5);
    // end of inlined leaf 0x80590100
    // inline leaf 0x8059020C (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 104);
    // end of inlined leaf 0x8059020C
    f30.d = MemoryInline::FlatReadFloat32(r25);
    r23 = r3;
    r20 = 0;
    r28 = 0x809C0000u;
    r22 = 1374420992;
    r18 = 1717960704;
    goto loc_807B9910;
}

loc_807B97A0:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B97A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B97C4;
    }
}

loc_807B97AC:
{
    r3 = MemoryInline::FlatRead32((r28 + -10520));
    r4 = (r1 + 9);
    r5 = (r20 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805182CCu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r24 = r3;
    goto loc_807B97D8;
}

loc_807B97C4:
{
    r3 = MemoryInline::FlatRead32((r28 + -10520));
    r4 = (r1 + 9);
    r5 = (r20 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x805181F0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r24 = r3;
}

loc_807B97D8:
{
    r0 = MemoryInline::FlatRead8(r29);
    r3 = (r24 & 255);
}

loc_807B97E4:
{
    if ((static_cast<uint32_t>(r3) == static_cast<uint32_t>(r0))) {
        goto loc_807B990C;
    }
}

loc_807B97E8:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
}

loc_807B97F0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B97FC;
    }
}

loc_807B97F4:
{
}

loc_807B97F8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(0))) {
        goto loc_807B9804;
    }
}

loc_807B97FC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B9800:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807B980C;
    }
}

loc_807B9804:
{
    r19 = r24;
    goto loc_807B991C;
}

loc_807B980C:
{
    r3 = MemoryInline::FlatRead32((r28 + -10520));
    r4 = (r24 & 255);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r6 = MemoryInline::FlatRead32(r3);
    r0 = (r22 + -31457);
    r5 = (r18 + 26215);
    r4 = MemoryInline::FlatRead16((r6 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r0)) * static_cast<int64_t>(static_cast<int32_t>(r4))) >> 32));
    r0 = (static_cast<int32_t>(r0) >> 5);
    r3_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_6 & 1);
    r0 = (r0 + r3);
    r0 = (r0 * 100);
    r0 = (r4 - r0);
    r0 = (static_cast<int32_t>((static_cast<int64_t>(static_cast<int32_t>(r5)) * static_cast<int64_t>(static_cast<int32_t>(r0))) >> 32));
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r0 = (r0 + r3);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807B990C;
    }
}

loc_807B9854:
{
    f7.d = MemoryInline::FlatReadFloat32((r6 + 8));
    f5.d = MemoryInline::FlatReadFloat32(r6);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 4));
    f4.d = MemoryInline::FlatReadFloat32(r23);
    f1.d = MemoryInline::FlatReadFloat32((r29 + 12));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat32((r23 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f1.d));
    f6.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f2.d = PpcFmulsInline(f4.d, f3.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f5.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f6.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 32), f7.d);
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807B989C:
{
    r0 = cr;
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & 1);
}

loc_807B98A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807B990C;
    }
}

loc_807B98A8:
{
    r4 = (r24 & 255);
    r0 = (r19 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_807B98B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B990C;
    }
}

loc_807B98B8:
{
    r3 = MemoryInline::FlatRead32((r28 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r5 = MemoryInline::FlatRead32(r3);
    r4 = r23;
    r3 = (r1 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r5);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f0.d);
    // inline leaf 0x8019ADE0 (10 guest instruction(s))
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r3_psq_tmp_6 = (r3 + 4);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<0u, 0u>(ctx, r3_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r4_psq_tmp_6 = (r4 + 4);
    PpcSetPairedFprInline(f1, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4_psq_tmp_6));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<0u, 0u>(ctx, r3));
    PpcSetPairedFprInline(f3, PPC_PsSubInline(f0.d, f1.d));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    PpcSetPairedFprInline(f0, PPC_PsqLGqrInline<0u, 0u>(ctx, mkw_gqr0, r4));
    PpcSetPairedFprInline(f0, PPC_PsSubInline(f2.d, f0.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f3.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsMaddInline(f0.d, f0.d, f3.d));
    PpcSetPairedFprInline(f1, PPC_PsSum0Inline(f1.d, f3.d, f3.d));
    // end of inlined leaf 0x8019ADE0
    SetCRFloatResident(cr, 0, PPC_PsToScalarInline(f1.d), f31.d);
}

loc_807B98EC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807B98FC;
    }
}

loc_807B98F0:
{
    f31.d = f1.d;
    r0 = 1;
    f31.d = PPC_PsToScalarInline(f31.d);
    goto loc_807B9900;
}

loc_807B98FC:
{
    r0 = 0;
}

loc_807B9900:
{
}

loc_807B9904:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        f0.d = PPC_PsToScalarInline(f0.d);
        f1.d = PPC_PsToScalarInline(f1.d);
        f2.d = PPC_PsToScalarInline(f2.d);
        f3.d = PPC_PsToScalarInline(f3.d);
        goto loc_807B990C;
    }
}

loc_807B9908:
{
    r19 = r24;
    f0.d = PPC_PsToScalarInline(f0.d);
    f1.d = PPC_PsToScalarInline(f1.d);
    f2.d = PPC_PsToScalarInline(f2.d);
    f3.d = PPC_PsToScalarInline(f3.d);
}

loc_807B990C:
{
    r20 = (r20 + 1);
}

loc_807B9910:
{
    r0 = (r20 & 255);
}

loc_807B9918:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r21))) {
        goto loc_807B97A0;
    }
}

loc_807B991C:
{
    r4 = (r19 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_807B9924:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B996C;
    }
}

loc_807B9928:
{
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r19));
    r0_rot_13 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_13 & 134217727);
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B99AC;
    }
}

loc_807B9940:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
    goto loc_807B99AC;
}

loc_807B996C:
{
    r4 = MemoryInline::FlatRead8((r1 + 9));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(255));
}

loc_807B9978:
{
    MemoryInline::FlatWrite8((r30 + 1), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r4));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807B99AC;
    }
}

loc_807B9984:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80514D3Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = MemoryInline::FlatReadFloat32(r3);
    MemoryInline::FlatWriteFloat32((r30 + 4), f2.d);
    MemoryInline::FlatWriteFloat32((r30 + 8), f1.d);
    MemoryInline::FlatWriteFloat32((r30 + 12), f0.d);
}

loc_807B99AC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 176));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 160);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // inline leaf 0x800215C8 (15 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -56), 0, 56u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r18 = resolved_pair.first;
            r19 = resolved_pair.second;
        } else {
            r18 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -56));
            r19 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -52));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r20 = resolved_pair.first;
            r21 = resolved_pair.second;
        } else {
            r20 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -48));
            r21 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -44));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r22 = resolved_pair.first;
            r23 = resolved_pair.second;
        } else {
            r22 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -40));
            r23 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -36));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r24 = resolved_pair.first;
            r25 = resolved_pair.second;
        } else {
            r24 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -32));
            r25 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -28));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r26 = resolved_pair.first;
            r27 = resolved_pair.second;
        } else {
            r26 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -24));
            r27 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -20));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 40u);
        if (resolved_pair.valid) {
            r28 = resolved_pair.first;
            r29 = resolved_pair.second;
        } else {
            r28 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -16));
            r29 = MemoryInline::ReadResolved32(guest_range_1, 44u, (r11 + -12));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 48u);
        if (resolved_pair.valid) {
            r30 = resolved_pair.first;
            r31 = resolved_pair.second;
        } else {
            r30 = MemoryInline::ReadResolved32(guest_range_1, 48u, (r11 + -8));
            r31 = MemoryInline::ReadResolved32(guest_range_1, 52u, (r11 + -4));
        }
    }
    // end of inlined leaf 0x800215C8
    r0 = MemoryInline::FlatRead32((r1 + 196));
    ctx->lr = r0;
    r1 = (r1 + 192);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFC00FB gpr_write=0xFFFC08FB gpr_return=0x00000018 fpr_read=0xC00000FF fpr_write=0xC00000FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x807B91E4 func_807B91E4 preserves=false fpr_mask=0xC0000000
