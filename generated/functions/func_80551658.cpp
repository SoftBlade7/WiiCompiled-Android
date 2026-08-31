#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80551658(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80551658;

loc_80551658:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0x809C0000u;
    r30 = (r30 + -5376);
    r31 = (r30 + 0);
    r0 = MemoryInline::FlatRead32((r31 + 160));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80551680:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055171C;
    }
}

loc_80551684:
{
    r0 = MemoryInline::FlatRead8((r31 + 164));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8055168C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8055171C;
    }
}

loc_80551690:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r31 + 165), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 656));
    MemoryInline::FlatWriteRam8((r31 + 164), static_cast<uint8_t>(r0));
    ctx->lr = 0x805516A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x801B9138u>(ctx);
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
    r0 = MemoryInline::FlatRead32((r31 + 176));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805516AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805516BC;
    }
}

loc_805516B0:
{
    r3 = r31;
    ctx->lr = 0x805516B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80162FECu>(ctx);
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
    ctx->lr = 0x805516BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x8055265Cu>(ctx);
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
}

loc_805516BC:
{
    ctx->lr = 0x805516C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x80552960u>(ctx);
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
    r3 = (r30 + 0);
    r0 = MemoryInline::FlatRead8((r3 + 167));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805516CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805516D4;
    }
}

loc_805516D0:
{
    ctx->lr = 0x805516D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x805508A0u>(ctx);
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
}

loc_805516D4:
{
    r3 = (r30 + 608);
    r4 = (r1 + 8);
    r5 = 0;
    ctx->lr = 0x805516E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    InvokeDirectCpu<0x801A7424u>(ctx);
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
}

loc_805516E8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_805516F4;
    }
}

loc_805516EC:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
    goto loc_805516F8;
}

loc_805516F4:
{
    r0 = 0;
}

loc_805516F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805516FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805516D4;
    }
}

loc_80551700:
{
    r3 = (r30 + 0);
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 224));
    MemoryInline::FlatWriteRamFloat32((r3 + 220), f0.d);
    MemoryInline::FlatWriteRam32((r3 + 232), r0);
    MemoryInline::FlatWriteRam32((r3 + 168), r0);
    MemoryInline::FlatWriteRam32((r3 + 172), r0);
}

loc_8055171C:
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
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80551658 func_80551658 preserves=true fpr_mask=0x00000000
