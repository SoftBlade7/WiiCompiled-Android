#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80865390(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80865390;

loc_80865390:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r0 = MemoryInline::FlatRead8((r3 + 1791));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_808653AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_808653B8;
    }
}

loc_808653B0:
{
    r3 = 0;
    goto loc_80865434;
}

loc_808653B8:
{
    r3 = MemoryInline::FlatRead32((r3 + 152));
    ctx->lr = 0x808653C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805914CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_808653C4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80865400;
    }
}

loc_808653C8:
{
    r4 = MemoryInline::FlatRead32((r31 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_808653D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808653E8;
    }
}

loc_808653D4:
{
    r3 = r31;
    r5 = 15;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_808653E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_808653F8;
    }
}

loc_808653E8:
{
    r3 = 15;
    r0 = 10;
    MemoryInline::FlatWrite32((r31 + 252), r3);
    MemoryInline::FlatWrite32((r31 + 256), r0);
}

loc_808653F8:
{
    r3 = 1;
    goto loc_80865434;
}

loc_80865400:
{
    r4 = MemoryInline::FlatRead32((r31 + 252));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_80865408:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865420;
    }
}

loc_8086540C:
{
    r3 = r31;
    r5 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80865DE8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8086541C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80865430;
    }
}

loc_80865420:
{
    r3 = 16;
    r0 = 20;
    MemoryInline::FlatWrite32((r31 + 252), r3);
    MemoryInline::FlatWrite32((r31 + 256), r0);
}

loc_80865430:
{
    r3 = 1;
}

loc_80865434:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0x800013FB gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=1
// RECOMP_REGISTRATION base 0x80865390 func_80865390 preserves=true fpr_mask=0x00000000
