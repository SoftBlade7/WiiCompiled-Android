#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FC4D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FC4D0;

loc_806FC4D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_806FC4D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC4E4;
    }
}

loc_806FC4D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_806FC4DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC500;
    }
}

loc_806FC4E0:
{
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r31 = ctx->gpr[31];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806FC4E4:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32((r31 + 12));
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = 0;
    r5 = 30;
    ctx->lr = 0x806FC4FCu;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r31 = ctx->gpr[31];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_806FC500:
{
    r3 = 0x809C0000u;
    f1.d = MemoryInline::FlatReadFloat32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 10400));
    r4 = 0;
    r5 = 30;
    ctx->lr = 0x806FC518u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x807182D0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r31 = ctx->gpr[31];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFE6 gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFD fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FC4D0 func_806FC4D0 preserves=true fpr_mask=0x00000000
