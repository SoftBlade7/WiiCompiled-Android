#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80865534(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80865534;

loc_80865534:
{
    r0 = MemoryInline::FlatRead8((r3 + 1791));
    r5 = 0x808B0000u;
    r5 = (r5 + -1200);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80865544:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80865550;
    }
}

loc_80865548:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_80865550:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r4 = 5;
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8086555C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80865568;
    }
}

loc_80865560:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 1088));
    f1.d = PpcFmulsInline(f1.d, f0.d);
}

loc_80865568:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 1092));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80865570:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80865578;
    }
}

loc_80865574:
{
    r4 = 18;
}

loc_80865578:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x80864914u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80865534 func_80865534 preserves=true fpr_mask=0x00000000
