#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CD994(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_806CDB18_loc_0 = 0;
    uint32_t addr_lfsx_806CDC04_loc_0 = 0;
    uint32_t addr_lfsx_806CDC6C_loc_0 = 0;
    uint32_t addr_stfsx_806CDA60_loc_0 = 0;
    uint32_t addr_stfsx_806CDB28_loc_0 = 0;
    uint32_t addr_stfsx_806CDB9C_loc_0 = 0;
    uint32_t addr_stfsx_806CDC10_loc_0 = 0;
    uint32_t addr_stfsx_806CDC84_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CD994;

loc_806CD994:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 376));
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_806CD9B8:
{
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CDCA0;
    }
}

loc_806CD9C0:
{
    r0 = MemoryInline::FlatRead8((r3 + 444));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_806CD9C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CDCA0;
    }
}

loc_806CD9CC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 448));
    r3 = r4;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 432));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    InvokeDirectCpu<0x806B59A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d));
    f2.d = MemoryInline::FlatReadFloat32((r31 + 364));
    MemoryInline::FlatWriteFloat32((r31 + 368), f1.d);
    r3 = MemoryInline::FlatRead32((r31 + 32));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r31 + 372), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 28));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CD9FC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDA80;
    }
}

loc_806CDA04:
{
    r0 = MemoryInline::FlatRead32((r31 + 376));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(10));
}

loc_806CDA0C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_806CDA80;
    }
}

loc_806CDA10:
{
    r3 = MemoryInline::FlatRead32((r31 + 228));
    r4 = 1;
    ctx->lr = 0x806CDA1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F4840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_806CDA20:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_806CDA80;
    }
}

loc_806CDA24:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 376), r0);
    r4 = MemoryInline::FlatRead32((r31 + 32));
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -968));
    r0 = 1;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    r5 = 0;
    MemoryInline::FlatWriteFloat32((r31 + 372), f1.d);
    r4 = 0;
    MemoryInline::FlatWrite8((r31 + 388), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r31 + 396), static_cast<uint8_t>(r0));
    goto loc_806CDA68;
}

loc_806CDA58:
{
    r3 = MemoryInline::FlatRead32((r31 + 392));
    r5 = (r5 + 1);
    addr_stfsx_806CDA60_loc_0 = (r3 + r4);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806CDA60_loc_0, f0.d);
    r4 = (r4 + 4);
}

loc_806CDA68:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_806CDA70:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CDA58;
    }
}

loc_806CDA74:
{
    r3 = r31;
    ctx->lr = 0x806CDA7Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CBFF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806CDCAC;
}

loc_806CDA80:
{
    r4 = MemoryInline::FlatRead32((r31 + 376));
    r3 = MemoryInline::FlatRead32((r31 + 316));
    r0 = (r4 + 1);
    MemoryInline::FlatWrite32((r31 + 376), r0);
    r3 = (r3 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl0_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037604;
    }
}

loc_inl0_0x800375FC:
{
    r0 = 0;
    goto loc_inl0_0x80037618;
}

loc_inl0_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
}

loc_inl0_0x80037618:
{
}

loc_inl0_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037628;
    }
}

loc_inl0_0x80037620:
{
    r3 = r4;
    goto loc_inl0_cont_800375F0;
}

loc_inl0_0x80037628:
{
    r3 = 0;
}

loc_inl0_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_806CDA9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806CDAA8;
    }
}

loc_806CDAA0:
{
    r3 = 0;
    goto loc_806CDAAC;
}

loc_806CDAA8:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_806CDAAC:
{
}

loc_806CDAB0:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_806CDAC0;
    }
}

loc_806CDAB8:
{
}

loc_806CDABC:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_806CDAC4;
    }
}

loc_806CDAC0:
{
    r0 = 1;
}

loc_806CDAC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CDAC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDADC;
    }
}

loc_806CDACC:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 452));
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRamFloat32((r3 + 8908), f0.d);
    goto loc_806CDAEC;
}

loc_806CDADC:
{
    r4 = 0x808A0000u;
    r3 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r4 + -968));
    MemoryInline::FlatWriteRamFloat32((r3 + 8908), f0.d);
}

loc_806CDAEC:
{
    r4 = 0x808A0000u;
    r3 = 0x808A0000u;
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 396), static_cast<uint8_t>(r0));
    f0.d = MemoryInline::FlatReadFloat64((r4 + -960));
    r8 = 0;
    f4.d = MemoryInline::FlatReadFloat32((r3 + -872));
    r5 = 0;
    goto loc_806CDC90;
}

loc_806CDB10:
{
    r4 = MemoryInline::FlatRead32((r31 + 392));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 468));
    addr_lfsx_806CDB18_loc_0 = (r4 + r5);
    f5.d = MemoryInline::FlatReadFloat32(addr_lfsx_806CDB18_loc_0);
    SetCRFloatResident(cr, 0, f5.d, f1.d);
}

loc_806CDB20:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDB30;
    }
}

loc_806CDB28:
{
    addr_stfsx_806CDB28_loc_0 = (r4 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806CDB28_loc_0, f1.d);
    goto loc_806CDC88;
}

loc_806CDB30:
{
    r6 = MemoryInline::FlatRead32((r31 + 460));
    r7 = MemoryInline::FlatRead32((r31 + 376));
}

loc_806CDB3C:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r6))) {
        goto loc_806CDBA4;
    }
}

loc_806CDB40:
{
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = (r7 ^ -2147483648);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 472));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_806CDB6C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CDBA4;
    }
}

loc_806CDB70:
{
    r0 = (r8 + -3);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 464));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 456));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f2.d));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    addr_stfsx_806CDB9C_loc_0 = (r4 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806CDB9C_loc_0, f1.d);
    goto loc_806CDC88;
}

loc_806CDBA4:
{
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r3 = (r7 ^ -2147483648);
    f5.d = MemoryInline::FlatReadFloat32((r31 + 472));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_806CDBD0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDC18;
    }
}

loc_806CDBD8:
{
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 476));
    f2.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f3.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f5.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_806CDC00:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_806CDC18;
    }
}

loc_806CDC04:
{
    addr_lfsx_806CDC04_loc_0 = (r4 + r5);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_806CDC04_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 456));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    addr_stfsx_806CDC10_loc_0 = (r4 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806CDC10_loc_0, f1.d);
    goto loc_806CDC88;
}

loc_806CDC18:
{
    r0 = (r6 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r0 = (r7 ^ -2147483648);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 472));
    f1.d = MemoryInline::FlatReadFloat64((r1 + 8));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 476));
    f5.d = MemoryInline::FlatReadFloat64((r1 + 16));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_806CDC4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDC88;
    }
}

loc_806CDC54:
{
    r0 = (r8 + -3);
    f3.d = MemoryInline::FlatReadFloat32((r31 + 464));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    f2.d = MemoryInline::FlatReadFloat32((r31 + 456));
    f5.d = MemoryInline::FlatReadFloat64((r1 + 16));
    addr_lfsx_806CDC6C_loc_0 = (r4 + r5);
    f1.d = MemoryInline::FlatReadFloat32(addr_lfsx_806CDC6C_loc_0);
    f5.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f0.d));
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f3.d));
    f2.d = PpcFmulsInline(f2.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    addr_stfsx_806CDC84_loc_0 = (r4 + r5);
    MemoryInline::FlatWriteFloat32(addr_stfsx_806CDC84_loc_0, f1.d);
}

loc_806CDC88:
{
    r5 = (r5 + 4);
    r8 = (r8 + 1);
}

loc_806CDC90:
{
    r0 = MemoryInline::FlatRead8((r31 + 208));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r0));
}

loc_806CDC98:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806CDB10;
    }
}

loc_806CDC9C:
{
    goto loc_806CDCAC;
}

loc_806CDCA0:
{
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::FlatWriteFloat32((r3 + 372), f0.d);
}

loc_806CDCAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CD994 func_806CD994 preserves=true fpr_mask=0x00000000
