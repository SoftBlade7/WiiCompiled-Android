#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80534DF8(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
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
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80534DF8;

loc_80534DF8:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -96), 0, 104u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 100u, (r1 + 100), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 80u, (r1 + 80), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 64u, (r1 + 64), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 72);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 64);
    // inline leaf 0x80021598 (8 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r25)) << 32) | static_cast<uint32_t>(r26)))) {
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r11 + -28), r25);
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r11 + -24), r26);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 44u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 44u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 60u, (r11 + -4), r31);
    // end of inlined leaf 0x80021598
    r30 = MemoryInline::FlatRead16((r3 + 10));
    r25 = 0x809C0000u;
    r26 = r3;
    f30.d = f1.d;
    MemoryInline::FlatWrite16((r3 + 10), static_cast<uint16_t>(r4));
    r29 = (r4 & 65535);
    r27 = r4;
    r28 = r5;
    r3 = MemoryInline::FlatRead32((r25 + -10520));
    r4 = r29;
    r3 = MemoryInline::FlatRead32((r3 + 28));
    f31.d = MemoryInline::FlatReadFloat32((r3 + 12));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80515014u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = 1127219200;
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f5.d = PpcFmulsInline(f0.d, f31.d);
    f4.d = MemoryInline::FlatReadFloat64((r4 + 416));
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    f0.d = MemoryInline::FlatReadFloat32((r26 + 28));
    MemoryInline::FlatWriteFloat32((r26 + 20), f5.d);
    f1.d = PpcFmulsInline(f30.d, f5.d);
    r4 = MemoryInline::FlatRead16((r26 + 10));
    r5 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead8((r3 + 4));
    r0 = MemoryInline::FlatRead8(r5);
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r0 = (r29 - r0);
    r3 = (r3 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r3);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f4.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f4.d));
    f3.d = PpcFmulsInline(f3.d, f31.d);
    f2.d = PpcFmulsInline(f5.d, f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    MemoryInline::FlatWriteFloat32((r26 + 24), f2.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    r3 = MemoryInline::FlatRead32((r25 + -10520));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80515C24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    r4 = MemoryInline::FlatRead32(r3);
    r29 = r3;
    r4 = MemoryInline::FlatRead8((r4 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r4)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80534EE8;
    }
}

loc_80534EE4:
{
    MemoryInline::FlatWrite8((r26 + 33), static_cast<uint8_t>(r4));
}

loc_80534EE8:
{
    r5 = MemoryInline::FlatRead32(r3);
    r25 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r25 + -10520));
    r4 = r30;
    r0 = MemoryInline::FlatRead8((r5 + 17));
    r31 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80515C24u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80534F08:
{
    r28 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534FC4;
    }
}

loc_80534F10:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 400));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80534F1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80534FA8;
    }
}

loc_80534F20:
{
    r0 = MemoryInline::FlatRead32((r26 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534F28:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805351DC;
    }
}

loc_80534F2C:
{
    r4 = MemoryInline::FlatRead32((r25 + -10520));
    r3 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80534F38:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80534F44;
    }
}

loc_80534F3C:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80534F48;
}

loc_80534F44:
{
    r3 = 0;
}

loc_80534F48:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_1 & 1);
}

loc_80534F54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80534F7C;
    }
}

loc_80534F58:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80534F60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80534F6C;
    }
}

loc_80534F64:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80534F70;
}

loc_80534F6C:
{
    r3 = 0;
}

loc_80534F70:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & 1);
}

loc_80534F7C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534F80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534F90;
    }
}

loc_80534F84:
{
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    goto loc_80534F94;
}

loc_80534F90:
{
    r0 = -1;
}

loc_80534F94:
{
    r3 = MemoryInline::FlatRead16((r26 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite8((r26 + 40), static_cast<uint8_t>(r0));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r26 + 36), static_cast<uint16_t>(r0));
    goto loc_805351DC;
}

loc_80534FA8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 404));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80534FB4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805351DC;
    }
}

loc_80534FB8:
{
    r3 = r26;
    ctx->lr = 0x80534FC0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805349B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_805351DC;
}

loc_80534FC4:
{
}

loc_80534FC8:
{
    if ((static_cast<int32_t>(r31) == static_cast<int32_t>(-1))) {
        goto loc_805350DC;
    }
}

loc_80534FCC:
{
    r5 = MemoryInline::FlatRead8((r26 + 40));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
}

loc_80534FD8:
{
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(r0))) {
        goto loc_80534FE4;
    }
}

loc_80534FDC:
{
    MemoryInline::FlatWrite8((r26 + 40), static_cast<uint8_t>(r31));
    goto loc_805350D8;
}

loc_80534FE4:
{
    r6 = MemoryInline::FlatRead32((r25 + -10520));
    r4 = MemoryInline::FlatRead32((r6 + 32));
}

loc_80534FF0:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80534FFC;
    }
}

loc_80534FF4:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80535000;
}

loc_80534FFC:
{
    r4 = 0;
}

loc_80535000:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
}

loc_8053500C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80535034;
    }
}

loc_80535010:
{
    r4 = MemoryInline::FlatRead32((r6 + 28));
}

loc_80535018:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80535024;
    }
}

loc_8053501C:
{
    r4 = MemoryInline::FlatRead16((r4 + 4));
    goto loc_80535028;
}

loc_80535024:
{
    r4 = 0;
}

loc_80535028:
{
    r0 = (0 - r4);
    r0 = (r0 | r4);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
}

loc_80535034:
{
}

loc_80535038:
{
    r5 = (static_cast<int32_t>(static_cast<int8_t>(r5)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053504C;
    }
}

loc_80535040:
{
    r4 = MemoryInline::FlatRead32((r6 + 32));
    r0 = MemoryInline::FlatRead8((r4 + 12));
    goto loc_80535050;
}

loc_8053504C:
{
    r0 = -1;
}

loc_80535050:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
}

loc_80535058:
{
    if ((static_cast<int32_t>(r5) != static_cast<int32_t>(r0))) {
        goto loc_805350D8;
    }
}

loc_8053505C:
{
}

loc_80535060:
{
    if ((static_cast<int32_t>(r31) != static_cast<int32_t>(0))) {
        goto loc_805350C0;
    }
}

loc_80535064:
{
    r7 = MemoryInline::FlatRead16((r3 + 4));
    r6 = r28;
    r4 = (r27 & 65535);
    r5 = 0;
    ctr = r7;
}

loc_8053507C:
{
    if ((static_cast<int32_t>(r7) <= static_cast<int32_t>(0))) {
        goto loc_805350B4;
    }
}

loc_80535080:
{
}

loc_80535084:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r7))) {
        goto loc_80535090;
    }
}

loc_80535088:
{
    r3 = MemoryInline::FlatRead32((r6 + 56));
    goto loc_80535094;
}

loc_80535090:
{
    r3 = 0;
}

loc_80535094:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
}

loc_8053509C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_805350A8;
    }
}

loc_805350A0:
{
    r0 = 1;
    goto loc_805350B8;
}

loc_805350A8:
{
    r6 = (r6 + 24);
    r5 = (r5 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80535080;
    }
}

loc_805350B4:
{
    r0 = 0;
}

loc_805350B8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805350BC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805350D0;
    }
}

loc_805350C0:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 408));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_805350CC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805350D8;
    }
}

loc_805350D0:
{
    r3 = r26;
    ctx->lr = 0x805350D8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[11] = r11;
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805349B8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r11 = ctx->gpr[11];
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
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_805350D8:
{
    MemoryInline::FlatWrite8((r26 + 39), static_cast<uint8_t>(r31));
}

loc_805350DC:
{
    r3 = MemoryInline::FlatRead32(r28);
    r0 = MemoryInline::FlatRead8((r3 + 17));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80535144;
    }
}

loc_805350EC:
{
    r6 = MemoryInline::FlatRead16((r29 + 4));
    r5 = r29;
    r4 = 0;
    ctr = r6;
}

loc_80535100:
{
    if ((static_cast<int32_t>(r6) <= static_cast<int32_t>(0))) {
        goto loc_80535138;
    }
}

loc_80535104:
{
}

loc_80535108:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(r6))) {
        goto loc_80535114;
    }
}

loc_8053510C:
{
    r3 = MemoryInline::FlatRead32((r5 + 56));
    goto loc_80535118;
}

loc_80535114:
{
    r3 = 0;
}

loc_80535118:
{
    r0 = MemoryInline::FlatRead16((r3 + 26));
}

loc_80535120:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(r0))) {
        goto loc_8053512C;
    }
}

loc_80535124:
{
    r0 = 1;
    goto loc_8053513C;
}

loc_8053512C:
{
    r5 = (r5 + 24);
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80535104;
    }
}

loc_80535138:
{
    r0 = 0;
}

loc_8053513C:
{
}

loc_80535140:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80535154;
    }
}

loc_80535144:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 412));
    SetCRFloatResident(cr, 0, f30.d, f0.d);
}

loc_80535150:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805351DC;
    }
}

loc_80535154:
{
    r0 = MemoryInline::FlatRead32((r26 + 56));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053515C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805351DC;
    }
}

loc_80535160:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r4 + 32));
}

loc_80535170:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8053517C;
    }
}

loc_80535174:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_80535180;
}

loc_8053517C:
{
    r3 = 0;
}

loc_80535180:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & 1);
}

loc_8053518C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805351B4;
    }
}

loc_80535190:
{
    r3 = MemoryInline::FlatRead32((r4 + 28));
}

loc_80535198:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805351A4;
    }
}

loc_8053519C:
{
    r3 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_805351A8;
}

loc_805351A4:
{
    r3 = 0;
}

loc_805351A8:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
}

loc_805351B4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805351B8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805351C8;
    }
}

loc_805351BC:
{
    r3 = MemoryInline::FlatRead32((r4 + 32));
    r0 = MemoryInline::FlatRead8((r3 + 12));
    goto loc_805351CC;
}

loc_805351C8:
{
    r0 = -1;
}

loc_805351CC:
{
    r3 = MemoryInline::FlatRead16((r26 + 36));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWrite8((r26 + 40), static_cast<uint8_t>(r0));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite16((r26 + 36), static_cast<uint16_t>(r0));
}

loc_805351DC:
{
    MemoryInline::FlatWriteFloat32((r26 + 28), f31.d);
    r3 = r29;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 36), 0, 68u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 44u, (r1 + 80));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 28u, (r1 + 64));
    r11 = (r1 + 64);
    // inline leaf 0x800215E4 (8 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r25 = resolved_pair.first;
            r26 = resolved_pair.second;
        } else {
            r25 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -28));
            r26 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -24));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 16u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 20u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 24u, (r11 + -4));
    // end of inlined leaf 0x800215E4
    r0 = MemoryInline::ReadResolved32(guest_range_1, 64u, (r1 + 100));
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
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80534DF8 func_80534DF8 preserves=false fpr_mask=0xC0000000
