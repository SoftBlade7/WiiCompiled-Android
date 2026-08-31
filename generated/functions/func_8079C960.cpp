#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079C960(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;
    uint32_t fctiwzword4 = 0;
    uint32_t fctiwzword5 = 0;
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

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079C960;

loc_8079C960:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
}

loc_8079C96C:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20952);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 32), r28);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079C9B4;
    }
}

loc_8079C9A0:
{
}

loc_8079C9A4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079C9B0;
    }
}

loc_8079C9A8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13860));
}

loc_8079C9B0:
{
    r3 = (r3 + 2);
}

loc_8079C9B4:
{
}

loc_8079C9B8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079C9C4;
    }
}

loc_8079C9BC:
{
    r28 = (r4 + 120);
    goto loc_8079C9C8;
}

loc_8079C9C4:
{
    r28 = 0;
}

loc_8079C9C8:
{
}

loc_8079C9CC:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079C9D8;
    }
}

loc_8079C9D0:
{
    r5 = (r4 + 109);
    goto loc_8079C9DC;
}

loc_8079C9D8:
{
    r5 = 0;
}

loc_8079C9DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079C9E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079C9EC;
    }
}

loc_8079C9E4:
{
    r4 = (r4 + 12);
    goto loc_8079C9F0;
}

loc_8079C9EC:
{
    r4 = 0;
}

loc_8079C9F0:
{
    r6 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079B338u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
}

loc_8079C9FC:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_8079CA1C;
    }
}

loc_8079CA00:
{
}

loc_8079CA04:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079CA14;
    }
}

loc_8079CA08:
{
    r0 = MemoryInline::FlatRead32(r28);
    MemoryInline::FlatWrite32(r3, r0);
    goto loc_8079CA1C;
}

loc_8079CA14:
{
    r0 = MemoryInline::FlatRead32(r3);
    MemoryInline::FlatWrite32(r28, r0);
}

loc_8079CA1C:
{
}

loc_8079CA20:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CA2C;
    }
}

loc_8079CA24:
{
    r0 = (r29 + 68);
    goto loc_8079CA30;
}

loc_8079CA2C:
{
    r0 = 0;
}

loc_8079CA30:
{
}

loc_8079CA34:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CA50;
    }
}

loc_8079CA38:
{
}

loc_8079CA3C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CA48;
    }
}

loc_8079CA40:
{
    r0 = (r29 + 68);
    goto loc_8079CA54;
}

loc_8079CA48:
{
    r0 = 0;
    goto loc_8079CA54;
}

loc_8079CA50:
{
    r0 = 0;
}

loc_8079CA54:
{
}

loc_8079CA58:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CB10;
    }
}

loc_8079CA5C:
{
}

loc_8079CA60:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079CAB8;
    }
}

loc_8079CA64:
{
}

loc_8079CA68:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CA74;
    }
}

loc_8079CA6C:
{
    r0 = (r29 + 68);
    goto loc_8079CA78;
}

loc_8079CA74:
{
    r0 = 0;
}

loc_8079CA78:
{
}

loc_8079CA7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CA98;
    }
}

loc_8079CA80:
{
}

loc_8079CA84:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CA90;
    }
}

loc_8079CA88:
{
    r4 = (r29 + 68);
    goto loc_8079CA9C;
}

loc_8079CA90:
{
    r4 = 0;
    goto loc_8079CA9C;
}

loc_8079CA98:
{
    r4 = 0;
}

loc_8079CA9C:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword0;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r0));
    goto loc_8079CB10;
}

loc_8079CAB8:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079CAC0:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079CAE4;
    }
}

loc_8079CADC:
{
    r0 = (r29 + 68);
    goto loc_8079CAE8;
}

loc_8079CAE4:
{
    r0 = 0;
}

loc_8079CAE8:
{
}

loc_8079CAEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CB08;
    }
}

loc_8079CAF0:
{
}

loc_8079CAF4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CB00;
    }
}

loc_8079CAF8:
{
    r4 = (r29 + 68);
    goto loc_8079CB0C;
}

loc_8079CB00:
{
    r4 = 0;
    goto loc_8079CB0C;
}

loc_8079CB08:
{
    r4 = 0;
}

loc_8079CB0C:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079CB10:
{
}

loc_8079CB14:
{
    r3 = (r3 + 6);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CB24;
    }
}

loc_8079CB1C:
{
    r0 = (r29 + 68);
    goto loc_8079CB28;
}

loc_8079CB24:
{
    r0 = 0;
}

loc_8079CB28:
{
}

loc_8079CB2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CB4C;
    }
}

loc_8079CB30:
{
}

loc_8079CB34:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CB40;
    }
}

loc_8079CB38:
{
    r4 = (r29 + 68);
    goto loc_8079CB44;
}

loc_8079CB40:
{
    r4 = 0;
}

loc_8079CB44:
{
    r0 = (r4 + 4);
    goto loc_8079CB50;
}

loc_8079CB4C:
{
    r0 = 0;
}

loc_8079CB50:
{
}

loc_8079CB54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CC14;
    }
}

loc_8079CB58:
{
}

loc_8079CB5C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079CBB8;
    }
}

loc_8079CB60:
{
}

loc_8079CB64:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CB70;
    }
}

loc_8079CB68:
{
    r0 = (r29 + 68);
    goto loc_8079CB74;
}

loc_8079CB70:
{
    r0 = 0;
}

loc_8079CB74:
{
}

loc_8079CB78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CB98;
    }
}

loc_8079CB7C:
{
}

loc_8079CB80:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CB8C;
    }
}

loc_8079CB84:
{
    r4 = (r29 + 68);
    goto loc_8079CB90;
}

loc_8079CB8C:
{
    r4 = 0;
}

loc_8079CB90:
{
    r4 = (r4 + 4);
    goto loc_8079CB9C;
}

loc_8079CB98:
{
    r4 = 0;
}

loc_8079CB9C:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword1;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r0));
    goto loc_8079CC14;
}

loc_8079CBB8:
{
    r0 = MemoryInline::FlatRead16(r3);
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079CBC0:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079CBE4;
    }
}

loc_8079CBDC:
{
    r0 = (r29 + 68);
    goto loc_8079CBE8;
}

loc_8079CBE4:
{
    r0 = 0;
}

loc_8079CBE8:
{
}

loc_8079CBEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CC0C;
    }
}

loc_8079CBF0:
{
}

loc_8079CBF4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CC00;
    }
}

loc_8079CBF8:
{
    r4 = (r29 + 68);
    goto loc_8079CC04;
}

loc_8079CC00:
{
    r4 = 0;
}

loc_8079CC04:
{
    r4 = (r4 + 4);
    goto loc_8079CC10;
}

loc_8079CC0C:
{
    r4 = 0;
}

loc_8079CC10:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079CC14:
{
}

loc_8079CC18:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CC24;
    }
}

loc_8079CC1C:
{
    r0 = (r29 + 68);
    goto loc_8079CC28;
}

loc_8079CC24:
{
    r0 = 0;
}

loc_8079CC28:
{
}

loc_8079CC2C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CC4C;
    }
}

loc_8079CC30:
{
}

loc_8079CC34:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CC40;
    }
}

loc_8079CC38:
{
    r4 = (r29 + 68);
    goto loc_8079CC44;
}

loc_8079CC40:
{
    r4 = 0;
}

loc_8079CC44:
{
    r0 = (r4 + 8);
    goto loc_8079CC50;
}

loc_8079CC4C:
{
    r0 = 0;
}

loc_8079CC50:
{
}

loc_8079CC54:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CD14;
    }
}

loc_8079CC58:
{
}

loc_8079CC5C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079CCB8;
    }
}

loc_8079CC60:
{
}

loc_8079CC64:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CC70;
    }
}

loc_8079CC68:
{
    r0 = (r29 + 68);
    goto loc_8079CC74;
}

loc_8079CC70:
{
    r0 = 0;
}

loc_8079CC74:
{
}

loc_8079CC78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CC98;
    }
}

loc_8079CC7C:
{
}

loc_8079CC80:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CC8C;
    }
}

loc_8079CC84:
{
    r4 = (r29 + 68);
    goto loc_8079CC90;
}

loc_8079CC8C:
{
    r4 = 0;
}

loc_8079CC90:
{
    r4 = (r4 + 8);
    goto loc_8079CC9C;
}

loc_8079CC98:
{
    r4 = 0;
}

loc_8079CC9C:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword2;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(2) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 2);
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_8079CD14;
}

loc_8079CCB8:
{
    r0 = MemoryInline::FlatRead16((r3 + 2));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079CCC0:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_5 & -4);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079CCE4;
    }
}

loc_8079CCDC:
{
    r0 = (r29 + 68);
    goto loc_8079CCE8;
}

loc_8079CCE4:
{
    r0 = 0;
}

loc_8079CCE8:
{
}

loc_8079CCEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CD0C;
    }
}

loc_8079CCF0:
{
}

loc_8079CCF4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CD00;
    }
}

loc_8079CCF8:
{
    r4 = (r29 + 68);
    goto loc_8079CD04;
}

loc_8079CD00:
{
    r4 = 0;
}

loc_8079CD04:
{
    r4 = (r4 + 8);
    goto loc_8079CD10;
}

loc_8079CD0C:
{
    r4 = 0;
}

loc_8079CD10:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079CD14:
{
}

loc_8079CD18:
{
    r3 = (r3 + 4);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CD28;
    }
}

loc_8079CD20:
{
    r5 = (r29 + 188);
    goto loc_8079CD2C;
}

loc_8079CD28:
{
    r5 = 0;
}

loc_8079CD2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079CD30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079CD3C;
    }
}

loc_8079CD34:
{
    r4 = (r29 + 68);
    goto loc_8079CD40;
}

loc_8079CD3C:
{
    r4 = 0;
}

loc_8079CD40:
{
    r6 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079AF08u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8079CD4C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CD58;
    }
}

loc_8079CD50:
{
    r0 = (r29 + 80);
    goto loc_8079CD5C;
}

loc_8079CD58:
{
    r0 = 0;
}

loc_8079CD5C:
{
}

loc_8079CD60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CF10;
    }
}

loc_8079CD64:
{
}

loc_8079CD68:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079CF10;
    }
}

loc_8079CD6C:
{
}

loc_8079CD70:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CD7C;
    }
}

loc_8079CD74:
{
    r4 = (r29 + 80);
    goto loc_8079CD80;
}

loc_8079CD7C:
{
    r4 = 0;
}

loc_8079CD80:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079CD8C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079CDB0;
    }
}

loc_8079CD90:
{
}

loc_8079CD94:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CDA0;
    }
}

loc_8079CD98:
{
    r4 = (r29 + 80);
    goto loc_8079CDA4;
}

loc_8079CDA0:
{
    r4 = 0;
}

loc_8079CDA4:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    r0 = 1;
    goto loc_8079CDB4;
}

loc_8079CDB0:
{
    r0 = 0;
}

loc_8079CDB4:
{
}

loc_8079CDB8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079CDF8;
    }
}

loc_8079CDBC:
{
}

loc_8079CDC0:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CDCC;
    }
}

loc_8079CDC4:
{
    r4 = (r29 + 80);
    goto loc_8079CDD0;
}

loc_8079CDCC:
{
    r4 = 0;
}

loc_8079CDD0:
{
    f1.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079CDDC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079CDF8;
    }
}

loc_8079CDE0:
{
}

loc_8079CDE4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CDF0;
    }
}

loc_8079CDE8:
{
    r4 = (r29 + 80);
    goto loc_8079CDF4;
}

loc_8079CDF0:
{
    r4 = 0;
}

loc_8079CDF4:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079CDF8:
{
}

loc_8079CDFC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CE08;
    }
}

loc_8079CE00:
{
    r4 = (r29 + 80);
    goto loc_8079CE0C;
}

loc_8079CE08:
{
    r4 = 0;
}

loc_8079CE0C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079CE18:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079CE3C;
    }
}

loc_8079CE1C:
{
}

loc_8079CE20:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CE2C;
    }
}

loc_8079CE24:
{
    r4 = (r29 + 80);
    goto loc_8079CE30;
}

loc_8079CE2C:
{
    r4 = 0;
}

loc_8079CE30:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    r0 = 1;
    goto loc_8079CE40;
}

loc_8079CE3C:
{
    r0 = 0;
}

loc_8079CE40:
{
}

loc_8079CE44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079CE84;
    }
}

loc_8079CE48:
{
}

loc_8079CE4C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CE58;
    }
}

loc_8079CE50:
{
    r4 = (r29 + 80);
    goto loc_8079CE5C;
}

loc_8079CE58:
{
    r4 = 0;
}

loc_8079CE5C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079CE68:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079CE84;
    }
}

loc_8079CE6C:
{
}

loc_8079CE70:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CE7C;
    }
}

loc_8079CE74:
{
    r4 = (r29 + 80);
    goto loc_8079CE80;
}

loc_8079CE7C:
{
    r4 = 0;
}

loc_8079CE80:
{
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
}

loc_8079CE84:
{
}

loc_8079CE88:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CE94;
    }
}

loc_8079CE8C:
{
    r4 = (r29 + 80);
    goto loc_8079CE98;
}

loc_8079CE94:
{
    r4 = 0;
}

loc_8079CE98:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079CEA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8079CEC8;
    }
}

loc_8079CEA8:
{
}

loc_8079CEAC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CEB8;
    }
}

loc_8079CEB0:
{
    r4 = (r29 + 80);
    goto loc_8079CEBC;
}

loc_8079CEB8:
{
    r4 = 0;
}

loc_8079CEBC:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    r0 = 1;
    goto loc_8079CECC;
}

loc_8079CEC8:
{
    r0 = 0;
}

loc_8079CECC:
{
}

loc_8079CED0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8079CF10;
    }
}

loc_8079CED4:
{
}

loc_8079CED8:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CEE4;
    }
}

loc_8079CEDC:
{
    r4 = (r29 + 80);
    goto loc_8079CEE8;
}

loc_8079CEE4:
{
    r4 = 0;
}

loc_8079CEE8:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079CEF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079CF10;
    }
}

loc_8079CEF8:
{
}

loc_8079CEFC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CF08;
    }
}

loc_8079CF00:
{
    r4 = (r29 + 80);
    goto loc_8079CF0C;
}

loc_8079CF08:
{
    r4 = 0;
}

loc_8079CF0C:
{
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_8079CF10:
{
}

loc_8079CF14:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CF20;
    }
}

loc_8079CF18:
{
    r0 = (r29 + 80);
    goto loc_8079CF24;
}

loc_8079CF20:
{
    r0 = 0;
}

loc_8079CF24:
{
}

loc_8079CF28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CF44;
    }
}

loc_8079CF2C:
{
}

loc_8079CF30:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CF3C;
    }
}

loc_8079CF34:
{
    r0 = (r29 + 80);
    goto loc_8079CF48;
}

loc_8079CF3C:
{
    r0 = 0;
    goto loc_8079CF48;
}

loc_8079CF44:
{
    r0 = 0;
}

loc_8079CF48:
{
}

loc_8079CF4C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D008;
    }
}

loc_8079CF50:
{
}

loc_8079CF54:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079CFAC;
    }
}

loc_8079CF58:
{
}

loc_8079CF5C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CF68;
    }
}

loc_8079CF60:
{
    r0 = (r29 + 80);
    goto loc_8079CF6C;
}

loc_8079CF68:
{
    r0 = 0;
}

loc_8079CF6C:
{
}

loc_8079CF70:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079CF8C;
    }
}

loc_8079CF74:
{
}

loc_8079CF78:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CF84;
    }
}

loc_8079CF7C:
{
    r4 = (r29 + 80);
    goto loc_8079CF90;
}

loc_8079CF84:
{
    r4 = 0;
    goto loc_8079CF90;
}

loc_8079CF8C:
{
    r4 = 0;
}

loc_8079CF90:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword3;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_8079D008;
}

loc_8079CFAC:
{
    r0 = MemoryInline::FlatRead8(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079CFB4:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079CFDC;
    }
}

loc_8079CFD4:
{
    r0 = (r29 + 80);
    goto loc_8079CFE0;
}

loc_8079CFDC:
{
    r0 = 0;
}

loc_8079CFE0:
{
}

loc_8079CFE4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D000;
    }
}

loc_8079CFE8:
{
}

loc_8079CFEC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079CFF8;
    }
}

loc_8079CFF0:
{
    r4 = (r29 + 80);
    goto loc_8079D004;
}

loc_8079CFF8:
{
    r4 = 0;
    goto loc_8079D004;
}

loc_8079D000:
{
    r4 = 0;
}

loc_8079D004:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079D008:
{
}

loc_8079D00C:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D018;
    }
}

loc_8079D010:
{
    r0 = (r29 + 80);
    goto loc_8079D01C;
}

loc_8079D018:
{
    r0 = 0;
}

loc_8079D01C:
{
}

loc_8079D020:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D040;
    }
}

loc_8079D024:
{
}

loc_8079D028:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D034;
    }
}

loc_8079D02C:
{
    r4 = (r29 + 80);
    goto loc_8079D038;
}

loc_8079D034:
{
    r4 = 0;
}

loc_8079D038:
{
    r0 = (r4 + 4);
    goto loc_8079D044;
}

loc_8079D040:
{
    r0 = 0;
}

loc_8079D044:
{
}

loc_8079D048:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D104;
    }
}

loc_8079D04C:
{
}

loc_8079D050:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079D0A8;
    }
}

loc_8079D054:
{
}

loc_8079D058:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D064;
    }
}

loc_8079D05C:
{
    r0 = (r29 + 80);
    goto loc_8079D068;
}

loc_8079D064:
{
    r0 = 0;
}

loc_8079D068:
{
}

loc_8079D06C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D08C;
    }
}

loc_8079D070:
{
}

loc_8079D074:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D080;
    }
}

loc_8079D078:
{
    r4 = (r29 + 80);
    goto loc_8079D084;
}

loc_8079D080:
{
    r4 = 0;
}

loc_8079D084:
{
    r4 = (r4 + 4);
    goto loc_8079D090;
}

loc_8079D08C:
{
    r4 = 0;
}

loc_8079D090:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword4 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword4;
    MemoryInline::FlatWrite8((r3 + 1), static_cast<uint8_t>(r0));
    goto loc_8079D104;
}

loc_8079D0A8:
{
    r0 = MemoryInline::FlatRead8((r3 + 1));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079D0B0:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D0D4;
    }
}

loc_8079D0CC:
{
    r0 = (r29 + 80);
    goto loc_8079D0D8;
}

loc_8079D0D4:
{
    r0 = 0;
}

loc_8079D0D8:
{
}

loc_8079D0DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D0FC;
    }
}

loc_8079D0E0:
{
}

loc_8079D0E4:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D0F0;
    }
}

loc_8079D0E8:
{
    r4 = (r29 + 80);
    goto loc_8079D0F4;
}

loc_8079D0F0:
{
    r4 = 0;
}

loc_8079D0F4:
{
    r4 = (r4 + 4);
    goto loc_8079D100;
}

loc_8079D0FC:
{
    r4 = 0;
}

loc_8079D100:
{
    MemoryInline::FlatWriteFloat32(r4, f0.d);
}

loc_8079D104:
{
}

loc_8079D108:
{
    r4 = (r3 + 2);
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D118;
    }
}

loc_8079D110:
{
    r0 = (r29 + 80);
    goto loc_8079D11C;
}

loc_8079D118:
{
    r0 = 0;
}

loc_8079D11C:
{
}

loc_8079D120:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D140;
    }
}

loc_8079D124:
{
}

loc_8079D128:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D134;
    }
}

loc_8079D12C:
{
    r3 = (r29 + 80);
    goto loc_8079D138;
}

loc_8079D134:
{
    r3 = 0;
}

loc_8079D138:
{
    r0 = (r3 + 8);
    goto loc_8079D144;
}

loc_8079D140:
{
    r0 = 0;
}

loc_8079D144:
{
}

loc_8079D148:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D20C;
    }
}

loc_8079D14C:
{
}

loc_8079D150:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_8079D1AC;
    }
}

loc_8079D154:
{
}

loc_8079D158:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D164;
    }
}

loc_8079D15C:
{
    r0 = (r29 + 80);
    goto loc_8079D168;
}

loc_8079D164:
{
    r0 = 0;
}

loc_8079D168:
{
}

loc_8079D16C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D18C;
    }
}

loc_8079D170:
{
}

loc_8079D174:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D180;
    }
}

loc_8079D178:
{
    r3 = (r29 + 80);
    goto loc_8079D184;
}

loc_8079D180:
{
    r3 = 0;
}

loc_8079D184:
{
    r3 = (r3 + 8);
    goto loc_8079D190;
}

loc_8079D18C:
{
    r3 = 0;
}

loc_8079D190:
{
    f0.d = MemoryInline::FlatReadFloat32(r3);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword5 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 24), f0.d);
    r0 = fctiwzword5;
    {
        const uint32_t ppcCarryValue = static_cast<uint32_t>(r0);
        const uint32_t ppcCarryShift = static_cast<uint32_t>(1) & 0x3Fu;
        const bool ppcCarryNegative = (ppcCarryValue & 0x80000000u) != 0;
        const uint32_t ppcCarry = ppcCarryShift == 0 ? 0u : (ppcCarryShift >= 32 ? (ppcCarryNegative && ppcCarryValue != 0 ? 1u : 0u) : (ppcCarryNegative && (ppcCarryValue & ((1u << ppcCarryShift) - 1u)) != 0 ? 1u : 0u));
        xer = (xer & 0xDFFFFFFFu) | (ppcCarry << 29);
    }
    r0 = (static_cast<int32_t>(r0) >> 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    goto loc_8079D20C;
}

loc_8079D1AC:
{
    r0 = MemoryInline::FlatRead8(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079D1B4:
{
    f1.d = MemoryInline::FlatReadFloat64((r31 + 16));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_9 & -2);
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D1DC;
    }
}

loc_8079D1D4:
{
    r0 = (r29 + 80);
    goto loc_8079D1E0;
}

loc_8079D1DC:
{
    r0 = 0;
}

loc_8079D1E0:
{
}

loc_8079D1E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079D204;
    }
}

loc_8079D1E8:
{
}

loc_8079D1EC:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8079D1F8;
    }
}

loc_8079D1F0:
{
    r3 = (r29 + 80);
    goto loc_8079D1FC;
}

loc_8079D1F8:
{
    r3 = 0;
}

loc_8079D1FC:
{
    r3 = (r3 + 8);
    goto loc_8079D208;
}

loc_8079D204:
{
    r3 = 0;
}

loc_8079D208:
{
    MemoryInline::FlatWriteFloat32(r3, f0.d);
}

loc_8079D20C:
{
    r3 = (r4 + 1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_8079D210:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8079D228;
    }
}

loc_8079D214:
{
}

loc_8079D218:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_8079D228;
    }
}

loc_8079D21C:
{
    r0 = MemoryInline::FlatRead16((r29 + 12));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_11 & 15);
    MemoryInline::FlatWrite8((r29 + 108), static_cast<uint8_t>(r0));
}

loc_8079D228:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_8079D22C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D2C0;
    }
}

loc_8079D230:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8079D234:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D2C0;
    }
}

loc_8079D238:
{
    r30 = 0x809C0000u;
    r5 = 0x809C0000u;
    r28 = MemoryInline::FlatRead32((r29 + 4));
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r30 + 13860));
    r0 = MemoryInline::FlatRead32((r5 + 14528));
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    r29 = MemoryInline::FlatRead32((r3 + 8016));
    r3 = r29;
    // inline leaf 0x80654810 (4 guest instruction(s))
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8432));
    r3 = MemoryInline::FlatRead32((r3 + 11140));
    // end of inlined leaf 0x80654810
    r0 = 20;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8079D268:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079D298;
    }
}

loc_8079D26C:
{
    r3 = r29;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80654758u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8079D278:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079D298;
    }
}

loc_8079D27C:
{
    r6 = MemoryInline::FlatRead32((r30 + 13860));
    r3 = r29;
    r4 = r28;
    r5 = 3;
    r7 = 20;
    ctx->lr = 0x8079D294u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8065474Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8079D2B8;
}

loc_8079D298:
{
    r3 = 0x809C0000u;
    r5 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r5 + 13860));
    r4 = r28;
    r3 = MemoryInline::FlatRead32((r3 + 13856));
    r5 = 3;
    r7 = 20;
    ctx->lr = 0x8079D2B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8079BFECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8079D2B8:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 13860));
}

loc_8079D2C0:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00001FB gpr_write=0xF00001FB gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8079C960 func_8079C960 preserves=true fpr_mask=0x00000000
