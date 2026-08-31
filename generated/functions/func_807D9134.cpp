#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D9134(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D9134;

loc_807D9134:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 16));
    ctx->lr = 0x807D9150u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D2DECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D9154:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9164;
    }
}

loc_807D9158:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    MemoryInline::FlatWriteFloat32((r31 + 576), f0.d);
}

loc_807D9164:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    ctx->lr = 0x807D916Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D2E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D9170:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D9180;
    }
}

loc_807D9174:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    MemoryInline::FlatWriteFloat32((r31 + 580), f0.d);
}

loc_807D9180:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    ctx->lr = 0x807D9188u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D2F04u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D918C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D919C;
    }
}

loc_807D9190:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    MemoryInline::FlatWriteFloat32((r31 + 584), f0.d);
}

loc_807D919C:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    ctx->lr = 0x807D91A4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x807D2FACu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807D91A8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807D91B8;
    }
}

loc_807D91AC:
{
    r3 = 0x808A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 29696));
    MemoryInline::FlatWriteFloat32((r31 + 588), f0.d);
}

loc_807D91B8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D9134 func_807D9134 preserves=true fpr_mask=0x00000000
