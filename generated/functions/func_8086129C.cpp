#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8086129C(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8086129C;

loc_8086129C:
{
    r3 = 5;
    r4 = 0;
    ctx->lr = 0x808612A8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8054FED8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808612AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808612B8;
    }
}

loc_808612B0:
{
    r3 = 0;
    goto loc_80862738;
}

loc_808612B8:
{
    r3 = 0x809C0000u;
    r5 = MemoryInline::FlatRead32((r3 + -10424));
    r0 = MemoryInline::FlatRead16((r5 + 54));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
}

loc_808612C8:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_808612E8;
    }
}

loc_808612CC:
{
    r3 = 65536;
    r4 = (r0 & 255);
    r0 = (r3 + -27664);
    r0 = (r0 * r4);
    r3 = (r5 + r0);
    r4 = (r3 + 56);
    goto loc_808612EC;
}

loc_808612E8:
{
    r4 = 0;
}

loc_808612EC:
{
    r0 = MemoryInline::FlatRead8((r4 + 1686));
    r3 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808612F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80862738;
    }
}

loc_808612FC:
{
    r0 = MemoryInline::FlatRead32((r4 + 1700));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80861304:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80862738;
    }
}

loc_80861308:
{
    r3 = 1;
}

loc_80862738:
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
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC0001FFB gpr_write=0xE0001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8086129C func_8086129C preserves=true fpr_mask=0x00000000
