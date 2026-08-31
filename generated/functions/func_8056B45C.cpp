#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056B45C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056B45C;

loc_8056B45C:
{
    MemoryInline::FlatWriteRam32((r1 + -112), r1);
    r1 = (r1 + -112);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 116), r0);
    MemoryInline::FlatWriteRam32((r1 + 108), r31);
    MemoryInline::FlatWriteRam32((r1 + 104), r30);
    r30 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B47C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056B590;
    }
}

loc_8056B480:
{
    r0 = MemoryInline::FlatRead32((r3 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_8056B488:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056B590;
    }
}

loc_8056B48C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B490:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056B4DC;
    }
}

loc_8056B494:
{
    r4 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 112));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 5804));
    r4 = 0x808B0000u;
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 112), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 20652));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8056B4B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056B4C4;
    }
}

loc_8056B4B8:
{
    MemoryInline::FlatWriteFloat32((r3 + 112), f1.d);
    r0 = 1;
    goto loc_8056B4C8;
}

loc_8056B4C4:
{
    r0 = 0;
}

loc_8056B4C8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B4CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056B590;
    }
}

loc_8056B4D0:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 100), static_cast<uint8_t>(r0));
    goto loc_8056B590;
}

loc_8056B4DC:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 104));
    r31 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r31 + 6320));
    r3 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = (r1 + 12);
    r5 = 0;
    ctx->lr = 0x8056B4FCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80055540u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = (r1 + 12);
    r4 = (r30 + 108);
    // inline leaf 0x800555C0 (15 guest instruction(s))
}

loc_inl0_0x800555C0:
{
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 8);
}

loc_inl0_0x800555C8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x800555E0;
    }
}

loc_inl0_0x800555CC:
{
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
    goto loc_inl0_cont_800555C0;
}

loc_inl0_0x800555E0:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 12));
    MemoryInline::FlatWriteFloat32(r4, f2.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f1.d);
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_inl0_cont_800555C0:
{
    // end of inlined leaf 0x800555C0
    r0 = MemoryInline::FlatRead32((r31 + 6320));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056B510:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8056B540;
    }
}

loc_8056B514:
{
    r3 = 0x808B0000u;
    r5 = 0x808B0000u;
    r6 = 0x808B0000u;
    r7 = 0x808B0000u;
    r3 = (r3 + 18372);
    r5 = (r5 + 18344);
    r6 = (r6 + 18332);
    r7 = (r7 + 20760);
    r4 = 39;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8056B540u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80025FB0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8056B540:
{
    r3 = 0x809C0000u;
    r0 = 1127219200;
    r5 = MemoryInline::FlatRead32((r3 + 6320));
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + 88), r0);
    r3 = 0x80890000u;
    r0 = MemoryInline::FlatRead16((r5 + 32));
    f3.d = MemoryInline::FlatReadFloat32((r30 + 104));
    r0 = (r0 ^ -2147483648);
    MemoryInline::FlatWriteRam32((r1 + 92), r0);
    f2.d = MemoryInline::FlatReadFloat32((r4 + 5800));
    f1.d = MemoryInline::FlatReadFloat64((r3 + 5792));
    f0.d = MemoryInline::FlatReadFloat64((r1 + 88));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 104), f2.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8056B584:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8056B590;
    }
}

loc_8056B588:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 100), static_cast<uint8_t>(r0));
}

loc_8056B590:
{
    r0 = MemoryInline::FlatRead32((r1 + 116));
    r31 = MemoryInline::FlatRead32((r1 + 108));
    r30 = MemoryInline::FlatRead32((r1 + 104));
    ctx->lr = r0;
    r1 = (r1 + 112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8056B45C func_8056B45C preserves=true fpr_mask=0x00000000
