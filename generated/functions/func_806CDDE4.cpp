#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806CDDE4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806CDDE4;

loc_806CDDE4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 358));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CDE00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDE30;
    }
}

loc_806CDE04:
{
    r4 = 0x809C0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 344));
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r4 = MemoryInline::FlatRead32(r4);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806CDE20:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDE30;
    }
}

loc_806CDE28:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 358), static_cast<uint8_t>(r0));
}

loc_806CDE30:
{
    r0 = MemoryInline::FlatRead8((r3 + 358));
    r4 = 0;
}

loc_806CDE3C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806CDE50;
    }
}

loc_806CDE40:
{
    r0 = MemoryInline::FlatRead8((r3 + 359));
}

loc_806CDE48:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CDE50;
    }
}

loc_806CDE4C:
{
    r4 = 1;
}

loc_806CDE50:
{
}

loc_806CDE54:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806CDE6C;
    }
}

loc_806CDE58:
{
    r0 = MemoryInline::FlatRead32((r3 + 188));
}

loc_806CDE60:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806CDE6C;
    }
}

loc_806CDE64:
{
    r0 = MemoryInline::FlatRead16((r3 + 350));
    MemoryInline::FlatWrite16((r3 + 348), static_cast<uint16_t>(r0));
}

loc_806CDE6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806CDE70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CDE88;
    }
}

loc_806CDE74:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CC43Cu>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r31 + 216));
    r4 = 626;
    ctx->lr = 0x806CDE88u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8082055Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806CDE88:
{
    r0 = MemoryInline::FlatRead8((r31 + 358));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806CDE90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806CDEAC;
    }
}

loc_806CDE94:
{
    r3 = r31;
    ctx->lr = 0x806CDE9Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806CC48Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806CDEA0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806CDEAC;
    }
}

loc_806CDEA4:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 360), static_cast<uint16_t>(r0));
}

loc_806CDEAC:
{
    r0 = MemoryInline::FlatRead8((r31 + 358));
    MemoryInline::FlatWrite8((r31 + 359), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806CDDE4 func_806CDDE4 preserves=true fpr_mask=0x00000000
