#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80055A80(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r23_rot_0 = 0;
    uint32_t r23_rot_1 = 0;
    uint32_t r23_rot_2 = 0;
    uint32_t r23_rot_3 = 0;
    uint32_t r23_rot_4 = 0;
    uint32_t r23_rot_5 = 0;
    uint32_t r23_rot_6 = 0;
    uint32_t r23_rot_7 = 0;
    uint32_t r23_rot_8 = 0;
    uint32_t r24_rot_0 = 0;
    uint32_t r24_rot_1 = 0;
    uint32_t r24_rot_2 = 0;
    uint32_t r24_rot_3 = 0;
    uint32_t r24_rot_4 = 0;
    uint32_t r24_rot_5 = 0;
    uint32_t r24_rot_6 = 0;
    uint32_t r25_rot_0 = 0;
    uint32_t r25_rot_1 = 0;
    uint32_t r25_rot_2 = 0;
    uint32_t r28_rot_0 = 0;
    uint32_t r28_rot_1 = 0;
    uint32_t r28_rot_2 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
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
    uint32_t xer = ctx->xer;

    goto loc_80055A80;

loc_80055A80:
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
    // inline leaf 0x80021590 (10 guest instruction(s))
    guest_range_0 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, false, true);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 0u, ((static_cast<uint64_t>(static_cast<uint32_t>(r23)) << 32) | static_cast<uint32_t>(r24)))) {
        MemoryInline::WriteResolved32(guest_range_0, 0u, (r11 + -36), r23);
        MemoryInline::WriteResolved32(guest_range_0, 4u, (r11 + -32), r24);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r11 + -4), r31);
    // end of inlined leaf 0x80021590
    r31 = MemoryInline::FlatRead32(r3);
    f30.d = f1.d;
    r27 = r4;
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r30 = MemoryInline::FlatRead32((r31 + 28));
}

loc_80055ABC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80055AC8;
    }
}

loc_80055AC0:
{
    r3 = (r31 + r0);
    goto loc_80055ACC;
}

loc_80055AC8:
{
    r3 = 0;
}

loc_80055ACC:
{
    f31.d = MemoryInline::FlatReadFloat32((r2 + -29744));
    SetCRFloatResident(cr, 0, f1.d, f31.d);
}

loc_80055AD4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055AE0;
    }
}

loc_80055ADC:
{
    goto loc_80055B20;
}

loc_80055AE0:
{
    r3 = MemoryInline::FlatRead16((r3 + 52));
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    f2.d = MemoryInline::FlatReadFloat64((r2 + -29736));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80055B00:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055B1C;
    }
}

loc_80055B08:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    goto loc_80055B20;
}

loc_80055B1C:
{
    f31.d = f30.d;
}

loc_80055B20:
{
    r0 = (r30 & 8388608);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055B24:
{
    r0 = (r30 & 63);
    MemoryInline::FlatWrite32((r4 + 4), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80055B7C;
    }
}

loc_80055B30:
{
    f1.d = f31.d;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8001B658u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r3 = 0x80000000u;
    r5 = (r31 + r0);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 16), f0.d);
    r0 = fctiwzword0;
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r4 = (r4_rot_1 & 536870908);
    r0 = (r0 & 31);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 32));
    r0 = PPC_Srw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80055B7C;
    }
}

loc_80055B70:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite32((r27 + 4), r0);
}

loc_80055B7C:
{
    r0 = MemoryInline::FlatRead32((r27 + 4));
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055B84:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055E40;
    }
}

loc_80055B88:
{
    r29 = (r30 & 3);
}

loc_80055B8C:
{
    r28_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(29));
    r28 = (r28_rot_1 & 1);
    r26 = 1;
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_80055BA4;
    }
}

loc_80055B98:
{
}

loc_80055B9C:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(0))) {
        goto loc_80055BA4;
    }
}

loc_80055BA0:
{
    r26 = 0;
}

loc_80055BA4:
{
    r0 = (r30 & 524288);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055BA8:
{
    r25_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(12));
    r25 = (r25_rot_1 & 1);
    r24_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(11));
    r24 = (r24_rot_1 & 1);
    r23_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(10));
    r23 = (r23_rot_1 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055BC0;
    }
}

loc_80055BB8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 36));
    goto loc_80055BD4;
}

loc_80055BC0:
{
    r0 = MemoryInline::FlatRead32((r31 + 36));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 36);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055BD4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r25), static_cast<int32_t>(0));
}

loc_80055BD8:
{
    MemoryInline::FlatWriteFloat32((r27 + 8), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055BE8;
    }
}

loc_80055BE0:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 40));
    goto loc_80055BFC;
}

loc_80055BE8:
{
    r0 = MemoryInline::FlatRead32((r31 + 40));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055BFC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80055C00:
{
    MemoryInline::FlatWriteFloat32((r27 + 12), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055C10;
    }
}

loc_80055C08:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 44));
    goto loc_80055C24;
}

loc_80055C10:
{
    r0 = MemoryInline::FlatRead32((r31 + 44));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 44);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055C24:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80055C28:
{
    MemoryInline::FlatWriteFloat32((r27 + 16), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055C38;
    }
}

loc_80055C30:
{
    r3 = MemoryInline::FlatRead32((r31 + 48));
    goto loc_80055C4C;
}

loc_80055C38:
{
    r0 = MemoryInline::FlatRead32((r31 + 48));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 48);
    ctx->lr = 0x80055C4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80055C4C:
{
}

loc_80055C50:
{
    MemoryInline::FlatWrite32((r27 + 32), r3);
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(0))) {
        goto loc_80055CD8;
    }
}

loc_80055C58:
{
    r0 = (r30 & 16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055C5C:
{
    r23_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(7));
    r23 = (r23_rot_2 & 1);
    r24_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(6));
    r24 = (r24_rot_2 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055C70;
    }
}

loc_80055C68:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 52));
    goto loc_80055C84;
}

loc_80055C70:
{
    r0 = MemoryInline::FlatRead32((r31 + 52));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 52);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055C84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80055C88:
{
    MemoryInline::FlatWriteFloat32((r27 + 20), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055C98;
    }
}

loc_80055C90:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 56));
    goto loc_80055CAC;
}

loc_80055C98:
{
    r0 = MemoryInline::FlatRead32((r31 + 56));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 56);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055CAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80055CB0:
{
    MemoryInline::FlatWriteFloat32((r27 + 24), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055CC0;
    }
}

loc_80055CB8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 60));
    goto loc_80055CD4;
}

loc_80055CC0:
{
    r0 = MemoryInline::FlatRead32((r31 + 60));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 60);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055CD4:
{
    MemoryInline::FlatWriteFloat32((r27 + 28), f1.d);
}

loc_80055CD8:
{
}

loc_80055CDC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_80055CEC;
    }
}

loc_80055CE0:
{
}

loc_80055CE4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(2))) {
        goto loc_80055D4C;
    }
}

loc_80055CE8:
{
    goto loc_80055DDC;
}

loc_80055CEC:
{
    r0 = (r30 & 268435456);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055CF0:
{
    r0 = MemoryInline::FlatRead32((r31 + 64));
    r23_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r23 = (r23_rot_5 & 1);
    MemoryInline::FlatWrite32((r27 + 36), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055D08;
    }
}

loc_80055D00:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    goto loc_80055D1C;
}

loc_80055D08:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055D1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80055D20:
{
    MemoryInline::FlatWriteFloat32((r27 + 40), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055D30;
    }
}

loc_80055D28:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    goto loc_80055D44;
}

loc_80055D30:
{
    r0 = MemoryInline::FlatRead32((r31 + 72));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055D44:
{
    MemoryInline::FlatWriteFloat32((r27 + 44), f1.d);
    goto loc_80055DDC;
}

loc_80055D4C:
{
    r3 = MemoryInline::FlatRead32((r31 + 64));
    r0 = (r30 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055D54:
{
    MemoryInline::FlatWrite32((r27 + 36), r3);
    r23_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(4));
    r23 = (r23_rot_4 & 1);
    r24_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(3));
    r24 = (r24_rot_4 & 1);
    r0 = MemoryInline::FlatRead32((r31 + 76));
    MemoryInline::FlatWrite32((r27 + 48), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055D74;
    }
}

loc_80055D6C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 80));
    goto loc_80055D88;
}

loc_80055D74:
{
    r0 = MemoryInline::FlatRead32((r31 + 80));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055D88:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80055D8C:
{
    MemoryInline::FlatWriteFloat32((r27 + 52), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055D9C;
    }
}

loc_80055D94:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 68));
    goto loc_80055DB0;
}

loc_80055D9C:
{
    r0 = MemoryInline::FlatRead32((r31 + 68));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 68);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055DB0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r24), static_cast<int32_t>(0));
}

loc_80055DB4:
{
    MemoryInline::FlatWriteFloat32((r27 + 40), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055DC4;
    }
}

loc_80055DBC:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 72));
    goto loc_80055DD8;
}

loc_80055DC4:
{
    r0 = MemoryInline::FlatRead32((r31 + 72));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 72);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055DD8:
{
    MemoryInline::FlatWriteFloat32((r27 + 44), f1.d);
}

loc_80055DDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80055DE0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055E40;
    }
}

loc_80055DE4:
{
    r0 = (r30 & 1073741824);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80055DE8:
{
    r23_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r23 = (r23_rot_7 & 1);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055DF8;
    }
}

loc_80055DF0:
{
    r3 = MemoryInline::FlatRead32((r31 + 84));
    goto loc_80055E0C;
}

loc_80055DF8:
{
    r0 = MemoryInline::FlatRead32((r31 + 84));
    f1.d = f31.d;
    r3 = (r31 + r0);
    r3 = (r3 + 84);
    ctx->lr = 0x80055E0Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053110u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80055E0C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r23), static_cast<int32_t>(0));
}

loc_80055E10:
{
    MemoryInline::FlatWrite32((r27 + 56), r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80055E20;
    }
}

loc_80055E18:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 88));
    goto loc_80055E34;
}

loc_80055E20:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
    f1.d = f30.d;
    r3 = (r31 + r0);
    r3 = (r3 + 88);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80052FD0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_80055E34:
{
    MemoryInline::FlatWriteFloat32((r27 + 60), f1.d);
    r0 = MemoryInline::FlatRead32((r31 + 20));
    MemoryInline::FlatWrite32(r27, r0);
}

loc_80055E40:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = MemoryInline::FlatReadFloat64((r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 64);
    f30.d = MemoryInline::FlatReadFloat64((r1 + 64));
    // inline leaf 0x800215DC (10 guest instruction(s))
    guest_range_1 = MemoryInline::ResolveRangeHost((r11 + -36), 0, 36u, true, false);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r23 = resolved_pair.first;
            r24 = resolved_pair.second;
        } else {
            r23 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -36));
            r24 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -32));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 24u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 28u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 32u, (r11 + -4));
    // end of inlined leaf 0x800215DC
    r0 = MemoryInline::FlatRead32((r1 + 100));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF8007FF gpr_write=0xFF800FFB gpr_return=0x00000018 fpr_read=0xC0000FFF fpr_write=0xC0000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80055A80 func_80055A80 preserves=false fpr_mask=0xC0000000
