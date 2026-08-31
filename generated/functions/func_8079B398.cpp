#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8079B398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8079B398;

loc_8079B398:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079B3A4:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B424;
    }
}

loc_8079B3B0:
{
}

loc_8079B3B4:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079B3BC;
    }
}

loc_8079B3B8:
{
    r6 = MemoryInline::FlatRead8(r4);
}

loc_8079B3BC:
{
}

loc_8079B3C0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8079B3CC;
    }
}

loc_8079B3C4:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r6));
    goto loc_8079B3D0;
}

loc_8079B3CC:
{
    r6 = MemoryInline::FlatRead8(r3);
}

loc_8079B3D0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8079B3D4:
{
    r31 = (r3 + 1);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8079B428;
    }
}

loc_8079B3DC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(255));
}

loc_8079B3E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079B410;
    }
}

loc_8079B3E4:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10520));
    r3 = MemoryInline::FlatRead32((r3 + 24));
}

loc_8079B3F4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8079B400;
    }
}

loc_8079B3F8:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    goto loc_8079B404;
}

loc_8079B400:
{
    r0 = 0;
}

loc_8079B404:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8079B408:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8079B410;
    }
}

loc_8079B40C:
{
    r6 = 255;
}

loc_8079B410:
{
    r3 = r4;
    r4 = r6;
    r5 = 1;
    ctx->lr = 0x8079B420u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807B99D4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    goto loc_8079B428;
}

loc_8079B424:
{
    r31 = (r3 + 1);
}

loc_8079B428:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000007 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8079B398 func_8079B398 preserves=true fpr_mask=0x00000000
