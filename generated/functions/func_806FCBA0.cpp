#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FCBA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806FCBA0;

loc_806FCBA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r6 = 0x809C0000u;
    r5 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r7 = MemoryInline::FlatRead32((r6 + 10392));
    r0 = MemoryInline::FlatRead8((r7 + 2212));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806FCBC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FCBD4;
    }
}

loc_806FCBCC:
{
    r3 = 0;
    goto loc_806FCD5C;
}

loc_806FCBD4:
{
    r0 = MemoryInline::FlatRead8((r7 + 2213));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806FCBDC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FCBE8;
    }
}

loc_806FCBE0:
{
    r3 = 0;
    goto loc_806FCD5C;
}

loc_806FCBE8:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 10232));
    r0 = MemoryInline::FlatRead8((r6 + 112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806FCBF8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCC04;
    }
}

loc_806FCBFC:
{
    r3 = 0;
    goto loc_806FCD5C;
}

loc_806FCC04:
{
    r6 = 0x809C0000u;
    r6 = MemoryInline::FlatRead32((r6 + 10320));
    r0 = MemoryInline::FlatRead32((r6 + 8));
}

loc_806FCC14:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(3))) {
        goto loc_806FCC28;
    }
}

loc_806FCC18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_806FCC1C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_806FCC28;
    }
}

loc_806FCC20:
{
    r3 = 0;
    goto loc_806FCD5C;
}

loc_806FCC28:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(641));
}

loc_806FCC2C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FCC38;
    }
}

loc_806FCC30:
{
    r31 = (r3 + 396);
    goto loc_806FCC3C;
}

loc_806FCC38:
{
    r31 = (r3 + 24);
}

loc_806FCC3C:
{
    r12 = MemoryInline::FlatRead32(r7);
    r3 = r7;
    r4 = r31;
    r12 = MemoryInline::FlatRead32((r12 + 176));
    ctr = r12;
    ctx->lr = 0x806FCC54u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
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
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    f6 = ctx->fpr[6];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r5 = 0x809C0000u;
    r4 = 0x808A0000u;
    r5 = MemoryInline::FlatRead8((r5 + 9033));
    r30 = r3;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4960));
    r6 = 0;
}

loc_806FCC70:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806FCD24;
    }
}

loc_806FCC74:
{
}

loc_806FCC78:
{
    r0 = (r5 + 248);
    if ((static_cast<uint32_t>(r5) <= static_cast<uint32_t>(8))) {
        goto loc_806FCCF4;
    }
}

loc_806FCC80:
{
    r3 = (r0 & 255);
    r4 = 0x809C0000u;
    r0 = (r3 + 7);
    r4 = MemoryInline::FlatRead32((r4 + 10400));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_806FCC9C:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_806FCCF4;
    }
}

loc_806FCCA0:
{
    r0 = (r6 & 255);
    r6 = (r6 + 8);
    r0 = (r0 * 60);
    r3 = (r4 + r0);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 36), 0, 424u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 36));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 60u, (r3 + 96));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 120u, (r3 + 156));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 180u, (r3 + 216));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 240u, (r3 + 276));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 300u, (r3 + 336));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 360u, (r3 + 396));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 420u, (r3 + 456));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f6.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f5.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f4.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f3.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806FCCA0;
    }
}

loc_806FCCF4:
{
    r3 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r3 + 10400));
    goto loc_806FCD18;
}

loc_806FCD00:
{
    r0 = (r6 & 255);
    r6 = (r6 + 1);
    r0 = (r0 * 60);
    r3 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_806FCD18:
{
    r0 = (r6 & 255);
}

loc_806FCD20:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r5))) {
        goto loc_806FCD00;
    }
}

loc_806FCD24:
{
    r0 = 1127219200;
    MemoryInline::FlatWriteRam32((r1 + 12), r5);
    r4 = 0x808A0000u;
    r3 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    f2.d = MemoryInline::FlatReadFloat64((r4 + 5016));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FCD40:
{
    f0.d = MemoryInline::FlatReadFloat64((r1 + 8));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f0.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCD58;
    }
}

loc_806FCD50:
{
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    f5 = ctx->fpr[5];
    cr = ctx->cr;
}

loc_806FCD58:
{
    r3 = r30;
}

loc_806FCD5C:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FCBA0 func_806FCBA0 preserves=true fpr_mask=0x00000000
