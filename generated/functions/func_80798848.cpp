#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80798848(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798848;

loc_80798848:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
}

loc_80798854:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8079886C;
    }
}

loc_80798864:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 580), static_cast<uint8_t>(r0));
}

loc_8079886C:
{
    r0 = MemoryInline::FlatRead8((r3 + 26));
}

loc_80798874:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80798880;
    }
}

loc_80798878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8079887C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807988DC;
    }
}

loc_80798880:
{
    r0 = MemoryInline::FlatRead32((r3 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_80798888:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798898;
    }
}

loc_8079888C:
{
    r4 = 0;
    r3 = (r3 + 136);
    ctx->lr = 0x80798898u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BC9F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80798898:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807988A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807988AC;
    }
}

loc_807988A4:
{
    r3 = (r31 + 84);
    ctx->lr = 0x807988ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BA5D8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_807988AC:
{
    r0 = MemoryInline::FlatRead32((r31 + 120));
}

loc_807988B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(20))) {
        goto loc_807988C8;
    }
}

loc_807988B8:
{
}

loc_807988BC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(r0))) {
        goto loc_807988C8;
    }
}

loc_807988C0:
{
    r0 = 20;
    MemoryInline::FlatWrite32((r31 + 120), r0);
}

loc_807988C8:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_807988D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807988DC;
    }
}

loc_807988D4:
{
    r3 = (r31 + 180);
    ctx->lr = 0x807988DCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80794C44u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_807988DC:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80798848 func_80798848 preserves=true fpr_mask=0x00000000
