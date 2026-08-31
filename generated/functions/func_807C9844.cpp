#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807C9844(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r30_stbu_ea_0 = 0;
    uint32_t r30_stbu_ea_1 = 0;
    uint32_t r30_stbu_ea_2 = 0;
    uint32_t r30_stbu_ea_3 = 0;
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
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807C9844;

loc_807C9844:
{
    MemoryInline::FlatWriteRam32((r1 + -176), r1);
    r1 = (r1 + -176);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 180), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 160), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 168);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 144), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 152);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 128), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 112), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 112);
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
    r14 = 0x808A0000u;
    r24 = r3;
    r14 = (r14 + 26416);
    f1.d = MemoryInline::FlatReadFloat32((r14 + 2552));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80085180u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    f30.d = f1.d;
    r3 = 0x80240000u;
    f31.d = MemoryInline::FlatReadFloat64((r14 + 2544));
    r19 = (r3 + 30272);
    f29.d = MemoryInline::FlatReadFloat32((r14 + 2556));
    r31 = 0;
    f28.d = MemoryInline::FlatReadFloat32((r14 + 2560));
    r14 = (r14 + 440);
    r20 = 0x808B0000u;
    r21 = 0x808B0000u;
    r22 = 0x808B0000u;
    r23 = 0x808D0000u;
    r17 = 1;
    r18 = 1127219200;
}

loc_807C98C4:
{
    r3 = (r31 & 65535);
    r0 = (r3 * 24);
    r4 = (r14 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C98D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C9FE0;
    }
}

loc_807C98DC:
{
    r0 = MemoryInline::FlatRead8((r4 + 20));
    r30 = (r24 + r3);
    r30_stbu_ea_2 = (r30 + 332);
    MemoryInline::FlatWrite8(r30_stbu_ea_2, static_cast<uint8_t>(r0));
    r30 = r30_stbu_ea_2;
    r0 = MemoryInline::FlatRead8((r24 + 330));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C98F0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C990C;
    }
}

loc_807C98F4:
{
    r0 = MemoryInline::FlatRead8((r24 + 331));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C98FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C990C;
    }
}

loc_807C9900:
{
    r0 = 0;
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
    goto loc_807C9FE0;
}

loc_807C990C:
{
    r3 = r24;
    r4 = r30;
    r5 = (r31 & 65535);
    ctx->lr = 0x807C991Cu;
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
    InvokeDirectCpu<0x807D3188u>(ctx);
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
    r3 = MemoryInline::FlatRead32((r24 + 108));
    r4 = (r31 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807C9934:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9FE0;
    }
}

loc_807C9938:
{
    r3 = MemoryInline::FlatRead8(r30);
    r0 = (r3 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C9940:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9FE0;
    }
}

loc_807C9944:
{
    r4 = MemoryInline::FlatRead8((r24 + 330));
    r29 = 0;
}

loc_807C9950:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807C9960;
    }
}

loc_807C9954:
{
    r0 = (r3 & 1);
}

loc_807C9958:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807C9960;
    }
}

loc_807C995C:
{
    r29 = 1;
}

loc_807C9960:
{
}

loc_807C9964:
{
    r28 = 0;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807C9978;
    }
}

loc_807C996C:
{
    r0 = (r3 & 2);
}

loc_807C9970:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807C9978;
    }
}

loc_807C9974:
{
    r28 = 1;
}

loc_807C9978:
{
    r4 = MemoryInline::FlatRead8((r24 + 331));
    r27 = 0;
}

loc_807C9984:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_807C9994;
    }
}

loc_807C9988:
{
    r0 = (r3 & 20);
}

loc_807C998C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807C9994;
    }
}

loc_807C9990:
{
    r27 = 1;
}

loc_807C9994:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807C9998:
{
    r26 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C99AC;
    }
}

loc_807C99A0:
{
    r0 = (r3 & 40);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C99A4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C99AC;
    }
}

loc_807C99A8:
{
    r26 = 1;
}

loc_807C99AC:
{
    r25 = 0;
    goto loc_807C9F04;
}

loc_807C99B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_807C99B8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C99D4;
    }
}

loc_807C99BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807C99C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C99D4;
    }
}

loc_807C99C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r27), static_cast<int32_t>(0));
}

loc_807C99C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C99D4;
    }
}

loc_807C99CC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_807C99D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9F90;
    }
}

loc_807C99D4:
{
    r3 = MemoryInline::FlatRead32((r24 + 108));
    r4 = (r31 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_807C99EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9AD0;
    }
}

loc_807C99F0:
{
    r3 = MemoryInline::FlatRead32((r24 + 108));
    r4 = (r31 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r16 = MemoryInline::FlatRead32((r3 + 12));
    r15 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(0));
}

loc_807C9A0C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9A38;
    }
}

loc_807C9A10:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r19);
    r3 = r16;
    r4 = (r1 + 16);
    r12 = MemoryInline::FlatRead32(r16);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807C9A2Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807C9A30:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807C9A38;
    }
}

loc_807C9A34:
{
    r15 = 1;
}

loc_807C9A38:
{
}

loc_807C9A3C:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_807C9A44;
    }
}

loc_807C9A40:
{
    goto loc_807C9A48;
}

loc_807C9A44:
{
    r16 = 0;
}

loc_807C9A48:
{
}

loc_807C9A4C:
{
    r7 = MemoryInline::FlatRead32((r16 + 44));
    r0 = 0;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_807C9A60;
    }
}

loc_807C9A58:
{
}

loc_807C9A5C:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807C9A64;
    }
}

loc_807C9A60:
{
    r0 = 1;
}

loc_807C9A64:
{
}

loc_807C9A68:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807C9A74;
    }
}

loc_807C9A6C:
{
    r3 = MemoryInline::FlatRead32((r24 + 260));
    MemoryInline::FlatWrite8((r3 + 704), static_cast<uint8_t>(r17));
}

loc_807C9A74:
{
}

loc_807C9A78:
{
    r0 = 0;
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_807C9A88;
    }
}

loc_807C9A80:
{
}

loc_807C9A84:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_807C9A8C;
    }
}

loc_807C9A88:
{
    r0 = 1;
}

loc_807C9A8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807C9A90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C9AA4;
    }
}

loc_807C9A94:
{
    r3 = MemoryInline::FlatRead32((r24 + 260));
    MemoryInline::FlatWrite8((r3 + 128), static_cast<uint8_t>(r17));
    r3 = MemoryInline::FlatRead32((r24 + 260));
    MemoryInline::FlatWrite8((r3 + 416), static_cast<uint8_t>(r17));
}

loc_807C9AA4:
{
    r0 = (r25 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    r6 = (r1 + 12);
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r18);
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat64((r1 + 24));
    MemoryInline::FlatWriteRam32((r1 + 12), r7);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    r3 = MemoryInline::FlatRead32((r24 + 264));
    ctx->lr = 0x807C9AD0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x807CAE8Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807C9AD0:
{
}

loc_807C9AD4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807C9BDC;
    }
}

loc_807C9AD8:
{
    r3 = MemoryInline::FlatRead32((r24 + 260));
    r4 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r24 + 460));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 996));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 476));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1012));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 492));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1028));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9B14:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9B84;
    }
}

loc_807C9B18:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 464));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1000));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 480));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1016));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 496));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1032));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9B48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9B84;
    }
}

loc_807C9B4C:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 468));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1004));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 484));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1020));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 500));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1036));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9B7C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9B84;
    }
}

loc_807C9B80:
{
    r0 = 1;
}

loc_807C9B84:
{
}

loc_807C9B88:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C9BD0;
    }
}

loc_807C9B8C:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 488));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1024));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 472));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1008));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 504));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1040));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_807C9BC8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807C9BD0;
    }
}

loc_807C9BCC:
{
    r4 = 1;
}

loc_807C9BD0:
{
}

loc_807C9BD4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807C9BDC;
    }
}

loc_807C9BD8:
{
    r29 = 0;
}

loc_807C9BDC:
{
}

loc_807C9BE0:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807C9CE8;
    }
}

loc_807C9BE4:
{
    r3 = MemoryInline::FlatRead32((r24 + 260));
    r4 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r24 + 508));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1284));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 524));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1300));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 540));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1316));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9C20:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9C90;
    }
}

loc_807C9C24:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 512));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1288));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 528));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1304));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 544));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1320));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9C54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9C90;
    }
}

loc_807C9C58:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 516));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 1292));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 532));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1308));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 548));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1324));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9C88:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9C90;
    }
}

loc_807C9C8C:
{
    r0 = 1;
}

loc_807C9C90:
{
}

loc_807C9C94:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C9CDC;
    }
}

loc_807C9C98:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 536));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 1312));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 520));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1296));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 552));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 1328));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_807C9CD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807C9CDC;
    }
}

loc_807C9CD8:
{
    r4 = 1;
}

loc_807C9CDC:
{
}

loc_807C9CE0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807C9CE8;
    }
}

loc_807C9CE4:
{
    r28 = 0;
}

loc_807C9CE8:
{
}

loc_807C9CEC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807C9DF4;
    }
}

loc_807C9CF0:
{
    r3 = MemoryInline::FlatRead32((r24 + 260));
    r4 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r24 + 556));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 324));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 572));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 340));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 588));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 356));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9D2C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9D9C;
    }
}

loc_807C9D30:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 560));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 328));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 576));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 344));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 592));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 360));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9D60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9D9C;
    }
}

loc_807C9D64:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 564));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 332));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 580));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 348));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 596));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 364));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9D94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9D9C;
    }
}

loc_807C9D98:
{
    r0 = 1;
}

loc_807C9D9C:
{
}

loc_807C9DA0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C9DE8;
    }
}

loc_807C9DA4:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 584));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 352));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 568));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 336));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 600));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 368));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_807C9DE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807C9DE8;
    }
}

loc_807C9DE4:
{
    r4 = 1;
}

loc_807C9DE8:
{
}

loc_807C9DEC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_807C9DF4;
    }
}

loc_807C9DF0:
{
    r27 = 0;
}

loc_807C9DF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_807C9DF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9F00;
    }
}

loc_807C9DFC:
{
    r3 = MemoryInline::FlatRead32((r24 + 260));
    r4 = 0;
    f3.d = MemoryInline::FlatReadFloat32((r24 + 604));
    r0 = 0;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 612));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 620));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 628));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 636));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 644));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9E38:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9EA8;
    }
}

loc_807C9E3C:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 608));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 616));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 624));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 632));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 640));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 648));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9E6C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9EA8;
    }
}

loc_807C9E70:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 612));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 620));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 628));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 636));
    f2.d = PpcFmulsInline(f3.d, f2.d);
    f3.d = MemoryInline::FlatReadFloat32((r24 + 644));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 652));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f30.d);
}

loc_807C9EA0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807C9EA8;
    }
}

loc_807C9EA4:
{
    r0 = 1;
}

loc_807C9EA8:
{
}

loc_807C9EAC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807C9EF4;
    }
}

loc_807C9EB0:
{
    f3.d = MemoryInline::FlatReadFloat32((r24 + 632));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 640));
    f2.d = MemoryInline::FlatReadFloat32((r24 + 616));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 624));
    f1.d = MemoryInline::FlatReadFloat32((r24 + 648));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 656));
    f3.d = PpcFmulsInline(f3.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = PpcFmulsInline(f2.d, f2.d);
    f2.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_807C9EEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807C9EF4;
    }
}

loc_807C9EF0:
{
    r4 = 1;
}

loc_807C9EF4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807C9EF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C9F00;
    }
}

loc_807C9EFC:
{
    r26 = 0;
}

loc_807C9F00:
{
    r25 = (r25 + 1);
}

loc_807C9F04:
{
    r3 = MemoryInline::FlatRead32((r24 + 108));
    r4 = (r31 & 65535);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80557234u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    r16 = MemoryInline::FlatRead32((r3 + 12));
    r15 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r16), static_cast<int32_t>(0));
}

loc_807C9F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9F4C;
    }
}

loc_807C9F24:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r19);
    r3 = r16;
    r4 = (r1 + 8);
    r12 = MemoryInline::FlatRead32(r16);
    r12 = MemoryInline::FlatRead32((r12 + 8));
    ctr = r12;
    ctx->lr = 0x807C9F40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807C9F44:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_807C9F4C;
    }
}

loc_807C9F48:
{
    r15 = 1;
}

loc_807C9F4C:
{
}

loc_807C9F50:
{
    if ((static_cast<int32_t>(r15) == static_cast<int32_t>(0))) {
        goto loc_807C9F58;
    }
}

loc_807C9F54:
{
    goto loc_807C9F5C;
}

loc_807C9F58:
{
    r16 = 0;
}

loc_807C9F5C:
{
    r15 = MemoryInline::FlatRead32((r16 + 44));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r15), static_cast<int32_t>(0));
}

loc_807C9F64:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807C9F84;
    }
}

loc_807C9F68:
{
    r3 = (r20 + 18372);
    r5 = (r21 + 18344);
    r6 = (r22 + 18332);
    r7 = (r23 + 11184);
    r4 = 39;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x807C9F84u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
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
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f28 = ctx->fpr[28];
    f29 = ctx->fpr[29];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_807C9F84:
{
    r0 = MemoryInline::FlatRead16((r15 + 32));
}

loc_807C9F8C:
{
    if ((static_cast<int32_t>(r25) < static_cast<int32_t>(r0))) {
        goto loc_807C99B4;
    }
}

loc_807C9F90:
{
}

loc_807C9F94:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_807C9FA4;
    }
}

loc_807C9F98:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (r0 | 1);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_807C9FA4:
{
}

loc_807C9FA8:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807C9FB8;
    }
}

loc_807C9FAC:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (r0 | 2);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_807C9FB8:
{
}

loc_807C9FBC:
{
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_807C9FCC;
    }
}

loc_807C9FC0:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (r0 | 4);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_807C9FCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_807C9FD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807C9FE0;
    }
}

loc_807C9FD4:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (r0 | 8);
    MemoryInline::FlatWrite8(r30, static_cast<uint8_t>(r0));
}

loc_807C9FE0:
{
    r31 = (r31 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(41));
}

loc_807C9FE8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807C98C4;
    }
}

loc_807C9FEC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 160));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 144));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::FlatReadFloat64((r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 112);
    f28.d = MemoryInline::FlatReadFloat64((r1 + 112));
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
    r0 = MemoryInline::FlatRead32((r1 + 180));
    ctx->lr = r0;
    r1 = (r1 + 176);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807C9844 func_807C9844 preserves=false fpr_mask=0xF0000000
