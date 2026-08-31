#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079EEE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079EEE0;

loc_8079EEE0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 124));
    r0 = (r0 | 8);
    MemoryInline::FlatWrite32((r3 + 124), r0);
}

loc_8079EF10:
{
    r0 = MemoryInline::FlatRead32((r29 + 156));
}

loc_8079EF18:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079EF5C;
    }
}

loc_8079EF1C:
{
    r3 = (r0 + r31);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8079EF30:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079EF40;
    }
}

loc_8079EF34:
{
}

loc_8079EF38:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8079EF40;
    }
}

loc_8079EF3C:
{
    r0 = 0;
}

loc_8079EF40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079EF44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079EF50;
    }
}

loc_8079EF48:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8079EF54;
}

loc_8079EF50:
{
    r3 = 0;
}

loc_8079EF54:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8079EF5C:
{
    r0 = MemoryInline::FlatRead32((r29 + 168));
}

loc_8079EF64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8079EFA8;
    }
}

loc_8079EF68:
{
    r3 = (r0 + r31);
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_8079EF7C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079EF8C;
    }
}

loc_8079EF80:
{
}

loc_8079EF84:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(1))) {
        goto loc_8079EF8C;
    }
}

loc_8079EF88:
{
    r0 = 0;
}

loc_8079EF8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8079EF90:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079EF9C;
    }
}

loc_8079EF94:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_8079EFA0;
}

loc_8079EF9C:
{
    r3 = 0;
}

loc_8079EFA0:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
}

loc_8079EFA8:
{
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_8079EFB4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079EF10;
    }
}

loc_8079EFB8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 68));
    f1.d = MemoryInline::FlatReadFloat32((r29 + 72));
    f0.d = MemoryInline::FlatReadFloat32((r29 + 76));
    MemoryInline::FlatWriteFloat32((r29 + 140), f2.d);
    MemoryInline::FlatWriteFloat32((r29 + 144), f1.d);
    MemoryInline::FlatWriteFloat32((r29 + 148), f0.d);
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079EEE0 func_8079EEE0 preserves=true fpr_mask=0x00000000
