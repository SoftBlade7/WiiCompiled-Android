#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807EBF20(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_807EBF20;

loc_807EBF20:
{
    MemoryInline::FlatWriteRam32((r1 + -96), r1);
    r1 = (r1 + -96);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_807EBF2C:
{
    MemoryInline::FlatWriteRam32((r1 + 100), r0);
    MemoryInline::FlatWriteRam32((r1 + 92), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 88), r30);
    r30 = r3;
    MemoryInline::FlatWriteRam32((r1 + 84), r29);
    MemoryInline::FlatWriteRam32((r1 + 80), r28);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EC084;
    }
}

loc_807EBF4C:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2960));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807EBF5C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EC084;
    }
}

loc_807EBF60:
{
    r4 = 0x809C0000u;
    r0 = 255;
    r4 = MemoryInline::FlatRead32((r4 + 7736));
    r5 = 120;
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r5));
    r0 = MemoryInline::FlatRead32(r4);
}

loc_807EBF84:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(106))) {
        goto loc_807EBF90;
    }
}

loc_807EBF88:
{
}

loc_807EBF8C:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(107))) {
        goto loc_807EBFA0;
    }
}

loc_807EBF90:
{
}

loc_807EBF94:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(110))) {
        goto loc_807EC01C;
    }
}

loc_807EBF98:
{
}

loc_807EBF9C:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(111))) {
        goto loc_807EC01C;
    }
}

loc_807EBFA0:
{
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r28 = MemoryInline::FlatRead32((r3 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_807EBFAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EBFB8;
    }
}

loc_807EBFB0:
{
    r28 = 0;
    goto loc_807EC00C;
}

loc_807EBFB8:
{
    r29 = 0x809C0000u;
    r29 = (r29 + 17984);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807EC008;
    }
}

loc_807EBFC4:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x807EBFD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_807EBFF0;
}

loc_807EBFDC:
{
}

loc_807EBFE0:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_807EBFEC;
    }
}

loc_807EBFE4:
{
    r0 = 1;
    goto loc_807EBFFC;
}

loc_807EBFEC:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_807EBFF0:
{
}

loc_807EBFF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_807EBFDC;
    }
}

loc_807EBFF8:
{
    r0 = 0;
}

loc_807EBFFC:
{
}

loc_807EC000:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807EC008;
    }
}

loc_807EC004:
{
    goto loc_807EC00C;
}

loc_807EC008:
{
    r28 = 0;
}

loc_807EC00C:
{
}

loc_807EC010:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_807EC034;
    }
}

loc_807EC014:
{
    r0 = MemoryInline::FlatRead32((r28 + 100));
    goto loc_807EC038;
}

loc_807EC01C:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead8((r30 + 400));
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    // inline leaf 0x80531F70 (4 guest instruction(s))
    r3 = (r3 + r4);
    r0 = MemoryInline::FlatRead8((r3 + 2948));
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    // end of inlined leaf 0x80531F70
    r0 = (r3 & 255);
    goto loc_807EC038;
}

loc_807EC034:
{
    r0 = -1;
}

loc_807EC038:
{
    r0 = (r0 & 255);
    r3 = 0x809C0000u;
    r0 = (r0 * 240);
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 244));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807EC054:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807EC06C;
    }
}

loc_807EC058:
{
    r3 = 0;
    r0 = 220;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    goto loc_807EC14C;
}

loc_807EC06C:
{
    r0 = 20;
    r3 = 230;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
    goto loc_807EC14C;
}

loc_807EC084:
{
    r3 = MemoryInline::FlatRead8((r3 + 400));
    r4 = (r1 + 24);
    r5 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    InvokeDirectCpu<0x805F0440u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead16((r1 + 24));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    r7 = 1127219200;
    r0 = MemoryInline::FlatRead16((r1 + 16));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    r9 = 0x808B0000u;
    r6 = 0x808B0000u;
    r5 = MemoryInline::FlatRead16((r1 + 26));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r1 + 18));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r8 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 36), r8);
    r4 = (r5 + r4);
    r3 = MemoryInline::FlatRead16((r1 + 28));
    r3 = (r3 << 16);
    r3 = (static_cast<int32_t>(r3) >> 16);
    MemoryInline::FlatWriteRam32((r1 + 32), r7);
    r4 = (r4 ^ -2147483648);
    r0 = MemoryInline::FlatRead16((r1 + 20));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    f4.d = MemoryInline::FlatReadFloat64((r9 + -27096));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 32));
    r0 = (r3 + r0);
    r3 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 52), r4);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f3.d = MemoryInline::FlatReadFloat32((r6 + -27104));
    MemoryInline::FlatWriteRam32((r1 + 48), r7);
    r0 = 255;
    f2.d = PpcFmulsInline(f3.d, f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 48));
    MemoryInline::FlatWriteRam32((r1 + 68), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    MemoryInline::FlatWriteRam32((r1 + 64), r7);
    f2.d = PPC_Fctiwz(f2.d);
    f0.d = MemoryInline::FlatReadFloat64((r1 + 64));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 40), f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f4.d));
    f1.d = PPC_Fctiwz(f1.d);
    r3 = fctiwzword0;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r3));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f1.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 56), f1.d);
    f0.d = PPC_Fctiwz(f0.d);
    r3 = fctiwzword1;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r3));
    fctiwzword2 = PPC_FprLowWordInline(f0.d);
    MemoryInline::FlatWriteRamFloat64((r1 + 72), f0.d);
    r3 = fctiwzword2;
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r3));
    MemoryInline::FlatWriteRam8((r1 + 15), static_cast<uint8_t>(r0));
}

loc_807EC14C:
{
    r4 = r31;
    r3 = (r30 + 168);
    ctx->lr = 0x807EC158u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x805E8368u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r28 = r3;
    r29 = 0;
}

loc_807EC160:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
}

loc_807EC164:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807EC1BC;
    }
}

loc_807EC168:
{
    r3 = MemoryInline::FlatRead8((r1 + 12));
    r0 = 255;
    r3 = (r3 + 40);
}

loc_807EC178:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(255))) {
        goto loc_807EC180;
    }
}

loc_807EC17C:
{
    r0 = r3;
}

loc_807EC180:
{
    r3 = MemoryInline::FlatRead8((r1 + 13));
    r4 = 255;
    MemoryInline::FlatWriteRam8((r1 + 12), static_cast<uint8_t>(r0));
    r0 = (r3 + 130);
}

loc_807EC194:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(255))) {
        goto loc_807EC19C;
    }
}

loc_807EC198:
{
    r4 = r0;
}

loc_807EC19C:
{
    r3 = MemoryInline::FlatRead8((r1 + 14));
    r0 = 255;
    MemoryInline::FlatWriteRam8((r1 + 13), static_cast<uint8_t>(r4));
    r3 = (r3 + 40);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(255));
}

loc_807EC1B0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807EC1B8;
    }
}

loc_807EC1B4:
{
    r0 = r3;
}

loc_807EC1B8:
{
    MemoryInline::FlatWriteRam8((r1 + 14), static_cast<uint8_t>(r0));
}

loc_807EC1BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r28;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = r29;
    r5 = (r1 + 8);
    r12 = MemoryInline::FlatRead32(r28);
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x807EC1E0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
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
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(4));
}

loc_807EC1E8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_807EC160;
    }
}

loc_807EC1EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 100));
    r31 = MemoryInline::FlatRead32((r1 + 92));
    r30 = MemoryInline::FlatRead32((r1 + 88));
    r29 = MemoryInline::FlatRead32((r1 + 84));
    r28 = MemoryInline::FlatRead32((r1 + 80));
    ctx->lr = r0;
    r1 = (r1 + 96);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807EBF20 func_807EBF20 preserves=true fpr_mask=0x00000000
