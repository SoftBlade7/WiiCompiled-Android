#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807F2B74(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807F2B74;

loc_807F2B74:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r4 = 0;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = (r3 + 152);
    // inline leaf 0x8063C820 (4 guest instruction(s))
    r0 = (r4 * 68);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = (r3 + r0);
    // end of inlined leaf 0x8063C820
    r0 = MemoryInline::FlatRead32((r3 + 56));
}

loc_807F2BA4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_807F2BB0;
    }
}

loc_807F2BA8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_807F2BAC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F2C6C;
    }
}

loc_807F2BB0:
{
    r0 = MemoryInline::FlatRead32((r30 + 396));
}

loc_807F2BB8:
{
    if ((static_cast<uint32_t>(r31) == static_cast<uint32_t>(r0))) {
        goto loc_807F2BC8;
    }
}

loc_807F2BBC:
{
    r3 = 0x808B0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + -25288));
    MemoryInline::FlatWriteFloat32((r30 + 388), f0.d);
}

loc_807F2BC8:
{
    r3 = MemoryInline::FlatRead32((r30 + 384));
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 396), r31);
}

loc_807F2BD8:
{
    MemoryInline::FlatWrite32((r30 + 380), r0);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(5))) {
        goto loc_807F2C1C;
    }
}

loc_807F2BE0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807F2BE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F2C1C;
    }
}

loc_807F2BEC:
{
    r0 = 5;
    MemoryInline::FlatWrite32((r30 + 384), r0);
    r3 = 7;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80860AF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = 0x808B0000u;
    r5 = r3;
    r4 = (r4 + -24832);
    r3 = r30;
    r4 = (r4 + 292);
    ctx->lr = 0x807F2C18u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807F2C6C;
}

loc_807F2C1C:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_807F2C24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807F2C6C;
    }
}

loc_807F2C28:
{
}

loc_807F2C2C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_807F2C68;
    }
}

loc_807F2C30:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F2C34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807F2C68;
    }
}

loc_807F2C38:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 384), r0);
    r3 = 1;
    r4 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80860AF0u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r4 = 0x808B0000u;
    r5 = r3;
    r4 = (r4 + -24832);
    r3 = r30;
    r4 = (r4 + 297);
    ctx->lr = 0x807F2C64u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063E0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_807F2C6C;
}

loc_807F2C68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_807F2C6C:
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807F2B74 func_807F2B74 preserves=true fpr_mask=0x00000000
