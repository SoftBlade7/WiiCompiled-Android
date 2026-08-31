#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806170EC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_806170EC;

loc_806170EC:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r0 = 2;
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = 0x809C0000u;
    r31 = (r31 + 7552);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = 0x80890000u;
    r30 = (r30 + 30360);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r29 = r3;
    MemoryInline::FlatWrite32((r3 + 384), r0);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 16));
    MemoryInline::FlatWriteFloat32((r3 + 416), f0.d);
    r3 = (r1 + 8);
    ctx->lr = 0x80617130u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    InvokeDirectCpu<0x80555464u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1.d = MemoryInline::FlatReadFloat32((r30 + 56));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f2.d = MemoryInline::FlatReadFloat32((r29 + 404));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r29 + 420), f1.d);
    f0.d = MemoryInline::FlatReadFloat32((r31 + 12));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80617160:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8061716C;
    }
}

loc_80617164:
{
    MemoryInline::FlatWriteFloat32((r29 + 420), f0.d);
    goto loc_8061717C;
}

loc_8061716C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80617174:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8061717C;
    }
}

loc_80617178:
{
    MemoryInline::FlatWriteFloat32((r29 + 420), f0.d);
}

loc_8061717C:
{
    f0.d = MemoryInline::FlatReadFloat32((r30 + 52));
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteFloat32((r29 + 424), f0.d);
    r4 = (r4 + 7552);
    f1.d = MemoryInline::FlatReadFloat32((r30 + 56));
    r3 = (r1 + 8);
    f0.d = MemoryInline::FlatReadFloat32((r4 + 28));
    MemoryInline::FlatWriteFloat32((r29 + 428), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x805556A8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f0.d = MemoryInline::FlatReadFloat32((r30 + 100));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_806171A8:
{
    r0 = cr;
    r4 = MemoryInline::FlatRead32((r29 + 396));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite8((r29 + 432), static_cast<uint8_t>(r0));
    r5 = 255;
    r3 = (r1 + 8);
    MemoryInline::FlatWrite8((r4 + 184), static_cast<uint8_t>(r5));
    r0 = 0;
    r4 = -1;
    MemoryInline::FlatWrite8((r29 + 128), static_cast<uint8_t>(r0));
    ctx->lr = 0x806171D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80555538u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFCE gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806170EC func_806170EC preserves=true fpr_mask=0x00000000
