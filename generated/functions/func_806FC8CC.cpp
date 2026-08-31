#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FC8CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FC8CC;

loc_806FC8CC:
{
}

loc_806FC8D0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_806FC8E8;
    }
}

loc_806FC8D4:
{
}

loc_806FC8D8:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_806FC90C;
    }
}

loc_806FC8DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_806FC8E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC93C;
    }
}

loc_806FC8E4:
{
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_806FC8E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC8F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC8FC;
    }
}

loc_806FC8F4:
{
    r4 = 0;
    ctx->lr = 0x806FC8FCu;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

loc_806FC8FC:
{
    r3 = r30;
    r4 = 893;
    ctx->lr = 0x806FC908u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_806FC90C:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC914:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC920;
    }
}

loc_806FC918:
{
    r4 = 30;
    ctx->lr = 0x806FC920u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

loc_806FC920:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_806FC924:
{
    r3 = r30;
    r4 = 894;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC934;
    }
}

loc_806FC930:
{
    r4 = 896;
}

loc_806FC934:
{
    ctx->lr = 0x806FC938u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

loc_806FC93C:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC950;
    }
}

loc_806FC948:
{
    r4 = 30;
    ctx->lr = 0x806FC950u;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
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

loc_806FC950:
{
    r3 = r30;
    r4 = 895;
    ctx->lr = 0x806FC95Cu;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    cr = ctx->cr;
    xer = ctx->xer;
    InvokeDirectCpu<0x806FCB84u>(ctx);
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FC8CC func_806FC8CC preserves=true fpr_mask=0x00000000
