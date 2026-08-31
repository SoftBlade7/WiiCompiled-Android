#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8068D4F8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8068D4F8;

loc_8068D4F8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r0 = MemoryInline::FlatRead8((r3 + 51));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068D50C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068D560;
    }
}

loc_8068D510:
{
    r0 = MemoryInline::FlatRead8((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8068D518:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8068D540;
    }
}

loc_8068D51C:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 20);
    MemoryInline::FlatWriteRamFloat32((r1 + 24), f1.d);
    r3 = (r3 + 116);
    MemoryInline::FlatWriteRamFloat32((r1 + 28), f1.d);
    ctx->lr = 0x8068D53Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8068D560;
}

loc_8068D540:
{
    r3 = 0x808A0000u;
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    r3 = (r3 + -10944);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f1.d);
    r3 = (r3 + 129);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    ctx->lr = 0x8068D560u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x806B5B88u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8068D560:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFBF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8068D4F8 func_8068D4F8 preserves=true fpr_mask=0x00000000
