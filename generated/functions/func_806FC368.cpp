#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FC368(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FC368;

loc_806FC368:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_806FC36C:
{
    r29 = 735;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC378;
    }
}

loc_806FC374:
{
    r29 = 738;
}

loc_806FC378:
{
}

loc_806FC37C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_806FC394;
    }
}

loc_806FC380:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(2));
}

loc_806FC384:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC3B8;
    }
}

loc_806FC388:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_806FC38C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC3CC;
    }
}

loc_806FC390:
{
    ctx->gpr[29] = r29;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    return;
}

loc_806FC394:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC39C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC3A8;
    }
}

loc_806FC3A0:
{
    r4 = 0;
    ctx->lr = 0x806FC3A8u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FC3A8:
{
    r3 = r30;
    r4 = r29;
    ctx->lr = 0x806FC3B4u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[29] = r29;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    return;
}

loc_806FC3B8:
{
    r4 = (r29 + r5);
    r3 = r30;
    r4 = (r4 + -1);
    ctx->lr = 0x806FC3C8u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[29] = r29;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    return;
}

loc_806FC3CC:
{
    r3 = r30;
    r4 = 737;
    ctx->lr = 0x806FC3D8u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[29] = r29;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FC368 func_806FC368 preserves=true fpr_mask=0x00000000
