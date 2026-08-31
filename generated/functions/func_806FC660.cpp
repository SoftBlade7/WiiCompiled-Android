#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FC660(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FC660;

loc_806FC660:
{
}

loc_806FC664:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(1))) {
        goto loc_806FC67C;
    }
}

loc_806FC668:
{
}

loc_806FC66C:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(2))) {
        goto loc_806FC6CC;
    }
}

loc_806FC670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(3));
}

loc_806FC674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC6E8;
    }
}

loc_806FC678:
{
    goto loc_806FCB84;
}

loc_806FC67C:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC684:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC690;
    }
}

loc_806FC688:
{
    r4 = 0;
    ctx->lr = 0x806FC690u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E330u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FC690:
{
    r3 = r30;
    r4 = 871;
    ctx->lr = 0x806FC69Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806FCBA0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC6A4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FC6B4;
    }
}

loc_806FC6A8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 4));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_806FC6B4:
{
    r3 = MemoryInline::FlatRead32((r30 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC6BC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCB84;
    }
}

loc_806FC6C0:
{
    r4 = 10;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008E7A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_806FCB84;
}

loc_806FC6CC:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC6D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCB84;
    }
}

loc_806FC6D8:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 28));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    goto loc_806FCB84;
}

loc_806FC6E8:
{
    r3 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806FC6F0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FCB84;
    }
}

loc_806FC6F4:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 8));
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r5 = ctx->gpr[5];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
}

loc_806FCB84:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FC660 func_806FC660 preserves=true fpr_mask=0x00000000
