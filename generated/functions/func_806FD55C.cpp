#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FD55C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FD55C;

loc_806FD55C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 396));
    r31 = MemoryInline::FlatRead8((r3 + 393));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806FD580:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD5A0;
    }
}

loc_806FD584:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806FD590;
    }
}

loc_806FD588:
{
    r0 = MemoryInline::FlatRead32((r4 + 144));
    goto loc_806FD594;
}

loc_806FD590:
{
    r0 = -1;
}

loc_806FD594:
{
}

loc_806FD598:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(641))) {
        goto loc_806FD5A0;
    }
}

loc_806FD59C:
{
    r31 = 1;
}

loc_806FD5A0:
{
    r0 = MemoryInline::FlatRead8((r3 + 392));
}

loc_806FD5A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806FD5D4;
    }
}

loc_806FD5AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1));
}

loc_806FD5B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FD5D4;
    }
}

loc_806FD5B4:
{
    r3 = 0x809C0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4964));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    r5 = 20;
    ctx->lr = 0x806FD5D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F9E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806FD600;
}

loc_806FD5D4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_806FD5D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FD600;
    }
}

loc_806FD5DC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_806FD5E0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806FD600;
    }
}

loc_806FD5E4:
{
    r3 = 0x809C0000u;
    r5 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4968));
    r4 = 0;
    r3 = MemoryInline::FlatRead32((r3 + 9004));
    r5 = 60;
    ctx->lr = 0x806FD600u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806F9E78u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_806FD600:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r30 + 392), static_cast<uint8_t>(r31));
    MemoryInline::FlatWrite8((r30 + 393), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806FD55C func_806FD55C preserves=true fpr_mask=0x00000000
