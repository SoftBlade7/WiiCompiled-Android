#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800EAE58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800EAE58;

loc_800EAE58:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x80280000u;
    r31 = (r31 + -25600);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    // inline leaf 0x800CCC54 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26968));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    // end of inlined leaf 0x800CCC54
}

loc_800EAE80:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800EAEB8;
    }
}

loc_800EAE84:
{
    r3 = 0;
    // inline leaf 0x800CCB4C (6 guest instruction(s))
}

loc_inl1_0x800CCB4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_inl1_0x800CCB50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x800CCB5C;
    }
}

loc_inl1_0x800CCB54:
{
    r0 = MemoryInline::FlatRead32((r13 + -26964));
    MemoryInline::FlatWriteRam32(r3, r0);
}

loc_inl1_0x800CCB5C:
{
    r3 = MemoryInline::FlatRead32((r13 + -26968));
}

loc_inl1_cont_800CCB4C:
{
    // end of inlined leaf 0x800CCB4C
    r5 = r3;
    r4 = (r31 + 1140);
    r3 = 994;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800EAEA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EAD88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800EAEA4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAEB0;
    }
}

loc_800EAEA8:
{
    r0 = 22;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_800EAEB0:
{
    r3 = 1;
    goto loc_800EAF3C;
}

loc_800EAEB8:
{
    r3 = 0x802F0000u;
    r3 = (r3 + 7224);
    r0 = MemoryInline::FlatRead32((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_800EAEC8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAF38;
    }
}

loc_800EAECC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EAEDC;
    }
}

loc_800EAED0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800EAED4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EAEE8;
    }
}

loc_800EAED8:
{
    goto loc_800EAF38;
}

loc_800EAEDC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_800EAEE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800EAF38;
    }
}

loc_800EAEE4:
{
    goto loc_800EAF10;
}

loc_800EAEE8:
{
    r4 = (r31 + 552);
    r3 = 1001;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800EAEF8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EAD88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800EAEFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAF08;
    }
}

loc_800EAF00:
{
    r0 = 19;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_800EAF08:
{
    r3 = 1;
    goto loc_800EAF3C;
}

loc_800EAF10:
{
    r4 = (r31 + 1160);
    r3 = 1006;
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x800EAF20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800EAD88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_800EAF24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800EAF30;
    }
}

loc_800EAF28:
{
    r0 = 20;
    MemoryInline::FlatWrite32(r30, r0);
}

loc_800EAF30:
{
    r3 = 1;
    goto loc_800EAF3C;
}

loc_800EAF38:
{
    r3 = 0;
}

loc_800EAF3C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFF7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x800EAE58 func_800EAE58 preserves=true fpr_mask=0x00000000
