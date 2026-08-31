#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807A60F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807A60F8;

loc_807A60F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r5 = 0;
    r4 = -1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r6 = 0x808D0000u;
    MemoryInline::FlatWrite16((r3 + 424), static_cast<uint16_t>(r5));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    MemoryInline::FlatWrite32((r3 + 428), r4);
    r0 = (r0 & 192);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807A6120:
{
    MemoryInline::FlatWrite32((r3 + 432), r5);
    r6 = (r6 + 7124);
    r5 = MemoryInline::FlatRead32(r6);
    MemoryInline::FlatWriteRam32((r1 + 8), r5);
    r4 = MemoryInline::FlatRead32((r6 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 8));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807A614C;
    }
}

loc_807A6140:
{
    MemoryInline::FlatWrite32((r3 + 360), r5);
    MemoryInline::FlatWrite32((r3 + 364), r4);
    MemoryInline::FlatWrite32((r3 + 368), r0);
}

loc_807A614C:
{
    r0 = MemoryInline::FlatRead32((r3 + 120));
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 21600));
    r6 = 1;
    r0 = (r0 & -33554433);
    r4 = 270;
    MemoryInline::FlatWrite32((r3 + 428), r6);
    r5 = 0x808A0000u;
    r6 = MemoryInline::FlatRead32((r3 + 156));
    MemoryInline::FlatWrite32((r3 + 492), r4);
    r4 = 4;
    f2.d = MemoryInline::FlatReadFloat32((r5 + 21604));
    MemoryInline::FlatWrite32((r3 + 120), r0);
    MemoryInline::FlatWriteFloat32((r3 + 416), f1.d);
    r3 = MemoryInline::FlatRead32((r6 + 40));
    ctx->lr = 0x807A618Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x805573CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFEE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFF9 fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x807A60F8 func_807A60F8 preserves=true fpr_mask=0x00000000
