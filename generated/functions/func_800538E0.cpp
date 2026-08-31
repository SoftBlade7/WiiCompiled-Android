#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800538E0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
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
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r21_rot_0 = 0;
    uint32_t r21_rot_1 = 0;
    uint32_t r21_rot_2 = 0;
    uint32_t r21_rot_3 = 0;
    uint32_t r21_rot_4 = 0;
    uint32_t r21_rot_5 = 0;
    uint32_t r21_rot_6 = 0;
    uint32_t r21_rot_7 = 0;
    uint32_t r21_rot_8 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r26_rot_0 = 0;
    uint32_t r26_rot_1 = 0;
    uint32_t r26_rot_2 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
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
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800538E0;

loc_800538E0:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRamFloat64((r1 + 96), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 80), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::FlatWriteRamFloat64((r1 + 64), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    r11 = (r1 + 64);
    // inline leaf 0x80021588 (12 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r21)) << 32) | static_cast<uint32_t>(r22)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -44), r21);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -40), r22);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 32u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -4), r31);
    // end of inlined leaf 0x80021588
    r6 = MemoryInline::FlatRead32(r3);
    f29.d = f1.d;
    r22 = r4;
    r0 = MemoryInline::FlatRead32((r6 + 16));
}

loc_80053920:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8005392C;
    }
}

loc_80053924:
{
    r0 = (r6 + r0);
    goto loc_80053930;
}

loc_8005392C:
{
    r0 = 0;
}

loc_80053930:
{
}

loc_80053934:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053960;
    }
}

loc_80053938:
{
    r5 = (r5 + 1);
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(4));
    r5 = (r5_rot_0 & -16);
    r5 = (r0 + r5);
    r5 = MemoryInline::FlatRead32((r5 + 20));
}

loc_8005394C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_80053958;
    }
}

loc_80053950:
{
    r30 = (r0 + r5);
    goto loc_80053964;
}

loc_80053958:
{
    r30 = 0;
    goto loc_80053964;
}

loc_80053960:
{
    r30 = 0;
}

loc_80053964:
{
    r26 = MemoryInline::FlatRead32((r30 + 4));
    r0 = 0;
    r24 = MemoryInline::FlatRead32((r30 + 8));
    r25 = (r30 + 12);
    r3 = MemoryInline::FlatRead32(r3);
    r27 = (r4 + 12);
    MemoryInline::FlatWrite32(r4, r0);
    r28 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29800));
    MemoryInline::FlatWrite32((r4 + 4), r0);
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29796));
    r0 = MemoryInline::FlatRead32((r3 + 36));
    MemoryInline::FlatWrite32((r4 + 8), r0);
    goto loc_80053B18;
}

loc_8005399C:
{
    r0 = (r26 & 1);
}

loc_800539A0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053B0C;
    }
}

loc_800539A4:
{
    r0 = MemoryInline::FlatRead32(r25);
    r29 = 0;
    r25 = (r25 + 4);
    r30_addr_2 = (r30 + r0);
    r31 = MemoryInline::FlatRead32(r30_addr_2);
    r23 = (r0 + r30);
    r0 = (r31 & 2);
}

loc_800539BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80053A30;
    }
}

loc_800539C0:
{
    r0 = (r31 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800539C4:
{
    r3 = (r23 + 4);
    r29 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800539D8;
    }
}

loc_800539D0:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_800539E8;
}

loc_800539D8:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_800539E8:
{
    r0 = (r31 & 16);
}

loc_800539EC:
{
    MemoryInline::FlatWriteFloat32(r27, f1.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053A00;
    }
}

loc_800539F4:
{
    f0.d = MemoryInline::FlatReadFloat32(r27);
    MemoryInline::FlatWriteFloat32((r27 + 4), f0.d);
    goto loc_80053A38;
}

loc_80053A00:
{
    r0 = (r31 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053A04:
{
    r3 = (r23 + 8);
    r29 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053A18;
    }
}

loc_80053A10:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053A28;
}

loc_80053A18:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053A28:
{
    MemoryInline::FlatWriteFloat32((r27 + 4), f1.d);
    goto loc_80053A38;
}

loc_80053A30:
{
    MemoryInline::FlatWriteFloat32(r27, f31.d);
    MemoryInline::FlatWriteFloat32((r27 + 4), f31.d);
}

loc_80053A38:
{
    r0 = (r31 & 4);
}

loc_80053A3C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80053A78;
    }
}

loc_80053A40:
{
    r0 = (r31 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053A44:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r29 = (r29 + 1);
    r3 = (r23 + r0);
    r3 = (r3 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053A60;
    }
}

loc_80053A58:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053A70;
}

loc_80053A60:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053A70:
{
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    goto loc_80053A7C;
}

loc_80053A78:
{
    MemoryInline::FlatWriteFloat32((r27 + 8), f30.d);
}

loc_80053A7C:
{
    r0 = (r31 & 8);
}

loc_80053A80:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80053AF0;
    }
}

loc_80053A84:
{
    r0 = (r31 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053A88:
{
    r21_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(23));
    r21 = (r21_rot_2 & 1);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r29 = (r29 + 1);
    r3 = (r23 + r0);
    r3 = (r3 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053AA8;
    }
}

loc_80053AA0:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053AB8;
}

loc_80053AA8:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053AB8:
{
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_80053AC0:
{
    r3 = (r23 + r0);
    MemoryInline::FlatWriteFloat32((r27 + 12), f1.d);
    r3 = (r3 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053AD8;
    }
}

loc_80053AD0:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053AE8;
}

loc_80053AD8:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053AE8:
{
    MemoryInline::FlatWriteFloat32((r27 + 16), f1.d);
    goto loc_80053AF8;
}

loc_80053AF0:
{
    MemoryInline::FlatWriteFloat32((r27 + 12), f30.d);
    MemoryInline::FlatWriteFloat32((r27 + 16), f30.d);
}

loc_80053AF8:
{
    r0 = (r31 & 15);
    r3 = MemoryInline::FlatRead32(r22);
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32(r22, r0);
}

loc_80053B0C:
{
    r26_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r26), static_cast<uint32_t>(31));
    r26 = (r26_rot_2 & 2147483647);
    r27 = (r27 + 20);
    r28 = (r28 + 4);
}

loc_80053B18:
{
}

loc_80053B1C:
{
    if ((static_cast<int32_t>(r26) != static_cast<int32_t>(0))) {
        goto loc_8005399C;
    }
}

loc_80053B20:
{
    f30.d = MemoryInline::FlatReadFloat32((r2 + -29800));
    r26 = 0;
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29796));
    r27 = 0;
    goto loc_80053CBC;
}

loc_80053B34:
{
    r0 = (r24 & 1);
}

loc_80053B38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053CB0;
    }
}

loc_80053B3C:
{
    r3 = MemoryInline::FlatRead32(r25);
    r0 = (r26 + 8);
    r0 = (r0 * 20);
    r28 = 0;
    r3_addr_2 = (r3 + r30);
    r29 = MemoryInline::FlatRead32(r3_addr_2);
    r23 = (r3 + r30);
    r25 = (r25 + 4);
    r31 = (r22 + r0);
    r0 = (r29 & 2);
}

loc_80053B60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80053BD4;
    }
}

loc_80053B64:
{
    r0 = (r29 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053B68:
{
    r3 = (r23 + 4);
    r28 = 1;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053B7C;
    }
}

loc_80053B74:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053B8C;
}

loc_80053B7C:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053B8C:
{
    r0 = (r29 & 16);
}

loc_80053B90:
{
    MemoryInline::FlatWriteFloat32((r31 + 12), f1.d);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80053BA4;
    }
}

loc_80053B98:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    MemoryInline::FlatWriteFloat32((r31 + 16), f0.d);
    goto loc_80053BDC;
}

loc_80053BA4:
{
    r0 = (r29 & 64);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053BA8:
{
    r3 = (r23 + 8);
    r28 = 2;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053BBC;
    }
}

loc_80053BB4:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053BCC;
}

loc_80053BBC:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053BCC:
{
    MemoryInline::FlatWriteFloat32((r31 + 16), f1.d);
    goto loc_80053BDC;
}

loc_80053BD4:
{
    MemoryInline::FlatWriteFloat32((r31 + 12), f30.d);
    MemoryInline::FlatWriteFloat32((r31 + 16), f30.d);
}

loc_80053BDC:
{
    r0 = (r29 & 4);
}

loc_80053BE0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80053C1C;
    }
}

loc_80053BE4:
{
    r0 = (r29 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053BE8:
{
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_9 & -4);
    r28 = (r28 + 1);
    r3 = (r23 + r0);
    r3 = (r3 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053C04;
    }
}

loc_80053BFC:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053C14;
}

loc_80053C04:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053C14:
{
    MemoryInline::FlatWriteFloat32((r31 + 20), f1.d);
    goto loc_80053C20;
}

loc_80053C1C:
{
    MemoryInline::FlatWriteFloat32((r31 + 20), f31.d);
}

loc_80053C20:
{
    r0 = (r29 & 8);
}

loc_80053C24:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80053C94;
    }
}

loc_80053C28:
{
    r0 = (r29 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80053C2C:
{
    r21_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(23));
    r21 = (r21_rot_6 & 1);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_11 & -4);
    r28 = (r28 + 1);
    r3 = (r23 + r0);
    r3 = (r3 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053C4C;
    }
}

loc_80053C44:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053C5C;
}

loc_80053C4C:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053C5C:
{
    r0_rot_12 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_12 & -4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r21), static_cast<int32_t>(0));
}

loc_80053C64:
{
    r3 = (r23 + r0);
    MemoryInline::FlatWriteFloat32((r31 + 24), f1.d);
    r3 = (r3 + 4);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053C7C;
    }
}

loc_80053C74:
{
    f1.d = MemoryInline::FlatReadFloat32(r3);
    goto loc_80053C8C;
}

loc_80053C7C:
{
    r0 = MemoryInline::FlatRead32(r3);
    f1.d = f29.d;
    r3 = (r3 + r0);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_80053C8C:
{
    MemoryInline::FlatWriteFloat32((r31 + 28), f1.d);
    goto loc_80053C9C;
}

loc_80053C94:
{
    MemoryInline::FlatWriteFloat32((r31 + 24), f31.d);
    MemoryInline::FlatWriteFloat32((r31 + 28), f31.d);
}

loc_80053C9C:
{
    r0 = (r29 & 15);
    r3 = MemoryInline::FlatRead32((r22 + 4));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r27));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r22 + 4), r0);
}

loc_80053CB0:
{
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r24), static_cast<uint32_t>(31));
    r24 = (r24_rot_2 & 2147483647);
    r27 = (r27 + 4);
    r26 = (r26 + 1);
}

loc_80053CBC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80053CC0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80053B34;
    }
}

loc_80053CC4:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f29.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x800215D4 (12 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -44), 0, 44u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r21 = resolved_pair.first;
            r22 = resolved_pair.second;
        } else {
            r21 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -44));
            r22 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -40));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 32u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 36u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 40u, (r11 + -4));
    // end of inlined leaf 0x800215D4
    r0 = MemoryInline::FlatRead32((r1 + 116));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
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
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFE0007F gpr_write=0xFFE0087B gpr_return=0x00000018 fpr_read=0xE0000FFF fpr_write=0xE0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800538E0 func_800538E0 preserves=false fpr_mask=0xE0000000
