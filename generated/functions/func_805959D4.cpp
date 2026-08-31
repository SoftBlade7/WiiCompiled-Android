#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805959D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805959D4;

loc_805959D4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    // inline leaf 0x80533090 (12 guest instruction(s))
}

loc_inl0_0x80533090:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2928));
}

loc_inl0_0x805330A0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(11))) {
        goto loc_inl0_0x805330B4;
    }
}

loc_inl0_0x805330A4:
{
}

loc_inl0_0x805330A8:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(12))) {
        goto loc_inl0_0x805330B4;
    }
}

loc_inl0_0x805330AC:
{
    r3 = 0;
    goto loc_inl0_cont_80533090;
}

loc_inl0_0x805330B4:
{
    r0 = MemoryInline::FlatRead32((r3 + 32));
    r3 = (240 - r0);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(240) >= static_cast<uint32_t>(r0) ? 1u : 0u) << 29);
}

loc_inl0_cont_80533090:
{
    // end of inlined leaf 0x80533090
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805959F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595AE4;
    }
}

loc_805959FC:
{
    r3 = MemoryInline::FlatRead32((r31 + 24));
    // inline leaf 0x80590664 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 20));
    r3 = (r0 & 1);
    // end of inlined leaf 0x80590664
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80595A08:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595ACC;
    }
}

loc_80595A0C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10456));
    r0 = MemoryInline::FlatRead32((r3 + 2920));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(34));
}

loc_80595A1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80595ACC;
    }
}

loc_80595A20:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(35));
}

loc_80595A24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80595ACC;
    }
}

loc_80595A28:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80595A30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80595ACC;
    }
}

loc_80595A34:
{
    r4 = 0x808B0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r3 = (r4 + 25848);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80595A48:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80595A58;
    }
}

loc_80595A4C:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r31 + 160), r0);
    goto loc_80595ACC;
}

loc_80595A58:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 25848));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80595A60:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80595ACC;
    }
}

loc_80595A64:
{
    r0 = 5;
    r4 = 1;
    ctr = r0;
}

loc_80595A70:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & 2040);
    f1.d = MemoryInline::FlatReadFloat32((r31 + 156));
    r5 = (r3 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r5 + -8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80595A84:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80595AC4;
    }
}

loc_80595A88:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80595A90:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80595AC4;
    }
}

loc_80595A98:
{
    r0 = (r4 & 255);
    MemoryInline::FlatWrite32((r31 + 160), r0);
    r3 = MemoryInline::FlatRead32((r31 + 24));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 52));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80595AB4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80595ACC;
    }
}

loc_80595AB8:
{
    r0 = 1;
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    goto loc_80595ACC;
}

loc_80595AC4:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_80595A70;
    }
}

loc_80595ACC:
{
    r4 = MemoryInline::FlatRead32((r31 + 160));
    r3 = r31;
    ctx->lr = 0x80595AD8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80595AF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r31 + 16));
    r0 = (r0 & -257);
    MemoryInline::FlatWrite32((r31 + 16), r0);
}

loc_80595AE4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    ctx->ctr = ctr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805959D4 func_805959D4 preserves=true fpr_mask=0x00000000
