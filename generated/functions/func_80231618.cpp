#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80231618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80231618;

loc_80231618:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r4 = MemoryInline::FlatRead32((r3 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_80231638:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80231648;
    }
}

loc_8023163C:
{
    r0 = (r4 + -1);
    MemoryInline::FlatWrite32((r3 + 20), r0);
    goto loc_802316BC;
}

loc_80231648:
{
    ctx->lr = 0x8023164Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DCEE8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 21);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
}

loc_80231654:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80231690;
    }
}

loc_80231658:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8023165C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023167C;
    }
}

loc_80231660:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-9));
}

loc_80231664:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8023167C;
    }
}

loc_80231668:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-41));
}

loc_8023166C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231690;
    }
}

loc_80231670:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-46));
}

loc_80231674:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80231690;
    }
}

loc_80231678:
{
    goto loc_802316A4;
}

loc_8023167C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r5 = 0;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_802316B4;
}

loc_80231690:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r5 = 2;
    MemoryInline::FlatWrite32((r31 + 8), r3);
    goto loc_802316B4;
}

loc_802316A4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 4), r0);
    r5 = 4;
    MemoryInline::FlatWrite32((r31 + 8), r3);
}

loc_802316B4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 20), r0);
}

loc_802316BC:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = r5;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80231618 func_80231618 preserves=true fpr_mask=0x00000000
